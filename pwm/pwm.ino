int potpin = 0;   // analog pin
int ledpin = 11;  // digital pin
int val = 0;      // buffer

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  Serial.println(val);

  analogWrite(ledpin, val / 4); // turn on LED and set up brightness（maximum output of PWM is 255）
  delay(10);
}
