#define A 7
#define B 6
#define C 5
#define D 10
#define E 11
#define F 8
#define G 9
#define DP 4

#define DURATION 500

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  for (int digit = 0; digit <= 10; digit++) {
    if (digit != 10) {
      displayDigital(digit);

      delay(500);
      
      clearDisplay();
    } 
    // reload display
    else {
      reloadDisplay();
    }

    delay(DURATION);
  }
}

// -----------------------------------------

void clearDisplay() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

void reloadDisplay() {
  int matrix[] = { D, E, G, B, A, F, G, C, DP };
  int duration = 100;
  
  for (int i = 0; i <= sizeof(matrix) - 1; i++) {
    digitalWrite(i, HIGH);
    delay(duration);
    clearDisplay();
  }
}

void displayDigital_0() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}

void displayDigital_1() {
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

void displayDigital_2() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
}

void displayDigital_3() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
}

void displayDigital_4() {
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

void displayDigital_5() {
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
}

void displayDigital_6() {
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(G, HIGH);
}

void displayDigital_7() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

void displayDigital_8() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void displayDigital_9() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

// -----------------------------------------

void displayDigital(int digit) {
  switch (digit) {
    case 1:
      displayDigital_1();
      break;

    case 2:
      displayDigital_2();
      break;

    case 3:
      displayDigital_3();
      break;

    case 4:
      displayDigital_4();
      break;

    case 5:
      displayDigital_5();
      break;

    case 6:
      displayDigital_6();
      break;

    case 7:
      displayDigital_7();
      break;

    case 8:
      displayDigital_8();
      break;

    case 9:
      displayDigital_9();
      break;

    case 0:
      displayDigital_0();
      break;
    
    default:
      Serial.print("Unsupported value #");
      Serial.println(digit);
  }
}
