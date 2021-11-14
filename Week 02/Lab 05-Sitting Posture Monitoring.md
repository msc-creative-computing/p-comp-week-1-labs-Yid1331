# Work Posture Supervisor

## 01 INSPIRATION
+ We spend more and more time working in front of the computer every day.
+ Maybe we didn't realize it, our sitting posture is getting worse and worse. 
+ Poor sitting posture will bring us many potential diseases.

+ ![image](https://user-images.githubusercontent.com/81423727/141676743-468d3ec7-d16a-4499-a284-972764312a66.png)

+ If a sitting posture monitoring is set up, it will remind us in time when there is a problem with our sitting posture. What will it be like?

## 02 DESIGN THINKING
+ When we sit in front of the computer for a long time, we unconsciously stretch our heads forward.
+ Just like the picture above.
+ We can remind the user whether the sitting posture is correct by monitoring the **distance between the head and the computer screen.**
  - When the distance between the head and the screen is the correct distance, no reminder is given to the user.
  - The user is reminded when the distance between the head and the screen is not the correct distance.
  
  <img src=https://user-images.githubusercontent.com/81423727/141677072-877c0a02-91d8-44ff-8dcb-d10d92bc05e5.jpg width=25% />     <img src=https://user-images.githubusercontent.com/81423727/141677076-aa53868a-140d-4a67-94bb-8f351db997c8.jpg width=28% />

+ Therefore we need the following devices:
  - Ultrasonic sensor: Used to detect the distance between the user's head and the screen.
  - Some reminders: Some bulbs or icon reminders on the computer screen.

## 03 COMPONENT REQUIREMENTS:
1. Arduino UNO;
2. Ultrasonic sensor;
3. Some bulbs;
4. Jumper wire;
5. Processing software;

## 04 SCHEMATIC
![Grand Wolt-Luulia](https://user-images.githubusercontent.com/81423727/141678114-2c4d7a6e-6251-45a4-88e2-bc14ecfcfadf.png)

## 05 CODING
### Arduino Coding
```
const int trig = 2;
const int echo = 3; 
int duration = 0;
int distance = 0;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  Serial.begin(9600);

}

void loop()

{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);
  duration = pulseIn(echo , HIGH);
  distance = (duration / 2) / 29.1 ;

 if (distance <= 40) {     //change the value for distance measuring
   digitalWrite(13, HIGH);
 }else{
  digitalWrite(13, LOW);
 }

  if (distance <= 38) {
    digitalWrite(12, HIGH);
  }else{
  digitalWrite(12, LOW);
  }
  
  if (distance <= 36) {
    digitalWrite(11, HIGH);
  }else{
   digitalWrite(11, LOW);
  }

  if (distance <=34) {
    digitalWrite(10, HIGH);
  }else{
  digitalWrite(10, LOW);
  }

  if (distance <= 32) {
    digitalWrite(9, HIGH);
  }else{
  digitalWrite(9, LOW);
  }

 if(distance<=32)
  {
    Serial.write("a");
  }
  else
  {
    Serial.write("b");
  }
}
```

### Processing Coding
```
import processing.serial.*;  
Serial myPort;               
void setup()
{
  size(200,200);
  ellipse(100,100,100,100);
  myPort =new Serial(this,"COM8",9600); 
}

void draw()
{
  while(myPort.available()>0)          
  {
    char inByte =myPort.readChar();
    println(inByte);             
    switch(inByte)
    {
      case 'a':                    
            fill(255,0,0);
            ellipse(100,100,100,100);
            break;
      case 'b':
            fill(0,255,0);         
            ellipse(100,100,100,100);
      default:break;
    }
  }
}
```





