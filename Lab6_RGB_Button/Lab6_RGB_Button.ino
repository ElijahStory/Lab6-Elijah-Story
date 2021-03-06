//Elijah Story
//NMD211 Lab6
//Button press LED on
//10-16-2020

//Press the button, the LED turns on.

int ledPin = 13;  //LED power scorce
int buttonIn = 7; //push button digital input

int buttonStatus = 0; //pushed or not (0 is not)

void setup() {
  pinMode(ledPin, OUTPUT);  //LED is output
  pinMode(buttonIn, INPUT); //Button input/trigger
  digitalWrite(ledPin, HIGH);//Sets the LED pin to output power
  
  Serial.begin(9600);       //Starts the Searial monitor
}

void loop() {
  buttonStatus = digitalRead(buttonIn);  //is the button pressed
  Serial.println(buttonStatus);          //prints if the button is pressed or not
}
