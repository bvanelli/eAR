
int sensorPin = A0;    // Pino do Potenciometro
int valor = 0;         // Valor lido

void setup() {
  // Iniciar monitor Serial
  Serial.begin(9600);       // Inicia a Serial
}

void loop() {
  // Ler valor do sensor
  valor = analogRead(sensorPin);

  // Mostrar valores na tela
  Serial.println(valor);

  delay(500);
  
}
