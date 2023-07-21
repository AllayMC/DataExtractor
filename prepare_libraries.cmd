@echo off

if not exist .\SDK\Lib\bedrock_server_api.lib goto process
if not exist .\SDK\Lib\bedrock_server_var.lib goto process
goto end

:process
cd /d .\SDK\tools\
PeEditor.exe -c -l -o ../lib

:end