# Super-Mario-Bros-using-ESP-host
A simple way to host websites on a ESP, this example is super mario bros

# How to use:

## 1: Install arduino IDE 2.X

You should be able to directly download it from here:

https://downloads.arduino.cc/arduino-ide/arduino-ide_latest_Windows_64bit.exe

## 2: Install LittleFS for arduino

Go to this link: 

https://github.com/earlephilhower/arduino-littlefs-upload/releases

And download arduino-littlefs-upload-1.6.0.vsix

THen, make a folder called exsactly "plugins" in C:\Users\<username>\.arduinoIDE\

and put the .vsix

## 3: Download this repo

## 4: Open MarioHoster.ino

## 5: Get ESP8622 support:

File → Preferences

Add this URL to Additional Boards Manager URLs:

    https://arduino.esp8266.com/stable/package_esp8266com_index.json

Tools → Board → Boards Manager

Install ESP8266 by ESP8266 Community

## 6: Set up the settings for your ESP in the Tools menu, for a ESP 12F module with a standerd programmer I use these settings:

<img width="285" height="477" alt="image" src="https://github.com/user-attachments/assets/68da4327-b84d-43e3-b140-f4f89e915dce" />



