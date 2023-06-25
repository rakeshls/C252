
#include <Wire.h>
#include <adafruit_BPM085.h>
#include WiFi.h
#include HTTPClient.h
#include DHT.h
#define DHTPIN 19
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE)
String serverName = "192.168.29.137"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
  Serial.print("Connecting to")
  Serial.print(WLAN_SSID);
  WiFi.begin(WLAN_SSID,WLAN_PASS);
  while(WiFi.status()!= WL_CONNECTED){
    delay(500)
    Serial.print(",")
  }
  Serial.print("WiFi connected")
  Serial.print("IP ADDERSS")
  Serial.print(WiFi.localIP())
  if(!bmp.begin()){
    Serial.print("could not bmp")
    while(1){
    }
    DHT.begin()
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if(WiFi.status()== WL_CONNECTED){
    WiFiClient client
    HTTPClient http

    Serial.print(bmp.readTemperature())
    Serial.print(bmp.readPressure())
    Serial.print(bmp.readAltitude())
    delay(500)
    
  }

}
