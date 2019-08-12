#define PIN_BUZZER 8

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(PIN_BUZZER, HIGH);
  delay(50);

  digitalWrite(PIN_BUZZER, LOW);
  delay(50);
}
