# Voltage Dividers
## Introduction of RGB LED
+ You can produce almost any color by combining RED GREEN BLUE colors.

![image](https://user-images.githubusercontent.com/81423727/141686427-6c2368c4-89b0-4d11-949a-64e856bf79bb.png)

+ Divided into two types.
  - There are two kinds of RGB LEDs: common anode LED and common cathode LED. The figure below illustrates a common anode and a common cathode LED.
  - <img src=https://user-images.githubusercontent.com/81423727/141686506-2a09c1ad-656b-4c35-b2e8-a4de1ad575d7.png width=30% />
  - In a common cathode RGB LED, all three LEDs share a negative connection (cathode). In a common anode RGB LED, the three LEDs share a positive connection (anode).
  - This results in an LED that has 4 pins, one for each LED, and one common cathode or one common anode.

## Instructure
+ RGB LEDs have four leads—one for each LED and another for the common anode or cathode. You can identify each lead by its length, as shown in the following figure.
+ <img src=https://user-images.githubusercontent.com/81423727/141686592-d01eb796-72cf-4a98-84e7-6d96a24e0ead.png width=30% />

## Schematic
![Dazzling Allis-Jaban](https://user-images.githubusercontent.com/81423727/141689525-1e9d4b04-83fa-451e-af6c-45343c4d1e81.png)


## Coding
```
int redPin = 4;     
int greenPin = 5;   
int bluePin = 6;    

int potRed = A0;     
int potGreen = A1;   
int potBlue = A2;   

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin, OUTPUT);
  
  pinMode(potRed, INPUT); 
  pinMode(potGreen, INPUT); 
  pinMode(potBlue, INPUT); 
}

void loop() {
 
  analogWrite(redPin, 255-(255./1023.)*analogRead(potRed));
  analogWrite(greenPin, 255-(255./1023.)*analogRead(potGreen));
  analogWrite(bluePin, 255-(255./1023.)*analogRead(potBlue));

  delay(10);
}
```

## Demo
![178568d840484d52004826e37617298c (1)](https://user-images.githubusercontent.com/81423727/141689818-f00e94df-6457-42b9-b57d-f9947e99c093.gif)

