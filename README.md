# 🍼 Healthcare Infant Awakening (Hardware) Detector

**Project | IEEE @ UCSD | April 2022 – July 2022**

## 📌 Overview
The **Healthcare Infant Awakening Detector** is an Arduino-based hardware project designed to **monitor infant sleep status** using multiple sensors and notify parents or caregivers via a connected mobile interface.  
This project was developed as part of an IEEE UCSD competition, where a team of 4 collaborated to create a low-cost, reliable, and real-time infant sleep monitoring system.

## 🧠 Motivation
Early detection of infant movement or distress is critical in preventing health complications. Traditional baby monitors rely mostly on audio or video, which can miss subtle physiological signals. This project leverages **multi-sensor fusion** to provide more **accurate and responsive monitoring**.

## 🧰 Key Features
- 📡 **Sensor Integration**: Employed 5+ different sensors (temperature, motion, sound, humidity, vibration, etc.)  
- 🔧 **Custom Hardware**: Designed and soldered electronic boards to integrate sensors with Arduino.  
- 📲 **Real-Time Alerts**: Sent infant sleep status to a smartphone application via Bluetooth/WiFi.  
- 🧪 **Data Fusion Logic**: Aggregated sensor readings to detect waking or distress with reduced false positives.  
- 🧑‍🤝‍🧑 **Team Leadership**: Led a team of 3 members through the design, coding, testing, and competition phase.  

## 🛠️ Tech Stack
- **Hardware:** Arduino Uno, Breadboard, Temperature sensor, Vibration sensor, Humidity sensor, Motion sensor, Sound sensor.  
- **Firmware:** C/C++ (Arduino IDE).  
- **Communication:** Bluetooth/WiFi module (ESP8266).  
- **Mobile Interface:** Android app prototype (Java).  
- **Tools:** Soldering station, multimeter, prototyping boards.

## 🚀 System Architecture
1. Sensor nodes continuously collect data from the infant’s environment and body movement.  
2. Arduino processes signals and runs a simple threshold + logic model.  
3. Alert signals are transmitted through Bluetooth/WiFi to a mobile app.  
4. Caregivers receive real-time notifications.

## 📅 Timeline
- **April 2022:** Requirements gathering & hardware prototyping  
- **May 2022:** Sensor integration and board soldering  
- **June 2022:** Firmware logic implementation + app connectivity  
- **July 2022:** IEEE UCSD competition presentation

## 🏆 Achievements
- Successfully demonstrated real-time infant movement detection.  
- Completed functional prototype within 3 months.  
- Received strong positive feedback from IEEE judges on innovation and usability.

## 🧭 Future Improvements
- Integrate ML-based anomaly detection for more accurate predictions.  
- Improve mobile app UX with real-time graphs.  
- Add cloud logging and emergency alert features.

## 👥 Contributors
- **Zhizhen (Averi) Yu** — Project Lead, Firmware & Hardware Integration  
- **Ellen (Ruilin) Hu** — Sensor design, mobile interface, testing

---

📎 *This project was developed for the IEEE @ UCSD competition as a practical healthcare hardware prototype.*
