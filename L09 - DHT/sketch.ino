#include <DHT.h>

#define DHTPIN 2    // isto ako int DHTPIN = 2;
#define DHTTYPE DHT22   // dodajemo željeni dht senzor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float temperatura = dht.readTemperature();
  float vlaznost = dht.readHumidity();

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C, Vlaznost: ");
  Serial.print(vlaznost);
  Serial.println(" %");

}
