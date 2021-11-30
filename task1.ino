/*
 * Task1 - Blinking onBoard LED with a on time of 1 sec and time period of 2 sec
 * Bhavesh Doshi (BT19ECE025)
*/

#define onBoardLED 1 //Initialise onboard led pin

void setup() {
  pinMode(onBoardLED, OUTPUT); //Set onboard led pin as output
}

void loop() {
  digitalWrite(onBoardLED, HIGH); //Set led off
  delay(1000); //Delay of 1 sec
  digitalWrite(onBoardLED, LOW); //Set led on
  delay(1000); //Delay of 1 sec
}
