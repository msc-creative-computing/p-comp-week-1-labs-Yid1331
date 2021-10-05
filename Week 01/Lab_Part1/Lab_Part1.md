# Project 01
### Series Circuit
Both switches must be pressed at the same time for the LED to light up.
![Series Circuit](https://git.arts.ac.uk/storage/user/256/files/18f51380-2479-11ec-9765-b166c633bdea)
[Demo video](https://youtu.be/5lexW_HeC9I)
### Parallel Circuit
Press any switch and the LED will light up.
![Parallel Circuit](https://git.arts.ac.uk/storage/user/256/files/86ee0a80-247a-11ec-9c25-8697ea57d83a)
[Demo video](https://youtu.be/nS5RmZFPDMI)

# Project 02-Spaceship Interface
### Arduino Schematic
![Spaceship Interface](https://git.arts.ac.uk/storage/user/256/files/333aeb80-2491-11ec-94d9-b8c9b41815f3)
### Demo Video
[Spaceship Interface,Click me](https://youtu.be/rZknvoedLJ0)
### Coding
```
int switchState = 0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) { 
digitalWrite(3, HIGH); 
 digitalWrite(4, LOW); 
 digitalWrite(5, LOW); 
 } else {
 digitalWrite(3, LOW); 
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 delay(250);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 delay(250);
}
}
```

# Project 03-Love-O-Meter
### Arduino Schematic
![Love-O-Meter](https://git.arts.ac.uk/storage/user/256/files/db64aa80-24b9-11ec-98b9-a61b5f94a01c)
### Demo Video
[Love-O-Meter,Click me](https://youtu.be/EUtmZgco5nA)
### Coding
```
const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup(){
  Serial.begin(9600);
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
  pinMode(pinNumber,OUTPUT);
  digitalWrite(pinNumber, LOW);
  }
}

void loop(){
  int sensorVal=analogRead(sensorPin);
  Serial.print("Sensor Volue:");
  Serial.print(sensorVal);

  float voltage=(sensorVal/1024.0)*5.0;
  Serial.print(", Volts:");
  Serial.print(voltage);
  Serial.print(", degrees C:");
  
  float temperature = voltage / 0.01;
  Serial.println(temperature);
  delay(500);

  if(temperature<baselineTemp){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }else if(temperature>=baselineTemp+2 && temperature<baselineTemp+4){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }else if(temperature>=baselineTemp+4 && temperature<baselineTemp+6){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }else if(temperature>=baselineTemp+6){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  }
  delay(500);
}
```
