# DataExtractor

This is a BDS[LiteLoaderBDS]() mod which allows generating useful data used in Allay Project  
(such as block_attributes and item_data) from BDS server.

## How to use?
1. install Windows version BedRockServer. see [here](https://www.minecraft.net/en-us/download/server/bedrock).
2. download PeEditor. see [here](https://github.com/LiteLDev/PeEditor),then move `PeEditor.exe` in the same path as BDS  
run `PeEditor -m -n`.
3. download PreLoader. see [here](https://github.com/LiteLDev/PreLoader),then move `PreLoader.dll` in the same path as BDS.
4. download the latest release and put it in the `plugins` folder.
5. start your server, input `ext` in chat then enter, the output files will located in `data/*`.

Please note that you should enter the server before start extracting the data!

Also remember to set the property ```block-network-ids-are-hashes``` in file ```server.properties``` to ```false```

## I want to build it myself!
1. clone project source `git clone https://github.com/AllayMC/DataExtractor`.
2. you need to install Visual Studio's C++ desktop application development and SDK for Windows 10 or above, as well as `xmake` build tool.
3. before building, please run `xmake project -k cmake` to generate the cmakefile for code completion.
4. run `xmake build`,then will download the `PeEditor.exe`.  
After that, a file selection window will pop up, please select the symbol file(.pdb) corresponding to the BDS version.

## I want to update the version of the bds data file it generate
1. update the header file, download `HeaderOutput` and its default configuration file(`assets/*`).
2. from [BDSOriginalData](https://github.com/LiteLDev/BDSOriginalData)Download the target version of BDS data.
3. move `HeaderGenerator`, its configuration file, and downloaded BDS data in the same path.
4. run `java -jar HeaderGenerator.jar`, and the header file will be generated in the `header/*`.
5. you need to manually modify some header file definition. You can refer to the modification backup in the `bak` path.
6. run `xmake bds-lib -c` to clean old BDS lib, then run `xmake bds-lib -l` to update the version of BDS lib you need.
7. run `xmake build`

## Special thanks

Thanks to [LiteLoaderBDS](https://github.com/LiteLDev/LiteLoaderBDS) for their great work!

Thanks to [bds-data-scraper](https://github.com/Creeperface01/bds-data-scraper) for providing me some ideas about how to get the block types!

