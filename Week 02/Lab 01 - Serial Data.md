# Lab 01 - Serial Data

## Using the hello sketch, play with the serial monitor to tell a wee story based on player input.

### BRIEF

Players enter their information and generate a love letter for their partners.

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
