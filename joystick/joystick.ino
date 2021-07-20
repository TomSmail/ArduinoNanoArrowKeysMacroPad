#define joyX A0
#define joyY A1
#include <Keyboard.h>
//#define xValue int
//#define yValue int
int xValue,yValue;
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(joyX);
  yValue = analogRead(joyY);
  if (yValue == 0){
    Keyboard.press(KEY_DOWN_ARROW)
    delay(500);
  }
  else if(yValue == 1023){
    Keyboard.press(KEY_UP_ARROW);
    delay(500);
  }
  else if(xValue == 0){
    Keyboard.press(KEY_LEFT_ARROW);
    delay(500);
  }
  else if(xValue == 1023){
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(500);
  }
}
