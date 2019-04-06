#include "DFPlayer_Mini_Mp3.h"


 void setup()
 {

   pinMode(8, INPUT);   
   pinMode(9, INPUT);  

   pinMode(3, OUTPUT); 
   pinMode(5, OUTPUT); 
        
   // put your setup code here, to run once:
   Serial.begin(9600);
   mp3_set_serial (Serial); //set Serial for DFPlayer-mini mp3 module
   mp3_set_volume (30);
   mp3_stop ();
 
}

void loop()
{
  
    digitalWrite(5,1);
    digitalWrite(3,0);

    delay (10); 

    int in8_5= digitalRead(8);
    int in9_5= digitalRead(9);
       
    delay (250);     

    digitalWrite(5,0);
    digitalWrite(3,1);

    delay (10); 
    
    int in8_3= digitalRead(8);
    int in9_3= digitalRead(9);
 
    //Serial.print(in8_5);
    //Serial.print(in9_5);
    //Serial.print(in8_3);
    //Serial.print(in9_3);

    int value = in8_5 * 8 + in9_5 * 4 + in8_3 * 2  + in9_3;

    if (value != 0 ) mp3_play(value);
    
    Serial.print(value);
    Serial.print("\n");
    
    delay (250);     
}
