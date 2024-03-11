//constante para o pino da buzzer
#define pinoBuzzer 2
#define pinoButton 8
//constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, INPUT);
}

void loop() {
  if (digitalRead(pinoButton) == 1) {
    tone(pinoBuzzer, 523);
    digitalWrite(pinoLedVermelho, HIGH);
    delay(1000);
  } else{
    noTone(pinoBuzzer);
    digitalWrite(pinoLedVermelho, LOW);
  }
}
