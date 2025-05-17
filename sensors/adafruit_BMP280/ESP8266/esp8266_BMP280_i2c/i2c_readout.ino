#include <Adafruit_BMP280.h>
#include <Wire.h>

// BMP280 I2C wiring
Adafruit_BMP280 bmp;

void setup() {
    Serial.begin(9600);
    Wire.begin(D2, D1); // SDA, SCL — for ESP8266 (NodeMCU)


    if (!bmp.begin(0x76)) {
      if (!bmp.begin(0x77)) {
        Serial.println("Could not find BMP280 at 0x76 or 0x77");
        while (1);
      }
    }
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure() / 100.0F);
  Serial.println(" hPa");

  Serial.println();
  Serial.println(" =====");


  delay(5000);

}
