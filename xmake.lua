add_rules("mode.debug", "mode.release")

includes("scripts/localbdslibrary.lua")

add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

option("localbdslibrary")
    set_default(true)
    set_showmenu(true)
    set_description("Use local bdslibrary")
option_end()

add_requires("localbdslibrary")

-- xmake-repo
add_requires("entt v3.12.2")
add_requires("gsl v4.0.0")
add_requires("leveldb 1.23")
add_requires("rapidjson v1.1.0")
add_requires("zlib-ng 2.1.3")

-- ^^^ for mc / for ll vvv
add_requires("fmt 10.1.1")
add_requires("magic_enum v0.9.0")
add_requires("nlohmann_json v3.11.2")
add_requires("gtest 1.12.1")

-- liteldev-repo
add_requires("pcg_cpp v1.0.0")
add_requires("preloader v1.3.0")
add_requires("symbolprovider v1.1.0")
add_requires("ctre 3.8.1")
add_requires("pfr 2.1.1")


target("DataExtractor")
    set_license("LGPL-3")
    set_kind("shared")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    set_pcxxheader("src/mc/_HeaderOutputPredefine.h")
    add_headerfiles("src/(**.h)", "src/(**.hpp)")
    add_includedirs("./src")
    add_cxflags("/utf-8", "/permissive-", "/EHa", "/W4")
    add_defines(
        "UNICODE", "LITELOADER_EXPORTS", "WIN32_LEAN_AND_MEAN",
        "CPPHTTPLIB_OPENSSL_SUPPORT", "_AMD64_", "NOMINMAX",
        "_CRT_SECURE_NO_WARNINGS"
    )
    add_shflags("/DELAYLOAD:bedrock_server.dll")
    add_files("src/**.cpp")
    -- xmake-repo
    add_packages("entt", "fmt", "gsl", "gtest", "leveldb", "magic_enum", "nlohmann_json", "rapidjson","zlib-ng")
    -- liteldev-repo
    add_packages("pcg_cpp", "preloader", "symbolprovider", "ctre", "pfr")
    add_packages("localbdslibrary")

task("bds-lib")
    on_run(function ()
        import("core.base.option")
        local actions = {"remote", "local", "clean", "tool", "bdsversion"}
        -- error if multiple actions are specified or no action is specified
        local action = nil
        for _, a in ipairs(actions) do
            if option.get(a) then
                if action then
                    raise("only one action can be specified")
                end
                action = a
            end
        end
        if not action then
            raise("no action specified")
        end
        if action == "remote" then
            print("[localbdslibrary] Using remote BDS library.")
            os.exec("xmake config --localbdslibrary=n")
        elseif action == "local" then
            print("[localbdslibrary] Using local BDS library.")
            os.exec("xmake config --localbdslibrary=y")
        elseif action == "clean" then
            import("core.project.config")
            local lib_dir = path.join(config.buildir(), "bds")
            os.rm(lib_dir)
            print("[localbdslibrary] Local bdslibrary has been cleared.")
        elseif action == "tool" then
            import("core.project.config")
            local tool_dir = path.join(config.buildir(), "tools")
            os.rm(tool_dir)
            print("[localbdslibrary] Toolchain has been cleared.")
        elseif action == "bdsversion" then
            import("utils.archive")
            import("core.project.config")
            import("net.http")

            local pe_editor_version = "v3.3.0"
            local lib_path = path.join(config.buildir(), "bds", "lib")
            local bedrock_server_api = path.join(lib_path, "bedrock_server_api.lib")
            local bedrock_server_var = path.join(lib_path, "bedrock_server_var.lib")
            if os.isfile(bedrock_server_api) and os.isfile(bedrock_server_var) then
                print("[localbdslibrary] Local bds library found, skipping generation")
                return
            end

            local release_ver = "1.20.50.03"
            local tools_path = path.join(config.buildir(), "tools", "PeEditor-" .. pe_editor_version .. ".exe")
            if not os.isfile(tools_path) then
                -- not found, download it
                print("[localbdslibrary] Downloading PeEditor.exe...")
                http.download("https://github.com/LiteLDev/PeEditor/releases/download/" .. pe_editor_version .. "/PeEditor.exe", tools_path)
                if not os.isfile(tools_path) then
                    raise("[localbdslibrary] Failed to download PeEditor.exe")
                end
                print("[localbdslibrary] PeEditor.exe downloaded successfully")
            end
            local url = nil
            local bds_path = nil
            if option.get("release") then
                url = "https://minecraft.azureedge.net/bin-win/bedrock-server-".. option.get("release") ..".zip"
                bds_path = path.join(config.buildir(), "bds" , "instance" , "bedrock-server-".. option.get("release") ..".zip")
            elseif option.get("preview") then 
                url = "https://minecraft.azureedge.net/bin-win-preview/bedrock-server-".. option.get("preview") ..".zip"
                bds_path = path.join(config.buildir(), "bds" , "instance" , "bedrock-server-".. option.get("preview") ..".zip")
            else 
                raise("[localbdslibrary] Failed to set bedrock version")
            end
            print("[localbdslibrary] Downloading bedrock_server...")
            http.download(url, bds_path)
            if not os.isfile(bds_path) then
                raise("[localbdslibrary] Failed to download bedrock_server")
            end
            print("[localbdslibrary] bedrock_server downloaded successfully")
            local unzip_path = path.join(config.buildir(), "bds" , "instance")
            archive.extract(bds_path, unzip_path)
            os.vexec("%s -l -o %s --pdb %s", tools_path, lib_path , path.join(unzip_path, "bedrock_server.pdb"))
        end
    end)

    set_menu {
        usage = "xmake bds-lib",
        description = "Manage local BDS library",
        options = {
            {'r', "remote", "k", nil, "Use remote BDS library"},
            {'l', "local", "k", nil, "Use local BDS library"},
            {'c', "clean", "k", nil, "Clean local BDS library"},
            {'t', "tool", "k", nil, "Remove toolchain"},
            {'b', "bdsversion", "k", nil, "From specified bdsversion to install BDS library"},
            {nil, "release", "kv", "1.20.50.03", "choose release version"},
            {nil, "preview", "kv", "1.20.60.22", "choose preview version"}
        }
    }