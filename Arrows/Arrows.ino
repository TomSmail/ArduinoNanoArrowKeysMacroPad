
const int key1 = 2;
const int key2 = 3;
const int key3 = 4;
const int key4 = 5;

void setup() {
  
Serial.begin(115200);  
pinMode (key1, INPUT);
pinMode (key2, INPUT);
pinMode (key3, INPUT);
pinMode (key4, INPUT);
Serial.setTimeout(1);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(key1) == HIGH) {
      Serial.println('A');
      delay(10);
  }
 else if (digitalRead(key2) == HIGH) {
      Serial.println('B');
      delay(10);
  }
  else if (digitalRead(key3) == HIGH) {
      Serial.println('C');
      delay(10);
  }
  else if (digitalRead(key4) == HIGH) {
      Serial.println('D');
      delay(10);
  }
  else {
    Serial.println("nothing imput");
    delay(1000);
  }
  
  
  /*if (digitalRead(key1) == LOW) {
      Keyboard.press("KEY_UP_ARROW");
      delay(100);
  }
    if (digitalRead(key1) == HIGH){
        Keyboard.releaseAll();
      }
*/

}
