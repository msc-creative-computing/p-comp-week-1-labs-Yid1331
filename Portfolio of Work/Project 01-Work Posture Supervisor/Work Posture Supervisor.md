# WORK POSTURE SUPERVISOR

## CONTENT
- [01 INSPIRATION](#01-INSPIRATION)
- [02 DESIGN THINKING](#02-DESIGN-THINKING)
- [03 COMPONENT REQUIREMENTS](##03-COMPONENT-REQUIREMENTS)
- [04 WIRING](#04-WIRING)
- [05 CODING](#05-CODING)
- [06 TEST](#06-TEST)
- [07 SCENE SIMULATION](#07-SCENE-SIMULATION)
- [08 CONCLUSION AND SUMMARY](#08-CONCLUSION-AND-SUMMARY)
 
## 01 INSPIRATION
+ We spend more and more time working in front of the computer every day. Maybe we didn't realize it, our sitting posture is getting worse and worse. Poor sitting posture will bring us many potential diseases.

+ <img src=https://user-images.githubusercontent.com/81423727/143872600-cfc83b06-e297-4a3d-805a-01fbdedc9ee9.png width=50% />

+ If a sitting posture monitoring is set up, it will remind us in time when there is a problem with our sitting posture. What will it be like?

## 02 DESIGN THINKING
+ When we sit in front of the computer for a long time, we unconsciously stretch our heads forward. Just like the picture above.

+ <img src=https://user-images.githubusercontent.com/81423727/143872689-c697d111-2c23-44bf-9daf-4ade6dd77478.png width=50% />

+ We can remind the user whether the sitting posture is correct by monitoring the distance between the head and the computer screen.

+ <img src=https://user-images.githubusercontent.com/81423727/143872765-a3fca997-b151-494a-bc16-336949d015f6.png width=50% />

+ Therefore, we need the following components:

+ <img src=https://user-images.githubusercontent.com/81423727/143872811-50fec9d2-7560-4f3f-8ac1-7be701b4af71.png width=50% />

## 03 COMPONENT REQUIREMENTS

+ Arduino UNO
+ Ultrasonic sensor
+ Some bulbs
+ Jumper wire
+ Processing software

## 04 WIRING

<img src=https://user-images.githubusercontent.com/81423727/143872919-7b3127ab-6a0d-4c8b-a1d1-220110a26003.png width=50% />

+ The ultrasonic sensor is using 5v/GND, and its Trig and Echo pin wired with D2 and D3, the 5 bulbs are connected to the 9-13 pins respectively as input. As the object approaches the ultrasonic sensor, the bulb is gradually lit.

## 05 CODING
+ Arduino Code:https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2001-Work%20Posture%20Supervisor/Arduino%20Code.ino
+ Processing Code:https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2001-Work%20Posture%20Supervisor/Processing%20Code.ino

## 06 TEST
+ <img src=https://user-images.githubusercontent.com/81423727/143872989-ed99f636-0e6c-4da1-bcc2-0f26626edac4.png width=30% />

+ Test Video：https://www.youtube.com/watch?v=qVprgIdHgk4

+ As the object approaches the ultrasonic sensor, the bulb is gradually lit. To better remind users of errors in sitting posture, I used processing to draw graphics. When the light bulbs are all lit, the graphics will change to remind the user to restore the correct sitting posture.

## 07 SCENE SIMULATION

+ Sensor installation
+ <img src=https://user-images.githubusercontent.com/81423727/143873121-1339f2aa-bfe5-4ead-b981-b4bbd05e8bc5.png width=30% />

+ Loading reminder icon
+ <img src=https://user-images.githubusercontent.com/81423727/143873195-3f4dc67a-97ce-4be3-89e8-547d17d3b8d8.png width=30% />

+ <img src=https://user-images.githubusercontent.com/81423727/143873217-5e0d1b82-87b0-4632-8523-9fc3d67d07b7.png width=30%/>

+ Simulation scene video：https://youtu.be/abje07Kvlgs

## 08 CONCLUSION AND SUMMARY

>In the scene simulation, I found that the ultrasonic sensor is very unstable for distance measurement, which will cause the reminding process to be inaccurate.
>The screen icon reminder may not be suitable for all usage scenarios. Consider adding a sound reminder device.



