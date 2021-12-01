#include <Wire.h>
#include <SD.h>
#define SD_ChipSelectPin 10

#include <TMRpcm.h> 
#include <SPI.h>

TMRpcm tmrpcm;

void setup() 
{
  Serial.begin(9600);
  tmrpcm.speakerPin = 9;

  if (!SD.begin(SD_ChipSelectPin)) {
  Serial.println("SD fail");
  return;
  }
  else{
    Serial.println("SD Done");
  }
}


void loop() 
{
  if (Serial.available() > 0)   
  {     
    String comdata = "";   
    while (Serial.available() > 0)
    {       
      comdata += char(Serial.read());      
      delay(2);     
     }     
    if (comdata.length() > 0)
    {
      tmrpcm.play("1.wav");     
      delay(100);  
      Serial.print(comdata);       
    }else {
      tmrpcm.stopPlayback();
        delay(100);
  }
  delay(100);
}  
 }
