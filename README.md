# DataExtractor

This is a BDS mod which allows generating useful data used in AllayMC Project  
(such as block_attributes and item_data) from BDS server.

## How to use?
1. Install windows version BedrockServer. see [here](https://www.minecraft.net/en-us/download/server/bedrock).
2. Set the property `block-network-ids-are-hashes` in file `server.properties` to `false`.
3. Download PeEditor. see [here](https://github.com/LiteLDev/PeEditor),then move `PeEditor.exe` in the same path as BDS  
run `PeEditor -m -n`.
4. Download PreLoader. see [here](https://github.com/LiteLDev/PreLoader),then move `PreLoader.dll` in the same path as BDS.
5. Download the latest release and put it in the `plugins` folder.
6. Run `bedrock_server_mod.exe`, then enter the game, teleport to pos `0 64 0`, type `ext` in the chat, the output files will create in `data/*`.

## I want to build it myself!
1. Clone project source `git clone https://github.com/AllayMC/DataExtractor`.
2. You need to install [Visual Studio 2022](https://visualstudio.microsoft.com/)'s C++ desktop application development and SDK for Windows 10 or above, as well as `xmake` build tool.
3. Before building, please run `xmake require` to install all packages.
4. On first use,it will download the `PeEditor.exe`,After that a window will pop,please select the symbol file(`.pdb`) corresponding to the BDS version.
5. Open `vsxmake2022/DataExtractor.sln`, select `Build/Build Solution`

## Note 
1. If you are updating your BDS version, before build this plugin, you also need to update `bedrock_server_api.lib` and `bedrock_server_var.lib` in the `DataExtractor\build\bds\lib` folder. To generate these files, please run `PeEditor.exe -l` in the same path as BDS.
2. If you add new files, you can use `xmake project -k vsxmake -m "release"` to generate the vsproject files.

## Special thanks

Thanks to [LeviLamina](https://github.com/LiteLDev/LeviLamina) for their great work!
Thanks to [bds-data-scraper](https://github.com/Creeperface01/bds-data-scraper) for providing me some ideas about how to get the block types!