# DataExtractor

This is a BDS mod which allows generating useful data used in AllayMC Project from BDS server.

## How to use?
1. Install windows version BedrockServer. see [here](https://www.minecraft.net/en-us/download/server/bedrock).
2. Set the property `block-network-ids-are-hashes` in file `server.properties` to `false`.
3. Install latest levilamina loader. For how to install it, please see [here](https://github.com/LiteLDev/LeviLamina?tab=readme-ov-file#install)
4. Download the latest release and put ```DataExtractor.dll``` and ```manifest.json``` it into `plugin/DataExtractor` folder (you may need to create it if it doesn't exist).
5. Run `bedrock_server_mod.exe`, type `/ext` in the chat, the output files will create in `data/*`.

## I want to build it myself!
See [here](https://levilamina.liteldev.com/tutorials/create_your_first_plugin) for how to build levilamina plugin

## Special thanks

Thanks to [LeviLamina](https://github.com/LiteLDev/LeviLamina) for their great work!