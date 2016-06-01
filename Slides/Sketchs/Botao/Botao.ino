
int botao = 7, led = 13;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(botao) == HIGH)
  {
    digitalWrite(13, LOW);
  }
  else
  {
    digitalWrite(13, HIGH);
  }
}
