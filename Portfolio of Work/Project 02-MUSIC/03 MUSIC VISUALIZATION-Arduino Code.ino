#include <Wire.h>
#include "Adafruit_MPR121.h"
#include <SD.h>
#define SD_ChipSelectPin 10

#include <TMRpcm.h> 
#include <SPI.h>

TMRpcm tmrpcm;

Adafruit_MPR121 cap = Adafruit_MPR121();

uint16_t lasttouched = 0;
uint16_t currtouched = 0;

void setup() {
  Serial.begin(9600);
  
  tmrpcm.speakerPin = 9;
  pinMode(9,OUTPUT);
  if (!SD.begin(SD_ChipSelectPin)) {
  Serial.println("SD fail");
  return;
  }
  else{
    Serial.println("SD Done");
  }
  
  while (!Serial) { 
    delay(10);
  }
  
  Serial.println("Adafruit MPR121 Capacitive Touch sensor test"); 

  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");
}

void loop() {
  currtouched = cap.touched();

      if ((currtouched & _BV(0)) && !(lasttouched & _BV(0)) ) {
      Serial.print(0); Serial.println(" touched");
     Serial.write("a");
    }
    if (!(currtouched & _BV(0)) && (lasttouched & _BV(0)) ) {
      Serial.print(0); Serial.println(" released");
    }
    delay(50); 
 
    if ((currtouched & _BV(3)) && !(lasttouched & _BV(3)) ) {
      Serial.print(3); Serial.println(" touched");
    Serial.write("b");
    }
    if (!(currtouched & _BV(3)) && (lasttouched & _BV(3)) ) {
      Serial.print(3); Serial.println(" released");
    }
    delay(50); 

    if ((currtouched & _BV(5)) && !(lasttouched & _BV(5)) ) {
      Serial.print(5); Serial.println(" touched");
     Serial.write("c");
    }
    if (!(currtouched & _BV(5)) && (lasttouched & _BV(5)) ) {
      Serial.print(5); Serial.println(" released");
    }
    delay(50); 

    if ((currtouched & _BV(8)) && !(lasttouched & _BV(8)) ) {
      Serial.print(8); Serial.println(" touched");
     Serial.write("d");
    }
    if (!(currtouched & _BV(8)) && (lasttouched & _BV(8)) ) {
      Serial.print(8); Serial.println(" released");
    }
    delay(50); 

    if ((currtouched & _BV(9)) && !(lasttouched & _BV(9)) ) {
      Serial.print(9); Serial.println(" touched");
     Serial.write("e");
    }
    if (!(currtouched & _BV(9)) && (lasttouched & _BV(9)) ) {
      Serial.print(9); Serial.println(" released");
    }
    delay(50); 
 
  lasttouched = currtouched;
  
  return;

  }
