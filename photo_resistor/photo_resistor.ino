#define PIN_POT 0
#define LED_PIN 11

int val = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(PIN_POT);
  Serial.println(val);

  analogWrite(LED_PIN, val / 4);
  
  delay(10);
}
