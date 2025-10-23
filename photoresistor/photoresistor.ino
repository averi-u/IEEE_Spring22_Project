#include "DHT.h"

#define DHTPIN A2 
#define DHTTYPE DHT11
#define MIC_IN A4
#define ACT_IN A10
#define LED1 44
#define LED2 42
#define LED3 40
#define LED4 38
#define LED5 36
#define LED6 34
#define LED7 32
#define LED8 30
#define LED9 28
#define LED10 26

int sampleWindow = 50; 

DHT dht(DHTPIN, DHTTYPE);
int lightLevel;

void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
     pinMode(A0, INPUT);

     dht.begin();
     pinMode( MIC_IN, INPUT );

     pinMode(LED1, OUTPUT);
     pinMode(LED2, OUTPUT);
     pinMode(LED3, OUTPUT);
     pinMode(LED4, OUTPUT);
     pinMode(LED5, OUTPUT);
     pinMode(LED6, OUTPUT);
     pinMode(LED7, OUTPUT);
     pinMode(LED8, OUTPUT);
     pinMode(LED9, OUTPUT);
     pinMode(LED10, OUTPUT);
}

void loop() {
  //Reading the levels for the four quantities
  lightLevel = analogRead(A0); 
  Serial.print("The light level is :");
  Serial.println(lightLevel);
  
  float humidityLevel = dht.readHumidity();
  float tempLevel = dht.readTemperature();
  Serial.print(F(" Humidity: "));
  Serial.print(humidityLevel);
  Serial.print(F("%  Temperature: "));
  Serial.print(tempLevel);
  Serial.print(F("C "));
  
  float soundLevel = analogRead(MIC_IN); 
  soundLevel -= 450.0;
  soundLevel *= 1000.0;
  Serial.print("The sound level is :");
  Serial.println(soundLevel);
  
  float activityLevel = analogRead(ACT_IN); 
  Serial.print("The human activity level is :");
  Serial.println(activityLevel);


  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  digitalWrite(LED10, LOW);

  //To signal the device is working
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);

  //Start sensing
  if (soundLevel >= 70000 && activityLevel > 600 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED3, HIGH);
  }
  if (soundLevel >= 80010 && activityLevel > 601 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED4, HIGH);
  }
  if (soundLevel >= 80020 && activityLevel > 602 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED5, HIGH);
  }
  if (soundLevel >= 80030 && activityLevel > 603 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED6, HIGH);
  }
  if (soundLevel >= 80040 && activityLevel > 604 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED7, HIGH);
  }
  if (soundLevel >= 85050 && activityLevel > 605 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED8, HIGH);
  }
  if (soundLevel >= 85060 && activityLevel > 606 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED9, HIGH);
  }
  if (soundLevel >= 85070 && activityLevel > 607 && humidityLevel >= 0.18 && tempLevel >= 20 ) {
    digitalWrite(LED10, HIGH);
  }
  delay(150);
}
