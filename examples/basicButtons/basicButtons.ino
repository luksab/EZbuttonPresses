#include <EZbuttonPresses.h>
int myPins[] = {3, 4};      //define the pins used as buttons
EZbuttonPresses bp(myPins);
boolean out[] = {false, false};//define the output array
void setup() {
  Serial.begin(9600);
}

void loop() {
  bp.check(out);//checking the Pins
  int one = out[0];//reading the output
  int two = out[1];//reading the output
  Serial.print(one);//printing the output
  Serial.print(",");
  Serial.println(two);//printing the output
  delay(500);
}
