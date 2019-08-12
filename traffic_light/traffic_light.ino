#define LED_RED 9
#define LED_YELLOW 6
#define LED_BLUE 5

#define DURATION 500

int pinList[] = {LED_RED, LED_YELLOW, LED_BLUE};
int pinListSize = sizeof(pinList) - 1;

void setup() {
  Serial.begin(9600);
  
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void loop() {
  for (int i = 0; i < pinListSize; i++) {
    pinLight(pinList[i], true, DURATION);
  }
}

void pinLight(int pin, bool value, int duration) {
  //Serial.println("pin #" + pin + "; value = " + value + "; duration = " + duration);
  Serial.println(pin);
  
  // on / off
  digitalWrite(pin, value ? HIGH : LOW);
  delay(duration);

  // on / off
  digitalWrite(pin, value ? LOW : HIGH);
  delay(duration);
}
