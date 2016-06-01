
int botao = 7, led = 13;

void setup() {
  pinMode(13, OUTPUT);        // Declara a porta 13 como OUTPUT
  pinMode(7, INPUT_PULLUP);   // Declara a porta 7 como INPUT
}

void loop() {
  if(digitalRead(botao) == HIGH)
  {
    digitalWrite(13, LOW);   // Desligar o LED
  }
  else
  {
    digitalWrite(13, HIGH);  // Ligar o LED
  }
}
