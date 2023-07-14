# DataExtractor

This is a BDS[LiteLoaderBDS]() mod which allows generating useful data used in Allay Project (such as block_attributes.json and item_data.json) from BDS server.

## How to use?

1. Install LiteLoaderBDS. For about how to install it, see [here](https://github.com/LiteLDev/LiteLoaderBDS)
2. Download the latest release and put it in the ```plugins``` folder
3. Start your server, run command ```/ext```, the output files will located in ```data/*```

Please note that you should enter the server before start extracting the data!

## I want to build it myself!

1. Make sure you have MSVC++ (Microsoft Visual C++ 17 and above) and CMake installed on your PC. Also you need to have an ide such as Clion (I'm using), Visual Studio or Visual Studio Code.
2. Clone this repository to your PC. Before build, you need to generate the ```bedrock_server_api.lib``` and ```bedrock_server_var.lib``` yourself (because they are too large) and put them into ```SDK/lib``` folder. To generate these two files, you should use this tool [PeEditor](https://github.com/LiteLDev/LiteLoaderBDS/blob/adaptation/1.20.0/Tools/PeEditor.exe).
3. After configuring the VC++ environment, click the ```Build``` button in your ide. If there are no accidents, you will get a file named ```DataExtractor.dll``` in the output folder that you specify

## I want to contribute!

Although this project is rudimentary, the truth is that we don't just extract these files. 

With the header files provided by LiteLoaderBDS, we can get a lot of things! 

We welcome your contributions!

## Special thanks

Thanks to [LiteLoaderBDS](https://github.com/LiteLDev/LiteLoaderBDS) for their great work!

Thanks to [bds-data-scraper](https://github.com/Creeperface01/bds-data-scraper) for providing me some ideas about how to get the block types!

