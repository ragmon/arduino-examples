/*
 * HEX IR buttons values
 * 
 * NOTICE: Samsung
 * 
 * E0E020DF - #1
 * E0E0A05F - #2
 * E0E0609F - #3
 */

#include <IRremote.h>

#define PIN_LED_RED 10
#define PIN_LED_YELLOW 9
#define PIN_LED_BLUE 8
#define PIN_IR 2

#define DURATION 1000

IRrecv irrecv(PIN_IR);

decode_results results;

void setup() {
  Serial.begin(9600);

  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  
  irrecv.enableIRIn();                      // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);

    switchLed(results.value);
    
    irrecv.resume();                        // Receive the next value
  }
  delay(100);
}

void switchLed(int irCode) {
  Serial.println(irCode, HEX);
  
  switch (irCode) {
    // #1
    case 0xE0E020DF:
      blinkLed(PIN_LED_RED, DURATION);
      break;
      
    // #2
    case 0xE0E0A05F:
      blinkLed(PIN_LED_YELLOW, DURATION);
      break;
      
    // #3
    case 0xE0E0609F:
      blinkLed(PIN_LED_BLUE, DURATION);
      break;
      
    default:
      Serial.print("Value #");
      Serial.print(irCode, HEX);
      Serial.println(" not support");
  }
}

void blinkLed(int pin, int duration) {
  Serial.print("Blink led #");
  Serial.println(pin);
  
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
}
