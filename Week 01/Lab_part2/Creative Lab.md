# What will the lightsaber become in the peaceful age?
## Story (Actually I do not know what I say ð)
<img src=https://user-images.githubusercontent.com/81423727/136021102-9e28ff95-3514-4542-b929-ac83197eb980.png width=30% />

When my father drove a spaceship to take me to the concert of Skr, my favourite alien singer,

he took out something from his storehouse and asked me, do you know what this is?

"A frozen energy bar?" 

Frozen energy bar is a tool specially used to make ice on this burning earth. 

Just throw them into the water, and the water will freeze instantly.

âBut it is too big. What is it?â I asked.

"It has been ever a weapon, but NOW, it is just **a cheer bar**." My father said.

"Although you use the spaceship lights to float in the air to cheer for your idols, 

people used this to encourage stars' impressive performances in the concert hundreds of years ago."

My dad handed it to me, "Remember to **charge it**, and then you just have to rock it vigorously during the concert."

<img src=https://user-images.githubusercontent.com/81423727/136036367-6e037624-418d-4760-965a-c246f8fcdde7.jpg width=30% />

## Arduino Schematic
<img src=https://user-images.githubusercontent.com/81423727/136033763-d29fa5f6-0ade-428b-9a32-f2f2143bc3c1.png width=100%/>

## Demo Video
[Click me, watch a charging lightsaber](https://youtu.be/dIuYnRYtrtQ)

## Coding
```
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
```
