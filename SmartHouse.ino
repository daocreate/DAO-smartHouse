 /*************************************************************
 Project:       Smart House security (automate house)
 Librarys:      LiquidCrystal.h
 Author:        daocreate<daocreate@gmmail.com>
 Description:
 
*************************************************************/
const int PIRpin    = A0;      // input to connect pirSensor
const int Lamp1     = 13;      // output to connect Lamp1
const int BuzzerPin = 9;      // output to connect buzzer 

/* all variable store value */
int p = 10; 
int PirValue = 0;           // variable to store pirSensor Value
int DarkValue = 300  ;       // dark value to on light

/* define note */
 
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIRpin, INPUT);
  pinMode(Lamp1, OUTPUT);
  pinMode(BuzzerPin, OUTPUT);

  Serial.begin(9600); //sets serial port for communication

}

// the loop function runs over and over again forever
void loop() {

  PirValue = analogRead(PIRpin);

  Serial.println("sensor Value");
  Serial.println(PirValue);
  
  if (PirValue >= DarkValue)
  {
     digitalWrite(Lamp1, HIGH);
     tone(BuzzerPin, 300, p)
  }else
  {
    digitalWrite(Lamp1, LOW);
    digitalWrite(BuzzerPin, LOW);
  }
  
  

}