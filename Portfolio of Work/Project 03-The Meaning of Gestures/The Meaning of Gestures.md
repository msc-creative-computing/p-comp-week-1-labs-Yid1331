# THE MEANING OF GESTURES

## 01 INSPIRATION
+ The "hands" I made in the class reminded me of the meanings expressed by different human gestures, just like human facial expressions, which are inherent and unique codes of human beings.

+ ![image](https://user-images.githubusercontent.com/81423727/143980039-0cea1d48-36a2-41ca-80c0-6eda1ed0d787.png)

+ I decided to make a small device to express the meaning of gestures.

## 02 DESIGN THINKING
+ Common gesture expressions are as follows:

  - "OK", it means "understood" and "okay". 
  - ![image](https://user-images.githubusercontent.com/81423727/143980158-78a7790a-1069-45ad-bc37-7cbede04f4c0.png)
   
  - "Victory!", "Yeah", express the meaning of being happy.
  - ![image](https://user-images.githubusercontent.com/81423727/143980224-a250cc7c-0c0b-4bb5-9299-600800871aaf.png)
  
  - "666", express the meaning of "you are amazing".
  - ![image](https://user-images.githubusercontent.com/81423727/143980292-b131bcc2-85d6-4350-8a4b-fbe4cabd761d.png)

  - "Good", it means "you are awesome".
  - ![image](https://user-images.githubusercontent.com/81423727/143980346-c84df27e-85d7-43e0-8c48-a579dfe9a585.png)

+ I can assign a value to each finger, use the flex and pressure sensor made by Velostat material, bend different fingers, and use the speaker to send different words.
+ Use AI to synthesize different voices. Import these sounds into the SD card to load them.

## 03 COMPONENT REQUIREMENTS
+ Arduino Nano
+ The Flex and Pressure Sensor (DIY)
+ "Hand" (DIY)
+ Mini Speaker
+ SD Card

## 04 WIRING
![image](https://user-images.githubusercontent.com/81423727/143980512-5ff4fb3c-97c9-419b-ad78-638dcb2648ef.png)
+ Flex Sensor-Arduino Nano
  - "+" => A3, A4, A5, 5.5V Power
  - "-" => GND Ground
+ Mini Speaker-Arduino Nano
  - "+" => D9
  - "-" => GND Ground
 
 ## 05 CODING
+ Index Finger ==> flexPin, flexValue
+ Middle Finger ==> flexPin1, flexValue1
+ Ring Finger ==> flexPin2, flexValue2
+ Little Finger ==> flexPin3, flexValue3
+ "OK" gesture: Bend the index finger, flexValue change.
+ "Victory!" gesture: Bend the ring finger and little finger, flexValue2 and flexValue3 change.
+ "666" gesture: Bend the index finger, middle finger and ring finger, flexValue, flexValue1 and flexValue2 change.
+ "Good" gesture: Bend all fingers, flexValue, flexValue1, flexValue2 and flexValue3 change.
+ Arduino Code: https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2003-The%20Meaning%20of%20Gestures/THE%20MEANING%20OF%20GESTURES.ino

## 06 PRODUCTION PROCESS
#### 1.Making "hands"
+ **Material**
  - ![image](https://user-images.githubusercontent.com/81423727/143980930-4b2f5289-9b60-4803-9411-632502a2b6f5.png)

+ **Process**
  - Step 1: Cut corrugated paper into the shape of your hands.
  - Step 2: Cut the straw into small pieces and stick it on your "hand".
  - Step 3: Add other components.
  - ![image](https://user-images.githubusercontent.com/81423727/143981917-bd7a75a9-8bbb-4752-b46d-e7596ae075c6.png)
  - ![output(compress-video-online (2) (2)](https://user-images.githubusercontent.com/81423727/141953856-f4d1ec82-4cf0-4132-bb1b-4f23ee334804.gif)

#### 2.Making Flex Sensor
+ **Material**
  - ![image](https://user-images.githubusercontent.com/81423727/143981954-4572dbd1-9266-421d-81de-6b358f808438.png)

+ **Process**
  - Step 1: Cut the paper with a certain degree of hardness and elasticity to the size of the finger width and length.
  - Step 02: Solder the wires to the copper tape.
  - Step 03: Cut Velostat to the right size and stick it on one of the copper tapes.
  - Step 04: Merge them.
  - ![image](https://user-images.githubusercontent.com/81423727/143981971-1d232379-c334-463b-b71c-a38bcf9042b2.png)

#### 3.Install Circuit
+ ![image](https://user-images.githubusercontent.com/81423727/143981994-d69829ac-3c51-4471-b80b-545d20e7b959.png)

+ Paste the Flex Sensor on the back of the “hand”.
+ Because the playback effect of the mini speaker is not good, I switched to a 3.5mm speaker for voice playback.

## 07 TEST
+ Use the buzzer to test：https://youtu.be/zljnpFrcaPA
+ Demo Video: https://youtu.be/31cFgeVif4U

## 08 CONCLUSION AND SUMMARY
+ The self-made Flex Sensor produces a very small range of values and requires precise control of the threshold. 
+ Different Flex Sensors produce different values. It is necessary to test each Flex Sensor before installing the circuit.
+ For the situation where the produced value is different, we can use the "| |" gate in the code to solve it.











