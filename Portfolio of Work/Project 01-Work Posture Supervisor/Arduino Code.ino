#include <Wire.h>

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

 if (distance <= 38) {     
   digitalWrite(13, HIGH);
 }else{
  digitalWrite(13, LOW);
 }

  if (distance <= 36) {
    digitalWrite(12, HIGH);
  }else{
  digitalWrite(12, LOW);
  }
  
  if (distance <= 34) {
    digitalWrite(11, HIGH);
  }else{
   digitalWrite(11, LOW);
  }

  if (distance <=32) {
    digitalWrite(10, HIGH);
  }else{
  digitalWrite(10, LOW);
  }

  if (distance <= 30) {
    digitalWrite(9, HIGH);
  }else{
  digitalWrite(9, LOW);
  }

 if(distance<=30)
  {
    Serial.write("a");
  }
  else
  {
    Serial.write("b");
  }
}
