#include <Wire.h>
#include <ar1010_2017lib.h>

AR1010_2017 radio = AR1010_2017();

//Set the radio frequency without the separator (101.2 -> 1012)
double frequencyFM = 916;

void setup() {
 Wire.begin();
 Serial.begin(9600);
 Serial.println("AR1010 - 2017 Demo");
 radio.initialise();
 radio.setVolume(14);
 radio.setFrequency(frequencyFM);
}

void loop() {
 Serial.print("Playing: ");
 Serial.println(radio.frequency());
 delay(60*1000);
}
