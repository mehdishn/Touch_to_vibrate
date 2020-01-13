const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int motorPin =  2;      // the number of the Vibartion motor

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED and Motor pins as output:
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);   // read the state of the pushbutton value:
  
  
  if (buttonState == HIGH)   // check if the pushbutton is pressed.
  {
    // turn LED and Motor on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(motorPin, HIGH);
  } 
  else
  {
    // turn LED and Motor off:
    digitalWrite(ledPin, LOW);
    digitalWrite(motorPin, LOW);
  }
}
