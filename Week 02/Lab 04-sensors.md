# 1.PIR（Passive Infrared） Motion Senor
## Overview
IR sensors allow you to sense motion, almost always used to detect whether a human has moved in or out of the sensors range. 
General type:HC-SR501
![image](https://user-images.githubusercontent.com/81423727/137350905-c01bec5b-3fe7-4c0b-9b0f-755362d283e7.png)

## Principle
![image](https://user-images.githubusercontent.com/81423727/137359258-cff9b557-a9a8-4441-9a40-46a4da9d73b1.png)
The round metal can with a rectangular crystal in the center, which can detect levels of infrared radiation.
![image](https://user-images.githubusercontent.com/81423727/137349588-00e779de-4a3b-42bf-9f61-e192ffab859f.png)

The PIR sensor itself has two slots in it, each slot is made of a special material that is sensitive to IR. 
When the sensor is idle, both slots detect the same amount of IR, the ambient amount radiated from the room or walls or outdoors.
When a warm body like a human passes by, it first intercepts one half of the PIR sensor, which causes a positive differential change between the two halves.
When the warm body leaves the sensing area, the reverse happens, whereby the sensor generates a negative differential change. These change pulses are what is detected.

## Structure
![image](https://user-images.githubusercontent.com/81423727/137350385-edb2514c-543c-4bac-90b8-a7242ca88e43.png)
+ 3pins: one is vcc; one is ground；one is digital output.
  - Output is 0 or 1, motion is detected it's 1, no motion is 0.
+ Adjust(potentiometer): one is Delay Time Adjust, another is Sensitivity Adjust.
  - Delay Time Adjust: Set how long the output will remain HIGH after detection, minimum 3 seconds, maximum 5 mins.
  - Sensitivity Adjust: Set the maximum distance that the sensor can be detected, about 3-7 meters.   
+ Mode: one is H-mode; another is L-mode.
  - Repeatable(H) mode: Hold/Repeat/Retrigger mode; sensor will continue to output HIGH as long as it continues to detect motion.
  - Non- Repeatable(L) mode L mode : No-repeat/No-retriggering mode, Output will stay HIGH for the period set by the Delay Time Adjust.
  - genenrally use H-mode.
  - 
## Reference
[Web 1](https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor?view=all)
[Web 2](https://components101.com/sensors/hc-sr501-pir-sensor)

## Experiment coding
```
int ledPin = 13;      
int inputPin = 2;          
int pirState = 0;
 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  Serial.begin(9600);
}
 
void loop(){
  pirState = digitalRead(inputPin);  // read input value
  if (pirState == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);
      Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    }
}
```

## Demo Vedio
[PIR](https://youtu.be/kSdFCflDH5w)
