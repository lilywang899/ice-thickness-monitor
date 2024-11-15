#include <DHT.h>

#define DHTPIN 7          // Define DHT pin
#define DHTTYPE DHT11     // Define DHT sensor type (DHT11, DHT22, etc.)

DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor

void setup() {
  Serial.begin(9600);     // Start serial communication
  dht.begin();            // Initialize DHT sensor
}

void loop() {
  // Reading temperature and humidity
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any readings failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print temperature and humidity on the Serial Monitor
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(1000); // Delay of 1 second
}
