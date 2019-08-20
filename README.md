
# TOUCH 

This was a small project for some students in Industrial Design class for Installation Art.

This project uses the resistance of the human body to touch objects and triggers a+ different sounds per about 10 touch combinations.
Very musical rhythmic patterns can be created and the responses of playing sounds is without any latency.
This is also an excellent toy for kids. Just by using very simple hardware of a few resistors, diodes and an MP3 Serial port player are used. All schematics and code is included. Have fun !

This example uses two DIGITAL OUTPUT pins and two DIGITAL INPUT pins on the ARDUINO 
Each of the DIGITAL OUTPUT pins can be connected to one or two DIGITAL INPUT pins.

Arduino DOUT1 -- D1 ---- R1-------TP1    TP3------- Arduino DIN 1 ---------R3 --- GND

Arduino DOUT2 ---D2 ---- R2-------TP2    TP4------- Arduino DIN 2 -------- R4 --- GND

The Diode D1 and D2 is to prevent DOUT1 to be connected to DOUT2 which could cause damage to the Arduino  output.
R1 and R2 limit the output current in case TP1 and TP2  would be connected to ground instead connected to TP3 and TP4.
R3 and R4 are 100 KOhm resistors at the inputs to assure the input is low when there is no switch connection and the input is floating.

We have 4 Touch points, TP1 to P4. Each connection between the TPs represents a switch
The switches can be anything that conducts electricity, even the human body.

         TP1(OUT)   A       TP3(IN)
    
          B               D
   

         TP4(IN)   C       TP2(OUT)

The code sets D1 high and then read DIN1 and DIN2. The D2 is set and D1 low  and read DIN1 and DIN2 again.

When TP1 is high and TP3 is high, then A must be connected, and if TP4 is high, then B is connected as well.
WWhen TP2 is high and TP3 is high, then D must be connected, and if TP4 is high, then C is connected as well.

The in and output values represent a binary number and the results is converted to decimal.

    -- OUT --     -- IN ----
    DOUT1 DOUT2   DIN1  DIN2
    TP1   TP2     TP3   TP4      Value      Connection    
    1     0       0     0        8          -
    1     0       1     0        10         A
    1     0       0     1        9          B
    1     0       1     1        11         A+B 
    0     1       0     0        4          -
    0     1       1     0        6          D
    0     1       0     1        5          C
    0     1       1     1        7          C+D

This results in  8 different values.  However when TP3 and TP4 are 0 then there is no connection and no sound file is played.
Thus 6 different sounds can be played.

The value is used to decide which sound to play. For example 8 = 0008.mp3
The files must be named 0001.mp3 to 0016.mp3 and located in a subfolder on the SD card.

Updating MP3 files can be done using the USB connector. 

1. Set the switch is set in "ON" position
2. Connect a computer is to the DFPlayer USB connector
3. Connect powerto the Arduino
4. The dfplayer will act an an USB drive and files can be moved from the PC to the dfplayer. 
5. Disconnect the usb connectors
6. Set the switch to  "OFF"
7. Power on the Arduino.

This makes it conventient to change files and not require to take the SD card out to update the files.

** Material List **


* [uno] - Arduino Uno 
* [speaker] - 2W or more speaker (3W recommended)
* [dfplayer] - DFplayer Mini
* [usb] - USB type B connector
* [switch] - Mini Push Button Switch Latching DPDT
* Some resistors

[uno]:  https://www.arduino.cc/	
[speaker]: https://www.amazon.com/2w-speaker/s?k=2w+speaker
[usb]: https://www.molex.com/molex/products/datasheet.jsp?part=active/0670687041_IO_CONNECTORS.xml
[switch]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
[dfplayer]: https://www.dfrobot.com/product-1121.html
[switch]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
	 
Note: Watch the video in VLC Media Player
 
