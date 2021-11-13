# Lab 02 - Potentiometers

## Q:Hook up a knob and have it change the brightness of an LED

### 01 SCHEMATIC
![Potentiometers](https://user-images.githubusercontent.com/81423727/137610381-fe64fbf9-b942-40e0-b8a2-17b18c56a635.png)

### 02 CODING
```
int potPin = 2;    // select the input pin for the potentiometer
int ledPin = 13;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor
void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}
void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  digitalWrite(ledPin, HIGH);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(ledPin, LOW);   // turn the ledPin off
  delay(val);                  // stop the program for some time
}
```

### 03 DEMO VIDEO
[Potentiemoeters control the brightness of an LED](https://youtu.be/ntZ6tzk42Hw)
