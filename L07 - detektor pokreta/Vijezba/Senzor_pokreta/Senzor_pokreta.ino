int detektorPin = 2;
int zujalica = 3;
int relej = 4;

bool jeAktivan;
void setup() {
  // put your setup code here, to run once:
  pinMode(detektorPin, INPUT);
  pinMode(zujalica, OUTPUT);
  pinMode (relej, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   jeAktivan = digitalRead(detektorPin);

   if(jeAktivan ==true)
   {
    digitalWrite(zujalica, LOW);
    digitalWrite(relej, HIGH);
    }
    else
    {
      digitalWrite(zujalica, HIGH);
      digitalWrite(relej, LOW);
     }
}
