#include <Wire.h>
#include <SD.h>
#define SD_ChipSelectPin 10

#include <TMRpcm.h> 
#include <SPI.h>

TMRpcm tmrpcm;

const int flexPin = A3; 
const int flexPin1 = A4; 
const int flexPin2 = A5; 
const int flexPin3 = A6; 

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
  int flexValue;
  int flexValue1;
  int flexValue2;
  int flexValue3;
  
  flexValue = analogRead(flexPin);
  flexValue1 = analogRead(flexPin1);
  flexValue2 = analogRead(flexPin2);
  flexValue3 = analogRead(flexPin3);
  
  //“OK” gesture
  if(flexValue>680){
      tmrpcm.play("1.wav");
  }
  else{
    tmrpcm.stopPlayback();
  }
  delay(20);

  //“Victory!” gesture
  if(flexValue2,flexValue3>680){
     tmrpcm.play("2.wav");
  }
  else{
    tmrpcm.stopPlayback();
  }
  delay(20);

  //“666” gesture
   if(flexValue,flexValue1,flexValue2>680){
     tmrpcm.play("3.wav");
  }
  else{
    tmrpcm.stopPlayback();
  }
  delay(20);

  //“Good” gesture
   if(flexValue,flexValue1,flexValue2,flexValue3>680){
     tmrpcm.play("4.wav");
  }
  else{
    tmrpcm.stopPlayback();
  }
  delay(20);
} 
