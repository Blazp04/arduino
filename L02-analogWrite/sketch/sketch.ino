
// NAPOMENA:: ovakav način paljenja i gašenja lampcie može se izvesti samo pomoću PWM pinova
//            https://create.arduino.cc/projecthub/muhammad-aqib/arduino-pwm-tutorial-ae9d71


int ledPin = 11; 

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  //Postepeno paljenje lampice
  for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
    analogWrite(ledPin, ledVal);
    delay(15);
  }  
  //Postepeno gašenje lampice
  for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
    analogWrite(ledPin, ledVal);
    delay(15);
  } 
  
  delay(1000);
  
}
