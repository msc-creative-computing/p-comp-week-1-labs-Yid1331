
#include <Wire.h>
#include "Adafruit_MPR121.h"

Adafruit_MPR121 cap = Adafruit_MPR121();

uint16_t lasttouched = 0;
uint16_t currtouched = 0;
void setup() {
  Serial.begin(9600);

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
      Serial.write("a");
    }
    if (!(currtouched & _BV(0)) && (lasttouched & _BV(0)) ) {
      Serial.write("f");
    }
  
      if ((currtouched & _BV(3)) && !(lasttouched & _BV(3)) ) {
      Serial.write("b");
    }
    if (!(currtouched & _BV(3)) && (lasttouched & _BV(3)) ) {
      Serial.write("f");
    }

    if ((currtouched & _BV(5)) && !(lasttouched & _BV(5)) ) {
      Serial.write("c");
    }
    if (!(currtouched & _BV(5)) && (lasttouched & _BV(5)) ) {
      Serial.write("f");
    }

    if ((currtouched & _BV(8)) && !(lasttouched & _BV(8)) ) {
      Serial.write("d");
    }
    if (!(currtouched & _BV(8)) && (lasttouched & _BV(8)) ) {
      Serial.write("f");
    }

    if ((currtouched & _BV(9)) && !(lasttouched & _BV(9)) ) {
      Serial.write("e");
    }
    if (!(currtouched & _BV(9)) && (lasttouched & _BV(9)) ) {
      Serial.write("f");
    }
  
  lasttouched = currtouched;

  return;
} 
