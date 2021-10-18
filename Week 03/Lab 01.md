# What is PWM?

## Coding
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
## Schematic
![Dazzling Habbi-Krunk](https://user-images.githubusercontent.com/81423727/137745904-12993fa8-cfa5-46ca-87e6-c468c4ca51ee.png)
## Demo Video
[Fade LED](https://youtu.be/8mfiZVsDR1Q)
