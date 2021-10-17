# Lab 00 - LEDs in Serial and Parallel

## QUESTION 01: How many LEDs can you hook up with a 220k resistor in serial before running out of voltage?

According to the series circuit formula,  


> U=U<sub>1</sub> + U<sub>2</sub> + U<sub>3</sub> ...U<sub>n</sub>

> R=R<sub>1</sub> + R<sub>2</sub2> + R<sub>3</sub> ...R<sub>n</sub>

> I=U/R


Each LED in the series circuit will take up a portion of the voltage and consume a part of the current. 

The more LEDs accumulated, the LED closer to the negative pole in the circuit will no longer light up.

That means that the voltage is exhausted.

We can imagine that the river (current) is blocked by stones (resistor), making the river unable to flow.

## QUESTION 02: How many LEDs can you hook up with a 220k resistor in parallel before running out of voltage?

According to the parallel circuit formula，

> R=1/R<sub>1</sub>+1/R<sub>2</sub>+1/R<sub>3</sub> ...1/R<sub>n</sub>

The more parallel resistors in the circuit, the smaller the total resistance, and the more current that flows through each LED.

The circuit will not be exhausted. On the contrary, the brightness of each bulb will be brighter.

# Lab 01 - Serial Data

## Using the hello sketch, play with the serial monitor( In the Arduino menu Tools>Serial Monitor) to tell a wee story based on player input. It can be around 3 lines long.

### BRIEF

Players enter their information and generate a confession letter for their partners.

### CODING
```
 String herName;
 String metTime;
 String metPlace;
 String toTime;
 String yourName;
  
void setup(){
 Serial.begin(9600);
 Serial.println("What's your name?");
}

void loop (){
 while(1){
  if(Serial.available()){
   yourName = Serial.readString();
   Serial.println(yourName);
   break;}
  }
 delay(1000);
 Serial.println();
 
  Serial.println("What's your girlfriend's name?");
 while(1){
  if(Serial.available()){
   herName = Serial.readString();
   Serial.println(herName);
   break;}
  }
 delay(1000);
 Serial.println();
 
 Serial.println("When did you meet first each other?(e.g.on April 28, 2019)");
 while(1){
  if(Serial.available()){
   metTime = Serial.readString();
   Serial.println(metTime);
   break;}
  }
 delay(1000);
 Serial.println();


 Serial.println("Where did you met first each other?(e.g.on campus)");
    while(1){
  if(Serial.available()){
   metPlace = Serial.readString();
   Serial.println(metPlace);
   break;}
  }
  delay(1000);
  Serial.println();

  Serial.println("How long have you been together?(e.g.3 years)");
    while(1){
  if(Serial.available()){
   toTime = Serial.readString();
   Serial.println(toTime);
   break;}
  }
  delay(1000);
  Serial.println();

  
 Serial.println("The story is being generated...");
 delay(1000);
 Serial.println();
 
 Serial.print("Dear ");
 Serial.print(herName);
 Serial.println(",");
 Serial.println("It's me, I want to use this letter to express my love for you.");
 Serial.println();
 Serial.print("I remember that I met you for the first time ");
 Serial.print(metPlace);
 Serial.print(",");
 Serial.print("it was a night "+ metTime);
 Serial.println(".");
 Serial.print("I fell in love with you at first sight. ");
 Serial.print("In a blink of an eye, we have been together for ");
 Serial.print(toTime);
 Serial.println(".");
 Serial.println("What I want to say is...");
 Serial.println("Will you marry me?");
 Serial.println();
 Serial.println("I want to be your partner in your life forever.");
 Serial.println();
 Serial.println("Yours ever,");
 Serial.print(yourName);
 
}
```

### Demo video
[Click Me](https://youtu.be/Nef_sg8GEW4)

# Lab 02 - Potentiometers

## Hook up a knob and have it change the brightness of an LED

### Schematic
![Potentiometers](https://user-images.githubusercontent.com/81423727/137610381-fe64fbf9-b942-40e0-b8a2-17b18c56a635.png)

### Coding
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

### Demo Vedio
[Potentiemoeters control the brightness of an LED](https://youtu.be/ntZ6tzk42Hw)

# Lab 03 - Light Dependent Resistors

## Hook up an LDR. Try making the LED change brightness depending on the light level.

### Coding
```
const int LIGHT_PIN = A0; // Pin connected to voltage divider output
const int LED_PIN = 13; // Use built-in LED as dark indicator

// Measure the voltage at 5V and the actual resistance of your
// 47k resistor, and enter them below:
const float VCC = 4.98; // Measured voltage of Ardunio 5V line
const float R_DIV = 4660.0; // Measured resistance of 3.3k resistor

// Set this to the minimum resistance require to turn an LED on:
const float DARK_THRESHOLD = 10000.0;

void setup() 
{
  Serial.begin(9600);
  pinMode(LIGHT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() 
{
  // Read the ADC, and calculate voltage and resistance from it
  int lightADC = analogRead(LIGHT_PIN);
  if (lightADC > 0)
  {
    // Use the ADC reading to calculate voltage and resistance
    float lightV = lightADC * VCC / 1023.0;
    float lightR = R_DIV * (VCC / lightV - 1.0);
    Serial.println("Voltage: " + String(lightV) + " V");
    Serial.println("Resistance: " + String(lightR) + " ohms");

    // If resistance of photocell is greater than the dark
    // threshold setting, turn the LED on.
    if (lightR >= DARK_THRESHOLD)
      digitalWrite(LED_PIN, HIGH);
    else
      digitalWrite(LED_PIN, LOW);

    Serial.println();
    delay(500);
  }
}
```

### Demo Vedio
[LDR]
