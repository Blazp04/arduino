int trigPin = 9;
int echoPin = 8;

float udaljenost;
long vrijeme;

float refToc = 950;
int brojac;


void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  vrijeme = pulseIn(echoPin,HIGH);
  udaljenost =vrijeme*0.340/2;

  Serial.println(brojac);
  Serial.println(udaljenost);

  if(udaljenost < refToc)
  {
    brojac = brojac + 1;
    delay(1000);
    }
    
  

}
