# What is PWM?
+ Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means.
+ Digital control is used to create a square wave, a signal switched between on and off.
+ By changing the portion of the time that the signal spends on versus the signal spend off, to simulate on-off pattern.
+ Pulse width is the duration of **"on time"**.
+ For example
  - If repeat this on-off pattern fast enough, the result is as if the signal is a steady voltage between 0 and Vcc controlling the brightness of the LED.
  - In the graphic below, the green lines represent a regular time period. This duration or period is the inverse of the PWM frequency.
  - In other words, with Arduino's PWM frequency at about 500Hz, the green lines would measure 2 (1/500) milliseconds each. 
+ A call to analogWrite() is on a scale of 0 - 255, such that analogWrite(255) requests a 100% duty cycle (always on), and analogWrite(127) is a 50% duty cycle (on half the time) for example.

![image](https://user-images.githubusercontent.com/81423727/137626414-eff361b5-0a85-4d3d-b9e7-5e0d139a25c1.png)

# Coding
```
int ledPin=3;
int brightness=0;
int amount=5;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  for(brightness=0;brightness<=255;brightness+=amount){
    analogWrite(ledPin,brightness);
      delay(50);
  }
for(brightness=255;brightness>=0;brightness-=amount){
    analogWrite(ledPin,brightness);
      delay(50);
  }
}
```
# Schematic
![Dazzling Habbi-Krunk](https://user-images.githubusercontent.com/81423727/137745904-12993fa8-cfa5-46ca-87e6-c468c4ca51ee.png)
# Demo Video
[Fade LED](https://youtu.be/8mfiZVsDR1Q)
[TinkerCAD](https://youtu.be/zsil9-A9sII)
