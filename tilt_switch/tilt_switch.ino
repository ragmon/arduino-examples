#define PIN_LED 8
#define PIN_POT 5

void setup() {
  Serial.begin(9600);
  
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int val = analogRead(PIN_POT);

  Serial.println(val, DEC);
  
  if (val > 512) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }
  
  delay(100);
}
