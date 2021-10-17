# 1.PIR（Passive Infrared） Motion Senor
## Overview
+ Sense motion;
+ To detect whether a human has moved in or out of the sensors range;
+ General type:HC-SR501; 

<img src=https://user-images.githubusercontent.com/81423727/137350905-c01bec5b-3fe7-4c0b-9b0f-755362d283e7.png width=30% />

## Principle
The round metal can with a rectangular crystal in the center, which can detect levels of infrared radiation.
<img src=https://user-images.githubusercontent.com/81423727/137359258-cff9b557-a9a8-4441-9a40-46a4da9d73b1.png width=30% />
<img src=https://user-images.githubusercontent.com/81423727/137349588-00e779de-4a3b-42bf-9f61-e192ffab859f.png width=30% />

The PIR sensor itself has two slots in it, each slot is made of a special material that is sensitive to IR. 
When the sensor is idle, both slots detect the same amount of IR, the ambient amount radiated from the room or walls or outdoors.
When a warm body like a human passes by, it first intercepts one half of the PIR sensor, which causes a positive differential change between the two halves.
When the warm body leaves the sensing area, the reverse happens, whereby the sensor generates a negative differential change. These change pulses are what is detected.

## Structure
<img src=https://user-images.githubusercontent.com/81423727/137350385-edb2514c-543c-4bac-90b8-a7242ca88e43.png width=60% />

+ 3pins: one is vcc; one is ground；one is digital output.
  - Output is 0 or 1, motion is detected it's 1, no motion is 0.
  
+ Adjust(potentiometer): one is Delay Time Adjust, another is Sensitivity Adjust.
  - Delay Time Adjust: Set how long the output will remain HIGH after detection, minimum 3 seconds, maximum 5 mins.
  - Sensitivity Adjust: Set the maximum distance that the sensor can be detected, about 3-7 meters.   
  
+ Mode: one is H-mode; another is L-mode.
  - Repeatable(H) mode: Hold/Repeat/Retrigger mode; sensor will continue to output HIGH as long as it continues to detect motion.
  - Non- Repeatable(L) mode L mode : No-repeat/No-retriggering mode, Output will stay HIGH for the period set by the Delay Time Adjust.
  - genenrally use H-mode.
   
## Reference
[Web 1](https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor?view=all)

[Web 2](https://components101.com/sensors/hc-sr501-pir-sensor)

## Experiment Coding
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


# 2.Ultrasonic Sensor
## Overview
+ Use SONAR to determine the distance of an object;
+ Non-contact range detection;
+ Detection distance: From 2 cm to 400 cm or 1 to 13 feet（1 feet= 30.48cm）.
+ General type:HC-SR04

<img src=https://user-images.githubusercontent.com/81423727/137613300-e03d7bc2-9996-4d83-a976-6ec3815bcc28.png width=30% />

## Principle
Ultrasonic sensors periodically emit short and high-frequency sound waves. These waves travel at the speed of sound in the air. If they encounter an object, they will return to the sensor as an echo signal, so the sensor can calculate the time between sending out the signal and receiving the echo. Time interval to calculate the distance between the sensor and the target.

<img src=https://user-images.githubusercontent.com/81423727/137613624-eb2ddb9d-78d3-4710-8245-84d4ea3678ff.png width=30% />

## Structure
<img src=https://user-images.githubusercontent.com/81423727/137613722-28d8159c-177f-4892-a5f0-425bebe942f7.png width=30% />

+ Vcc: to VOUT;
+ Gnd: to GND;
+ Trig: Trigger Pin;
+ Echo: Echo Pin.


# 3.Tilt Sensor
## Overview
+ A sensor that can sense changes in the angle of the object
+ **Switch** They are referred to as "mercury switches", "tilt switches" or "rolling ball sensors" 
+ Output form of digital switching output (0 and 1)

<img src=https://user-images.githubusercontent.com/81423727/137621281-eb141bd9-bc05-4885-a0a6-55a552ddcc03.png width=30% />

## Principle
They are usually made by a cavity of some sort (cylindrical is popular, although not always) and a conductive free mass inside, such as a blob of mercury or rolling ball. 
One end of the cavity has two conductive elements (poles). 
When the sensor is oriented so that that end is downwards, the mass rolls onto the poles and shorts them, acting as a **switch** throw.

## Structure
<img src=https://user-images.githubusercontent.com/81423727/137621852-f932c234-368e-48f8-8a55-97ff41cea341.png width=30% />

+ VCC external 3.3V-5V voltage (can be directly connected to the 5v microcontroller and 3.3v microcontroller)
+ GND external GND
+ DO-board digital output interface (0 and 1)
+ A sensitivity adjust
+ LED: Power LED and D0 LED

## Experiment Coding
```
void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
boolean tilt;
tilt=digitalRead(2);
if(tilt){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
```

# 4.Temp Sensor
## Overview
+ An **analog** temperature sensor
+ Temperature range: -40°C to 150°C / -40°F to 302°F

<img src=https://user-images.githubusercontent.com/81423727/137622806-cffba97d-9715-4da7-9cc0-67700e6c409d.png width=30% />

## Principle（Formula）
<img src=https://user-images.githubusercontent.com/81423727/137623013-68eb7eed-2b45-4585-9c1e-8f2b0ed02581.png width=30% />

a=LM35 temporature sensor

b=TMP36 temporature sensor

To convert the voltage to temperature, simply use the basic formula:

***Temp in °C = [(Vout in mV) - 500] / 10***

So for example, if the voltage out is 1V that means that the temperature is 

***(1000 mV - 500) / 10 = 50 °C***

If you're using a LM35 or similar, use line 'a' in the image above and the formula: 

***Temp in °C = (Vout in mV) / 10***

**Other formula**

This formula converts the number 0-1023 from the ADC into 0-5000mV (= 5V)

Voltage at pin in milliVolts = (reading from ADC) * (5000（mV）/1024))

This formula converts the number 0-1023 from the ADC into 0-3300mV (= 3.3V)

Voltage at pin in milliVolts = (reading from ADC) * (3300/1024) 

Then, to convert millivolts into temperature, use this formula(if use TMP36):

Centigrade temperature = [(analog voltage in mV) - 500] / 10

## Structure
<img src=https://user-images.githubusercontent.com/81423727/137622887-f1f911c3-da02-42e2-b4c0-582e3d2ef57f.png width=30% />

+ The left pin: to power (2.7-5.5V) and the right pin to ground.
+ The middle pin will have an analog voltage that is directly proportional (linear) to the temperature. 
+ The analog voltage is independent of the power supply.
