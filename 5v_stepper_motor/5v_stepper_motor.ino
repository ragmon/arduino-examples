#include <Stepper.h>   
#define STEPS 100  
#define STEP 500

Stepper stepper(STEPS, 8, 9, 10, 11);  
//int previous = 0;  

void setup()
{
  stepper.setSpeed(200);
}

void loop()
{    
  stepper.step(STEP);
  delay(50);
}
