
void setup() {
  // inicializa pino 13 como output
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // HIGH liga o LED do pino 13
  delay(1000);              // Aguarda um segundo
  digitalWrite(13, LOW);    // LOW desliga o LED do pino 13
  delay(1000);              // Aguarda um segundo
}
