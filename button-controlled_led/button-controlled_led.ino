#define LED_PIN 11
#define IN_PIN 7
#define DURATION

int val;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(IN_PIN, INPUT);
}

void loop() {
  val = digitalRead(IN_PIN);
  if (val == LOW) {
    digitalWrite(LED_PIN, LOW);
  } else {
    ledBlink(100, 1000);
  }
}

void ledBlink(int count, int duration) {
  for (int i = 0; i < count; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(duration / 2 / (i + 1));
    
    digitalWrite(LED_PIN, LOW);
    delay(duration / 2 / (i + 1));
  }
}
