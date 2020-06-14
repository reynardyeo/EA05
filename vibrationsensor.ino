#include <Wire.h>
const int addr = 0x55; //i2C Address
const int addr = 55; //i2C Address
 
void setup(){
    Serial.begin(9600);
    Serial.println("14CORE | D7S Sensor Test")
    Serial.println("Initializing............")
    delay(5000);
    Serial.println("Starting Sensor.........");
    Wire.begin();
    delay(10);
}
 
/* Set to read strongest Spectral Intensity
 value during current vibration */
 
void loop(){
    Wire.beginTransmission(addr);
    int spectralIntensity = Wire.receive();
    Wire.send(0);
    //Wire.send(32);
    Wire.endTransmission();
    Wire.requestFrom(addr);
    Serial.print("Spectral Intensity Data > ");
    Serial.println(spectralIntensity);
    delay(500);
 
}
