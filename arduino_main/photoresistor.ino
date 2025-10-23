#include "DHT.h"

#define DHTPIN A2 
#define DHTTYPE DHT11
#define MIC_IN A4
#define ACT_IN A10
int sampleWindow = 50; 

DHT dht(DHTPIN, DHTTYPE);
int lightLevel;

void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
     pinMode(A0, INPUT);

     dht.begin();
     pinMode( MIC_IN, INPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  lightLevel = analogRead(A0); 
  Serial.print("The light level is :");
  Serial.println(lightLevel);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print(F(" Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("C "));
  float soundLevel = analogRead(MIC_IN); 
  soundLevel -= 510.0;
  soundLevel *= 1000.0;
  Serial.print("The sound level is :");
  Serial.println(soundLevel);
  
  float activityLevel = analogRead(ACT_IN); 
  Serial.print("The human activity level is :");
  Serial.println(activityLevel);
  delay(250);
}
