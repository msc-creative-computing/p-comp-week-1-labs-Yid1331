# MUSIC

## 01 INSPIRATION
+ After learning the MPR121 module, I became very interested in it and tried to make the MPR121 module trigger the interaction of sound and music.
+ <img src=https://user-images.githubusercontent.com/81423727/143860939-00511f7a-943d-4392-a97c-83014621b076.png width=20% />
+ Arduino Piano using buzzer.
+ Arduino Drum using SD card.
+ Finally, I tried to trigger music visualization with MPR121.

## 02 ARDUINO PIANO
#### COMPONENT REQUIREMENTS
+ MPR121
+ Buzzer
+ Arduino Nano
+ Some other material (Jumper, Paper, Copper Tape)

#### WIRING
<img src=https://user-images.githubusercontent.com/81423727/143861198-43cc99f2-bd1d-4907-bffe-3114b41d5efa.png width=50% />

+ MPR121-Arduino Nano
  - 3V3 =>3.3V Power
  - A4 => SDA Data
  - A5 => SCL Clock
  - GND => GND Ground
  - 
+ Buzzer-Arduino Nano
  - '+' => D3
  - '-' => GND Ground
  
#### CODING
https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2002-MUSIC/01%20Arduino%20Piano%20Code.ino

#### PRODUCTION PROCESS
<img src=https://user-images.githubusercontent.com/81423727/143861610-b8d8ad9f-f292-40de-8612-cbfbd315dd9b.png width=50% />

+ Install each component on a breadboard and use paper and copper tape to make a simple piano keyboard.

#### DEMO VIDEO
https://youtu.be/S8zoxsgVmwE

## 03 ARDUINO DRUM
#### COMPONENT REQUIREMENTS
+ SD Card
+ Mini Speaker
+ Capacitance
+ The main components mentioned above (Nano, MPR121)

#### WIRING
<img src=https://user-images.githubusercontent.com/81423727/143861908-4285652b-5995-49d0-9853-b073051bec1f.png width=50% />

+ SD Card-Arduino Nano
 - CS => D10
 - SCK => D13
 - MOSI => D11
 - MISO => D12
 - VCC => 5V power
 - GND => GND Ground
 
+ Mini Speaker-Arduino Nano
  - '+' => D9
  - '-' => GND Ground

#### CODING
https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2002-MUSIC/02%20Arduino%20Drum%20Code.ino

#### PRODUCTION PROCESS
<img src=https://user-images.githubusercontent.com/81423727/143862184-f964decb-b179-42ce-90ce-f010b7afc4fc.png width=50% />

#### DEMO VIDEO
https://youtu.be/NcDWzTGZvzo


## 04 MUSIC VISUALIZATION
+ During the experiment of Arduino drum, I found that the sound effect of the mini speaker is very poor, and it cannot achieve the effect I want to achieve. Therefore, I want to use the MPR121 module to trigger the computer to play music and produce a certain music visualization effect.

#### COMPONENT REQUIREMENTS AND WIRING
+ Consistent with Arduino drum (remove Speaker and SD Card).
+ <img src=https://user-images.githubusercontent.com/81423727/143862352-2198ebbd-0987-4527-aa8a-51c252457283.png width=50% />

#### CODING
+ Arduino Code
https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2002-MUSIC/03%20MUSIC%20VISUALIZATION-Arduino%20Code.ino

+ Processing Code
https://github.com/msc-creative-computing/p-comp-week-1-labs-Yid1331/blob/main/Portfolio%20of%20Work/Project%2002-MUSIC/03%20MUSIC%20VISUALIZATION-Processing%20Code.ino

#### DEMO VIDEO
https://youtu.be/phSDtyu_MQ8

## 05 CONCLUSION AND SUMMARY

> The code of the music visualization graphics in the project is what I learned from others, and I want to use the Arduino device to interact more with Processing in the future.

> While searching for information, I found that someone made MIDI music instruments and electronic drums, which could be the direction for improvement of this project.





