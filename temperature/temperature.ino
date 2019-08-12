#define PIN_POT 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(PIN_POT);
  int tempVal = (125 * val) >> 8;   // temperature calculation formula "C"

  Serial.print("Temp: ");
  Serial.print(tempVal);
  Serial.println("C");

  delay(500);
}
