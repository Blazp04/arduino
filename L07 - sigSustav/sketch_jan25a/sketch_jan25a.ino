
bool isActive = false;
bool btn1 = true;
bool btn2 = false;
bool btn3 = true;

int buzzPin = 3;
int detPin = 4;

void aktivacija()
{
  if (btn1 == true && btn2 == false && btn3 == true)
  {
    isActive = false;
    digitalWrite(buzzPin, LOW);
     btn1 = true;
 btn2 = false;
 btn3 = true;
  }
  else
  {
     digitalWrite(buzzPin, HIGH);
    }

  digitalWrite(buzzPin, HIGH);

}

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(detPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (isActive == true)
  {
    digitalWrite(buzzPin, HIGH);
  }
  else
  {
    bool detekcija = digitalRead(detPin);
    if (detekcija == true)
    {
      aktivacija();
    }
  }

}
