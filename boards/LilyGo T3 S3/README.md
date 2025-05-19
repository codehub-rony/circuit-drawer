# LilyGO T3-S3 LoRa 868MHz - ESP32-S3 - SX1262 - 0.96 inch OLED Display

[documentation](https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series)

### I2C
The I2C pins are taken by the OLED. Pin 17 is therefore not broken out. In order to connect other I2C sensors, a second I2C bus can be created. If these pins don't work or if you get wierd values. Try different pin combination

Example with [adafruit BMP280](https://github.com/codehub-rony/circuit-drawer/tree/main/sensors/adafruit_BMP280) sensor
```
#include <Adafruit_BMP280.h>
#include <Wire.h>

TwoWire I2CBMP = TwoWire(1);
Adafruit_BMP280 bmp(&I2CBMP);

void setup()
  I2CBMP.begin(42, 46);        // BMP280 on separate I2C pins. 42 (SDA), 45 (SCL) 

  if (!bmp.begin(0x76)) {
    if (!bmp.begin(0x77)) {
      Serial.println("Could not find BMP280 at 0x76 or 0x77");
      while (1);
    }
  }

```

### pinout

![pinout](./assets/lilygo_t3_s3_pinout.png)
