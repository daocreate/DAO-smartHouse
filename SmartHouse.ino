 /*************************************************************
 Project:       Smart House security (automate house)
 Librarys:      LiquidCrystal.h
 Author:        daocreate<daocreate@gmmail.com>
 Description:
 
*************************************************************/
const int PIRpin = A0;      // input to connect pirSensor
const int Lamp1  = 13;      // output to connect Lamp1
int PirValue = 0;           // variable to store pirSensor Value
int DarkValue = 450  ;       // dark value to on light

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIRpin, INPUT);
  pinMode(Lamp1, OUTPUT);

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
  }
  

}