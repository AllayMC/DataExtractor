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
6. Run `bedrock_server_mod.exe`, then enter the game, teleport to pos `0 200 0`, type `ext` in the chat, the output files will create in `data/*`.

## I want to build it myself!
1. Clone project source `git clone https://github.com/AllayMC/DataExtractor`.
2. You need to install [Visual Studio](https://visualstudio.microsoft.com/)'s C++ desktop application development and SDK for Windows 10 or above, as well as `xmake` build tool.
3. Before building, please run `xmake project -k cmake` to generate the cmakefile for code completion, then will download the `PeEditor.exe`.
After that, a file selection window will pop up, please select the symbol file(`.pdb`) corresponding to the BDS version.
5. Install the xmake extension for Visual Studio, open it in `extensions/XMake`, select `mode release`, `platform windows`, `architecture x64`, and click Build.

## Special thanks

Thanks to [LiteLoaderBDS](https://github.com/LiteLDev/LiteLoaderBDS) for their great work!

Thanks to [bds-data-scraper](https://github.com/Creeperface01/bds-data-scraper) for providing me some ideas about how to get the block types!

