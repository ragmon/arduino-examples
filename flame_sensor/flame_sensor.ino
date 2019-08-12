#define PIN_FLAME 0
#define PIN_BEEP 9

int val = 0;

void setup() {
  pinMode(PIN_BEEP, OUTPUT);
  pinMode(PIN_FLAME, INPUT);

  Serial.begin(9600);
}

void loop() {
  val = analogRead(PIN_FLAME);

  Serial.println(val);

  if (val > 0) {
    digitalWrite(PIN_BEEP, HIGH);
  } else {
    digitalWrite(PIN_BEEP, LOW);
  }
  delay(10);
}
