
# TOUCH 

This example uses two DIGITAL OUTPUT pins on the ARDUIO and two DIGITAL INPUT pins.
Each of the DIGITAL OUTPUT pin can be connected to two DIGITAL INPUT pins.

 Arduino DOUT1 -- D1 ---- R1-------TP1    TP3------- Arduino DIN 1 ---------R3 --- GND
 Arduino DOUT2 ---D2 ---- R2-------TP2    TP4------- Arduino DIN 2 -------- R4 --- GND

The Diode D1 and D2 is to prevent DOUT1 ne connected to DOUT2 which could cause damage to the Arduino  output.
R1 and R2 limit the current in case TP1 and TP2 by accident would be connected to ground inatead connected to TP3 and TP4.
An 100 KOhm resistor is added at the inputs to assure the input is low when there is no switch connection and the input is floating.

We have 4 Touch points, TP1 to P4. The TP can be connected and when connected
an output is connected to another input. This represents 4 switches.
The touchpoints can be connected to electrical conductors, such as metal as an an on/off switch.

         TP1(OUT)   A       TP3(IN)
    
          B               D
   

         TP4(IN)   C       TP2(OUT)

We make D1 high, then read DIN1 and DIN2 
Then mke D2 high and read DIN1 and DIN2 again.

When TP1 is high and TP3 is high, then A must be connected, and if TP4 is high, then B is connected as well.
When TP2 is high and TP3 is high, then D must be connected, and if TP4 is high, then C is connected as well.

Using the in and output values, we cam create a binary number, and then convert it into decimal.

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

Thus we cam have 8 different combinations.
When TP3 and TP4 are 0 then there is no connection, and no sound is played.
This 6 different sounds can be played.


We calculate the value and then play a different sound file using the df player.
We use the value to select the file to play, for example 8 = 0008.mp3
The files must be named 0001.mp3 to 0016.mp3 and located in a subfolder on the SD card.

There is a switch and a USB connector. When a conputer is connected to the USB port and the switch is set in "ON" position, then powr onthe Arduno, the dfplayer will act an an USB drive and files can be moved from the PC to the dfplayer. 
This mmakes it conventient to change files and not need to take out the SD card.  After transfer, the swiych must be set ot OFF and the Arduno reset.


** Material List **


* [uno] - Arduino Uno 
* [speaker] - 2W or more speaker (3W recommended)
* [dfplayer] - DFplayer Mini
* [usb] - USB type B connector
* [switch] - Mini Push Button Switch Latching DPDT
* [resistors] - Some resistors

[uno]:  https://www.arduino.cc/	
[speaker]: https://www.amazon.com/2w-speaker/s?k=2w+speaker
[usb]: https://www.molex.com/molex/products/datasheet.jsp?part=active/0670687041_IO_CONNECTORS.xml
[switch]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
[dfplayer]: https://www.dfrobot.com/product-1121.html
[switch]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
	 

 
