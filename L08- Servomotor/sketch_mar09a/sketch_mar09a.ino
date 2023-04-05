#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define SLAVE_ADDRESS 0x04
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const int serialNumber = 12345;
const int sensorType = 1;

void setup() {
  Wire.begin(SLAVE_ADDRESS);
  Wire.onRequest(sendData);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity: ");
  Serial.println(humidity);
  delay(2000);
}

void sendData() {
  Wire.write((byte*)&serialNumber, sizeof(int));
  Wire.write((byte*)&sensorType, sizeof(int));
  
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Wire.write((byte*)&temperature, sizeof(float));
  Wire.write((byte*)&humidity, sizeof(float));
}
