# Automatic Water Level Monitoring and Water Injection System
## INSPIRATION
Let a container never exceed the maximum water level, and carry out timely and automatically water level control.

## DESIGN MIND
+ Preliminary thinking
  - <img src=https://user-images.githubusercontent.com/81423727/141829803-0098f8a0-79fc-41ab-9b0e-0cdf930dc1af.jpg width=50% />

+ Ways to control water sources
  - <img src=https://user-images.githubusercontent.com/81423727/141832268-fab34833-8825-4fea-bf41-0e45c25a8b17.jpg width=50% />

## POSSIBLE COMPONENTS
+ Water Sensor;
+ Micro Servo;
+ Some pipes；
+ Container;
+ Jumper wires;
+ Others;

## SCHEMATIC DESIGN
<img src=https://user-images.githubusercontent.com/81423727/141836483-98588d81-6bbb-4f88-ab3e-190235ddce02.png width=50% />

## CODING
```
#include <Servo.h>
int servoPin=3;
Servo Servo1;
int angle=0;
int resval = 0;  // holds the value
int respin = A5; // sensor pin used
  
void setup() { 
  Servo1.attach(servoPin);
  Servo1.write(angle);
  // start the serial console
  //Serial.begin(9600);
} 
  
void loop() { 
   
  resval = analogRead(respin); //Read data from analog pin and store it to resval variable
     
  if(resval>330){
    angle=60;
    Servo1.write(angle);
    delay(15);
  }
  else if(resval<330){
    angle=0;
    Servo1.write(angle);
    delay(15);
  }
  delay(1000); 
}
```

## TEST

![77f4bd7b1061453be822a7d50515a703 (1)](https://user-images.githubusercontent.com/81423727/141837419-4f1dd01c-20d2-4e97-9045-1594f4b84cd2.gif)

![9aee9c45aaa3ca0ebfe1bf36eb47f78f](https://user-images.githubusercontent.com/81423727/141837448-ff48980f-cb91-4897-9980-05d0ba38d12b.gif)

