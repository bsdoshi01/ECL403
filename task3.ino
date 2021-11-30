/*
 * Task3 - Control onboard led using serial bluetooth
 * Bhavesh Doshi (BT19ECE025)
*/
#include "BluetoothSerial.h" //Including library

#define onBoardLED 1 //Set onboard led pin

BluetoothSerial SerialBT; //Initialising Serial Bluetooth
char btValue; //Char value for recieving through bluetooth

void setup() {
  pinMode(onBoardLED, OUTPUT); //Pin initialise
  SerialBT.begin("Bhavesh's ESP32"); //Starting Bluetooth
}

void loop() {
  btValue = SerialBT.read(); //Read input from serial bluetooth
  if (btValue == '1') {
    digitalWrite(onBoardLED, LOW); //Set led on if input 1
  } else if (btValue == '0') {
    digitalWrite(onBoardLED, HIGH); //Set led off if input 0
  }
}
