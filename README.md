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

and put the .vsix in there

## 3: Download this repo

## 4: Open MarioHoster.ino

## 5: Get ESP8622 support:

File → Preferences

Add this URL to Additional Boards Manager URLs:

    https://arduino.esp8266.com/stable/package_esp8266com_index.json

Tools → Board → Boards Manager

Install ESP8266 by ESP8266 Community

## 6: Set up the settings for your ESP in the Tools menu, for a ESP 12F module with a standerd programmer I use these settings:

IMPORTANT: The files for this take up about 1.5 megabytes, so on the Flash size screen showen, find out what size your ESP is (ESP 12 F is 4mb) and select a FS with more then 1.5mb 

<img width="740" height="790" alt="image" src="https://github.com/user-attachments/assets/d0bcb22d-9e92-4cfb-92e5-af3b53e78e51" />

## 7: Upload to the ESP

Click the upload button, after compiling you should see :

Writing at 0x00034000... (93 %)

Writing at 0x00038000... (100 %)

Wrote 334160 bytes (242842 compressed) at 0x00000000 in 21.6 seconds (effective 123.9 kbit/s)...

Hash of data verified.

Leaving...

Hard resetting via RTS pin...

## 8: Run Little FS:

Press F1, and search for "Upload Little FS to Pico/ESP8266/ESP32" then click on it. 

You should see alot of .js files scroll down, then see

Writing at 0x00160000... (96 %)

Writing at 0x00164000... (100 %)

Wrote 3121152 bytes (417724 compressed) at 0x00100000 in 38.4 seconds (effective 650.4 kbit/s)...

Hash of data verified.

Leaving...

Hard resetting via RTS pin...

Completed upload.

## 9: Reset the ESP using the reset button

## 10: Done! On any seperate device that has arrow keys so you can play, connect to the "ESP Mario!" Network (There shouldnt be a password) and go to: 

    192.168.4.1

You should see:

    






