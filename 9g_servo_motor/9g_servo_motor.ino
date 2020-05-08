#include <Servo.h>
/* define a header file. Special attention here, you can call the servo function directly from Arduino's software menu  bar Sketch>Importlibrary>Servo, or input 
#include <Servo.h>. Make sure there is a space between #include and  <Servo.h>. Otherwise, it will cause compile error.*/
Servo myservo;// define servo variable name
void setup()
{
myservo.attach(9);// select servo pin(9 or 10)
}
void loop()
{
  for (int i = 0; i <= 180; i++) {
    myservo.write(i);// set rotation angle of the motor
    delay(50);
  }
for (int i = 180; i >= 0; i--) {
    myservo.write(i);// set rotation angle of the motor
    delay(50);
  }
}
