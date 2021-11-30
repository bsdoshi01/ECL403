/*
 * Task2 - Control onboard led with the help of touch input
 * Bhavesh Doshi (BT19ECE025)
*/

#define touchInput 4 //Touch input pin initialise
#define onBoardLED 1 //onboard led pin initialise

int touchValue; //Variable to store touch input value

void setup() {
  //Initialise pins
  pinMode(touchInput, INPUT);
  pinMode(onBoardLED, OUTPUT);
}

void loop() {
  touchValue = touchRead(touchInput); //Read touch input
  if(touchValue > 50) {
    digitalWrite(onBoardLED, HIGH); //If not touched turn led off
  } else {
    digitalWrite(onBoardLED, LOW); //If touched turn led on
  }
}
