# SCDF Coding Challenge

Members: Faaris, Wen Da, Reynard, Allen

Singapore Polytechnic, Diploma in Mechanical engineering with Engineering Academy, final year students


## Problem Statement Chosen: INTEGRATING WITH A SMART ENVIRONMENT

Proposed Solution: Integrating IOT with "myResponder" SCDF App

## Contents
1. [Short description](https://github.com/reynardyeo/EA05/blob/master/README.MD#short-description)
2. [Demo video](https://github.com/reynardyeo/EA05/blob/master/README.MD#demo-video)
3. [The architecture](https://github.com/reynardyeo/EA05/blob/master/README.MD#the-architecture)
4. [Long description](https://github.com/reynardyeo/EA05/blob/master/README.MD#long-description)
5. [Project roadmap](https://github.com/reynardyeo/EA05/blob/master/README.MD#project-roadmap)
6. [Getting started](https://github.com/reynardyeo/EA05/blob/master/README.MD#getting-started)
7. [Running the tests](https://github.com/reynardyeo/EA05/blob/master/README.MD#running-tests)
8. [Built with](https://github.com/reynardyeo/EA05/blob/master/README.MD#what-we-used-to-build-our-solution)


## Short Description 
Singapore is not entirely secure, our population density means fires can spread quick, and our elderly population is prone to accidents. Our solution, Firefly, aims to target these two issues with the IBM cloud, with IoT integration.


## Demo Video
[![VIdeo](http://img.youtube.com/vi/Imq1fiuDmfY/0.jpg)](http://www.youtube.com/watch?v=Imq1fiuDmfY)


## The Architecture
![Node-red](https://media.discordapp.net/attachments/701592981924216853/721280848321839124/Node-red.PNG)
![demo](https://media.discordapp.net/attachments/701592981924216853/721285855884607498/IBM_stuff_v4.png?width=1189&height=670)

## Long Description

Singapore, although a highly developed country, is not entirely safe from accidents. These accidents may include house fires or our ever-growing elderly population who is worryingly living far away from their families and might not receive immediate aid if a physical injury occur as there is no one monitoring them. As such, our team wants to create a safer environment for our residents by incorporating smart technologies that provide faster reaction times by emergency services.

Our solution is a smart network called Firefly. It uses an ESP32 with vibration and gas/smoke sensors to detect falls, fires and gas leaks to call the emergency services and/or first aiders with the "myResponder" SCDF App. An IBM cloud is used to learn the types of vibration, whether it is common vibrations in the environment or actual people falling via data science. The same is used for the detection of smoke and gas. The app will also inform anyone in a 20m radius of the detected anomaly to gain community participation in resolving this issue.
Our team will install the sensors in new hdb flats and current hdb flats, starting with areas with many elderly, specifically along the corridors and common areas such as staircases and void decks.We may receive distrust from residents due to privacy concerns, but we will educate them on the life-saving capabilities of the sensors and that they are not monitoring devices.

Our solution thus is able to detect anomalies and immediately inform emergency services of the potential problem, increasing the chances to save a life.

## Project Roadmap:

Singapore, although a highly developed country, is not entirely safe from accidents. These accidents may include house fires or our ever-growing elderly population who is worryingly living far away from their families and might not receive immediate aid if a physical injury occur as there is no one monitoring them. As such, our team wants to create a safer environment for our residents by incorporating smart technologies that provide faster reaction times by emergency services.
Our solution is a smart network called Firefly. It uses an ESP32 with vibration and gas/smoke sensors to detect falls, fires and gas leaks to call the emergency services and/or first aiders with the "myResponder" SCDF App. An IBM cloud is used to learn the types of vibration, whether it is common vibrations in the environment or actual people falling via data science. The same is used for the detection of smoke and gas. The app will also inform anyone in a 20m radius of the detected anomaly to gain community participation in resolving this issue.
Our team will install the sensors in new hdb flats and current hdb flats, starting with areas with many elderly, specifically along the corridors and common areas such as staircases and void decks.We may receive distrust from residents due to privacy concerns, but we will educate them on the life-saving capabilities of the sensors and that they are not monitoring devices.
Our solution thus is able to detect anomalies and immediately inform emergency services of the potential problem, increasing the chances to save a life.


Install IOT ESP32 programmed with SW-420 and ICSG017A to detect for smoke (for fires), harmful gases (gas stove leakages) and fall detection.

### Plan:
Program ESP32 using Arduino, use IBM IoT and IBM data science. 
ESP32  - Program to detect vibration to tell if someone has fallen. Program to detect harmful gases. 

### How to start?
Vibration Sensor) Find sensitivity for Vibration Sensor by getting datasets first. 
Capture usual vibration such as walking, running and jumping. Capture falls seperately to compare. 
Using IBM Data science, compare the values. 
Eg, falls will have large vibration, followed by one to two smaller vibrations. Set the Vibration Sensor to that value.

Gas Sensor) Test to check gas leaks and smoke triggers the sensor. Set values to only trigger if gas leak or smoke is detected.

### How does this work?
Install the ESP32 with sensors on HDB on every floor.

When vibration sensor has a fall detected, it will communicate with the server to send a request to myResponder app to have someone first aid trained to check the scene. Possible to also send a message to people living at the floor to check. If no one is able to respond, ambulance can be dispatched. If error occurs and no one has fallen, the Vibration Sensor can be further calibrated such that this does not occur again. As more data is given, the vibration sensor will be more accurate.

When smoke sensor detects smoke/gas leak, residents in that area will be notified to evacuate and SCDF/Ambulance will be called.
This lowers the risk of residents getting harmed and lowers the time for SCDF/Ambulance to arrive.


#### Modules required
1) Grove – Vibration Sensor (SW-420)

2) MQ-2 Gas Sensor Smoke Detection Module Sensor ICSG017A

3) ESP32 /ESP8266

4) Arduino Uno

##### Vibration Sensor:
Non-directional
High sensitivity (adjustable)
Respond to vibration, tilt
When movement or vibration occurs, the circuit will be briefly disconnected and output low
Waterproof
Compression resistance
All in all, this vibration sensor module is perfect in helping you get started with vibration or tilt sensing.

##### Smoke Detection Sensor:
Application:
For harmful gas family, environment detection device, is suitable for the detection of the ammonia, aromatic compounds, sulfide, benzene vapor, smoke and other harmful gas, gas
sensitive element concentration range: 10 to 1000ppm provides reference cases.

## Getting started
Install the code into the ESP32, wire the ESP32 with the sensors 
![esp1](https://raw.githubusercontent.com/reynardyeo/EA05/master/esp32-and-CCS811_schem.jpg)
![esp2](https://raw.githubusercontent.com/reynardyeo/EA05/master/D7s-Siesmic-Earthquake-vibration-detection-sensor-arduino-14core-02-892x1024.jpg)


## Running tests:
Vibration Sensor) Find sensitivity for Vibration Sensor by getting datasets first. 
Capture usual vibration such as walking, running and jumping. Capture falls seperately to compare. 
Using IBM Data science, compare the values. 
Eg, falls will have large vibration, followed by one to two smaller vibrations. Set the Vibration Sensor to that value.

Gas Sensor) Test to check gas leaks and smoke triggers the sensor. Set values to only trigger if gas leak or smoke is detected.

## What we used to build our solution:
IBM Cloudant and IBM Node-Red and IBM Data Science

