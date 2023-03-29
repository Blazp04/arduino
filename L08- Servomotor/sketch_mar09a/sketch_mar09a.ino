#include <Stepper.h>


#define STEPS 10

Stepper stepper(STEPS, 8, 9, 10, 11);
Stepper motor(100,3,4,5,6);


void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(50);
  motor.setSpeed(200);

}

void loop() {

 motor.step(20);
}
