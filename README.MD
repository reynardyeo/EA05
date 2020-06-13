SCDF Coding Challenge

Problem Statement Chosen: INTEGRATING WITH A SMART ENVIRONMENT

Solution: Integrating IOT with "myResponder" SCDF App

Install IOT ESP32 programmed with SW-420 and ICSG017A to detect for smoke (for fires), harmful gases (gas stove leakages) and fall detection.

Plan: Program ESP32 using Arduino, use IBM IoT and IBM data science. 
ESP32 with Arduino - Program to detect vibration to tell if someone has fallen. Program to detect harmful gases. 


How to start?
Vibration Sensor) Find sensitivity for Vibration Sensor by getting datasets first. 
Capture usual vibration such as walking, running and jumping. Capture falls seperately to compare. 
Using IBM Data science, compare the values. 
Eg, falls will have large vibration, followed by one to two smaller vibrations. Set the Vibration Sensor to that value.

Gas Sensor) Test to check gas leaks and smoke triggers the sensor. Set values to only trigger if gas leak or smoke is detected.

How does this work? 
Install the ESP32 with sensors on HDB on every floor.

When vibration sensor has a fall detected, it will communicate with the server to send a request to myResponder app to have someone first aid trained to check the scene. Possible to also send a message to people living at the floor to check. If no one is able to respond, ambulance can be dispatched. If error occurs and no one has fallen, the Vibration Sensor can be further calibrated such that this does not occur again. As more data is given, the vibration sensor will be more accurate.

When smoke sensor detects smoke/gas leak, residents in that area will be notified to evacuate and SCDF/Ambulance will be called.
This lowers the risk of residents getting harmed and lowers the time for SCDF/Ambulance to arrive.


Modules required:
1) Grove – Vibration Sensor (SW-420)
2) MQ-2 Gas Sensor Smoke Detection Module Sensor ICSG017A
3) ESP32 /ESP8266
4) Arduino Uno

Vibration Sensor:
Non-directional
High sensitivity (adjustable)
Respond to vibration, tilt
When movement or vibration occurs, the circuit will be briefly disconnected and output low
Waterproof
Compression resistance
All in all, this vibration sensor module is perfect in helping you get started with vibration or tilt sensing.

Smoke Detection Sensor:
Application:
For harmful gas family, environment detection device, is suitable for the detection of the ammonia, aromatic compounds, sulfide, benzene vapor, smoke and other harmful gas, gas
sensitive element concentration range: 10 to 1000ppm provides reference cases.
