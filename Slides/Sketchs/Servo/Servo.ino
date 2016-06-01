
#include <Servo.h>

Servo myservo;  // Cria objeto Servo

int pos = 0;    // Posição do servo

void setup() {
  myservo.attach(9);  // Liga o Servo à porta 9
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);          
    delay(30);                 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);            
    delay(30);                      
  }
}
