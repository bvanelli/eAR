
int potPin = A0, ledPin = 9, valor = 0;

void setup() {
}

void loop() {
  // Ler valor do sensor
  valor = analogRead(potPin);

  // Controlar brilho do LED
  analogWrite(ledPin, valor);

  delay(50);
}
