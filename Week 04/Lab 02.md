# Micro Servo Test

## Introduction
+ Test model：Micro Servo SG90;
+ Servo arms can turn 180 degrees;
+ Connect a servo motor to the Arduino:
  - The darkest or even black one is usually the ground. Connect this to the Arduino GND;
  - Connect the power cable that in all standards should be red to 5V on the Arduino;
  - Connect the remaining line on the servo connector to a digital pin on the Arduino.
+ Principle:
<img src=https://user-images.githubusercontent.com/81423727/138289187-97a8ec95-5ebe-42f6-b723-64dec9c8d063.png width=30% />

## Basic Function
+ Servo.servoName; :Create a servo object
+ servo.attach(pin); :Connect digital pin
+ servo.write(degrees)
+ servo.writeMicroseconds(us)

## Coding
```
// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
int angle=10;
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Servo1.write(angle);
}
void loop(){ 
  for(angle=10; angle<180; angle++)
  {
    Servo1.write(angle);
    delay(15);
  }
  for(angle=180; angle>10; angle--)
  {
    Servo1.write(angle);
    delay(15);
  }
}
```

## Test
![WeChat_20211021215026 mp4_20211021_215445 (1)](https://user-images.githubusercontent.com/81423727/138293341-7eee20d1-74d5-429f-b4ab-729a01d63c14.gif)
