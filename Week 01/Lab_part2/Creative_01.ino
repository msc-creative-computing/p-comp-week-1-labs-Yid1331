// C++ code
//
int switchState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(12, LOW);
    delay(20);
    digitalWrite(11, LOW);
    delay(20);
    digitalWrite(10, LOW);
    delay(20);
    digitalWrite(9, LOW);
    delay(20);
    digitalWrite(8, LOW);
    delay(20);
    digitalWrite(7, LOW);
    delay(20);
    digitalWrite(6, LOW);
    delay(20);
    digitalWrite(5, LOW);
    delay(20);
    digitalWrite(4, LOW);
    delay(20);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
    delay(20);
    digitalWrite(4, HIGH);
    delay(20);
    digitalWrite(5, HIGH);
    delay(20);
    digitalWrite(6, HIGH);
    delay(20);
    digitalWrite(7, HIGH);
    delay(20);
    digitalWrite(8, HIGH);
    delay(20);
    digitalWrite(9, HIGH);
    delay(20);
    digitalWrite(10, HIGH);
    delay(20);
    digitalWrite(11, HIGH);
    delay(20);
    digitalWrite(12, HIGH);
  }
}
