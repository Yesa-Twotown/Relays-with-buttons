//
int relayPinRed = 5;
int relayPinBlue = 6;
int relayPinGreen = 7;
//constant variables
const int buttonPinRed = 2;                  //for the yes button
const int buttonPinGreen = 3;                   //for the no button
const int buttonPinBlue = 4;

//state variables
int buttonStateRed = 0;
int buttonStateGreen = 0;
int buttonStateBlue = 0;



void setup() {
  pinMode(relayPinRed, OUTPUT);
  pinMode(relayPinGreen, OUTPUT);
  pinMode(relayPinBlue, OUTPUT);
  pinMode(buttonPinRed, INPUT);
  pinMode(buttonPinGreen, INPUT);
  pinMode(buttonPinBlue, INPUT); 
  digitalWrite(relayPinRed, HIGH);
  digitalWrite(relayPinGreen, HIGH);
  digitalWrite(relayPinBlue, HIGH);
}

void loop() {
  buttonStateRed = digitalRead(buttonPinRed);
  buttonStateGreen = digitalRead(buttonPinGreen);
  buttonStateBlue = digitalRead(buttonPinBlue);

  if (buttonStateRed == HIGH){ //for red
      digitalWrite(relayPinRed, LOW);
        delay(5000);
      digitalWrite(relayPinRed, HIGH);
   }
   else if (buttonStateGreen == HIGH) { //for BLUE
      digitalWrite(relayPinBlue, LOW);
        delay(5000);
      digitalWrite(relayPinBlue, HIGH);
   }
   else if (buttonStateBlue == HIGH) { //for green
      digitalWrite(relayPinGreen, LOW);
        delay(5000);
      digitalWrite(relayPinGreen, HIGH);
   }
}
