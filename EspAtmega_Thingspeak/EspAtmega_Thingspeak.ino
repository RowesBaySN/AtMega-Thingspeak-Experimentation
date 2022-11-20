#include <SPI.h>
#include <Wire.h>
#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
const char ssid[] = "Beep";  // your network SSID (name)
const char pass[] = "Bap";   // your network password


WiFiClient  client;

//---------Channel Details---------//
unsigned long counterChannelNumber1 = CHANGEME;            // Channel ID (Current)
unsigned long counterChannelNumber2 = CHANGEME;            // Channel ID (Current)
unsigned long counterChannelNumber3 = CHANGEME;            // Channel ID (Current)
const char * myCounterReadAPIKey1 = "REPLACE"; // Read API Key (Needs to be changed)
const char * myCounterReadAPIKey2 = "REPLACE"; // Read API Key (Needs to be changed)
const char * myCounterReadAPIKey3 = "REPLACE"; // Read API Key (Needs to be changed)
const int FieldNumber1 = 1;  // The field you wish to read
const int FieldNumber2 = 2;  // The field you wish to read
const int FieldNumber3 = 3;  // The field you wish to read
const int FieldNumber4 = 4;  // The field you wish to read
const int FieldNumber5 = 5;  // The field you wish to read
const int FieldNumber6 = 6;  // The field you wish to read
const int FieldNumber7 = 7;  // The field you wish to read
const int FieldNumber8 = 8;  // The field you wish to read
//-------------------------------//
 
void setup()   {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
      Serial.println("[ON]");

}
 
 
void loop() {
  //----------------- Network -----------------//
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Connecting to ");
    Serial.print(ssid);
    Serial.println(" ....");
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      delay(5000);
    }
    Serial.println("Connected to Wi-Fi Succesfully.");
  }

  //----------------- Room1 -----------------//  
  long Room1 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber1, myCounterReadAPIKey1);
  int statusCode;
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room1 -----------------//  

  //----------------- Room2 -----------------//  
  long Room2 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber2, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room2 -----------------//  

  //----------------- Room3 -----------------//  
  long Room3 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber3, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room3 -----------------//  

  //----------------- Room4 -----------------//  
  long Room4 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber4, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room4 -----------------//  

  //----------------- Room5 -----------------//  
  long Room5 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber5, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room5 -----------------//  

  //----------------- Room6 -----------------//  
  long Room6 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber6, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room6 -----------------//  

  //----------------- Room7 -----------------//  
  long Room7 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber7, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room7 -----------------// 
   
  //----------------- Room8 -----------------//  
  long Room8 = ThingSpeak.readLongField(counterChannelNumber1, FieldNumber8, myCounterReadAPIKey1);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room8 -----------------//  



  //Humidity
  

  //----------------- Room1 -----------------//  
  long Room1h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber1, myCounterReadAPIKey2);
  statusCode;
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room1 -----------------//  

  //----------------- Room2 -----------------//  
  long Room2h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber2, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room2 -----------------//  

  //----------------- Room3 -----------------//  
  long Room3h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber3, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room3 -----------------//  

  //----------------- Room4 -----------------//  
  long Room4h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber4, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room4 -----------------//  

  //----------------- Room5 -----------------//  
  long Room5h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber5, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room5 -----------------//  

  //----------------- Room6 -----------------//  
  long Room6h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber6, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room6 -----------------//  

  //----------------- Room7 -----------------//  
  long Room7h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber7, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room7 -----------------// 
   
  //----------------- Room8 -----------------//  
  long Room8h = ThingSpeak.readLongField(counterChannelNumber2, FieldNumber8, myCounterReadAPIKey2);
  statusCode = ThingSpeak.getLastReadStatus();
  if (statusCode == 200)
  {
  }
  else
  {
    Serial.println("Unable to read channel / No internet connection");
  }
  //----------------- End of Room8 -----------------//  
  
  Serial.print(Room1);
  Serial.print(",");
  Serial.print(Room2);
  Serial.print(",");
  Serial.print(Room3);
  Serial.print(",");
  Serial.print(Room4);
  Serial.print(",");
  Serial.print(Room5);
  Serial.print(",");
  Serial.print(Room6);
  Serial.print(",");
  Serial.print(Room7);
  Serial.print(",");
  Serial.print(Room8);
  Serial.print(",");
  
  Serial.print(Room1h);
  Serial.print(",");
  Serial.print(Room2h);
  Serial.print(",");
  Serial.print(Room3h);
  Serial.print(",");
  Serial.print(Room4h);
  Serial.print(",");
  Serial.print(Room5h);
  Serial.print(",");
  Serial.print(Room6h);
  Serial.print(",");
  Serial.print(Room7h);
  Serial.print(",");
  Serial.print(Room8h);
  Serial.print("\n");
  delay(10000);
}
