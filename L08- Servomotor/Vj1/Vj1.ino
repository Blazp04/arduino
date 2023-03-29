#include <Stepper.h>

Stepper motor(100,9,10,11,12);
int vrijednost = 0;
int novaVrijednost = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    motor.setSpeed(100);
    pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  vrijednost = analogRead(A0);
  novaVrijednost = map(vrijednost, 0,1023, 0, 10);
  Serial.println(novaVrijednost);
  motor.step(novaVrijednost);
}
