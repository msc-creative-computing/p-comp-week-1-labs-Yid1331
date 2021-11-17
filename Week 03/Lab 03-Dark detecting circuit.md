# Dark detecting circuit-GLOWING EGG
## 01 SCHEMATIC
![Sizzling Jarv](https://user-images.githubusercontent.com/81423727/142262015-7b91c6bb-4563-4e68-ac5f-2644782ceec4.png)


## 02 CODING
```

const int ledPin = 13;   //the number of the LED pin
const int ldrPin = A0;  //the number of the LDR pin


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

   if (ldrStatus <=300) {

    digitalWrite(ledPin, LOW);               //turn LED on
    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(ledPin, HIGH);          //turn LED off
    Serial.println("---------------");
  }
}

```

## 03 DEMO VIDEO
![1](https://user-images.githubusercontent.com/81423727/142260918-b8f373e4-e85e-42d4-9083-d0ddb301dae7.gif)

![2](https://user-images.githubusercontent.com/81423727/142260935-44d7e2d2-d56c-414c-be74-4aff29100474.gif)

