#define PIN_RED 11
#define PIN_GREEN 10
#define PIN_BLUE 9

#define DURATION 1

int val;

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  Serial.begin(9600);
}

void loop() {
//  for(val=255; val>0; val--)
//  {
//   analogWrite(PIN_RED, val);
//   analogWrite(PIN_GREEN, 255-val);
//   analogWrite(PIN_BLUE, 128-val);
//   delay(DURATION); 
//  }
//  
//  for(val=0; val<255; val++)
//  {
//   analogWrite(PIN_RED, val);
//   analogWrite(PIN_GREEN, 255-val);
//   analogWrite(PIN_BLUE, 128-val);
//   delay(DURATION);
//  }

  fade(PIN_RED, DURATION);
  fade(PIN_GREEN, DURATION);
  fade(PIN_BLUE, DURATION);

  //Serial.println(val, DEC);
}

void fade(int pin, int duration) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pin, i);
    delay(duration);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(pin, i);
    delay(duration);
  }

  delay(100);
}
