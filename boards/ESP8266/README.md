# ESP8266
[Board documentation](https://randomnerdtutorials.com/getting-started-with-esp8266-wifi-transceiver-review/)
## Deep sleep
_see_: [deep sleep](https://randomnerdtutorials.com/esp8266-deep-sleep-with-arduino-ide/)

- Built in timer can be used by connecting **REST** to **D0** (**GPIO16**).
- Move code to `setup()` and set to sleep for example for 10 seconds: `ESP.deepSleep(10e6)` 

## Pinout

_see_: [pinout](https://randomnerdtutorials.com/esp8266-pinout-reference-gpios)

![esp8266 pinout](https://github.com/codehub-rony/circuit-drawer/blob/main/boards/ESP8266/ESP8266_pinout.png)
