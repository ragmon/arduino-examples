
String val;
int ledpin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  val = Serial.readString();

  if (val != "") {
    digitalWrite(ledpin, HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
    
    Serial.println("Hello, " + val + "!");
  }
}
