#define BASE 2  // the I/O pin for the first LED
#define NUM 6   // number of LEDs

void setup() {
  for (int i = BASE; i < BASE; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = BASE; i < BASE + NUM; i++) {
    digitalWrite(i, LOW);
    delay(200);
  }
  for (int i = BASE; i < BASE + NUM; i++) {
    digitalWrite(i, HIGH);
    delay(200);
  }
}
