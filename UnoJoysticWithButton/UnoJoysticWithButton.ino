const int joyX = A0;
const int joyY = A1;
const int button = 4;

int buttonRead = 0;
int xValue;
int yValue;

void setup() {
  Serial.begin(9600);
  pinMode(joyX, INPUT);
  pinMode(joyY, INPUT);
  pinMode(button, INPUT_PULLUP);
  
}
 
void loop() {
xValue = analogRead(joyX);
yValue = analogRead(joyY);
buttonRead = analogRead(button);
   
  if(xValue <= 20){
    Serial.println('A');
    delay(200);
  }
  else if(xValue >= 1003){
    Serial.println('B');
    delay(200);
    }
  else if (yValue <= 20){
    Serial.println('C');
    delay(200);
  }
  else if(yValue >= 1003){
    Serial.println('D');
    delay(200);
  }
  else if(buttonRead == HIGH){
    Serial.println('E');
    delay(200);
}
  else{
    delay(200);
    }
}
