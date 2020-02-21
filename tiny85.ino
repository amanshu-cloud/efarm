#include "DHT.h"

#include //ESP8266 WIFI LIBRARY WILL COME OVER HERE
#define DHTPIN 7 //this is PB2 pin of attiny to which the data pin of dht is connected 
#define DHTTYPE DHT11;

DHT dht(DHTPIN,DHTTYPE);

float c_pin = ; //IC555 OUTPUT PIN IS CONNECTED TO WHICHEVER PIN ON TINY85
float b_level = ; //to whichever pin the voltage divider is connected on tiny 85 , i was confused as the schematic was a bit not clear about the connections
float ldr = ; 


void setup() {
  Serial.begin(9600);
  
  pinMode(ldr,INPUT);
  pinMode(c_pin,INPUT);
  pinMode(b_pin,INPUT);

  delay(2000);
  dht.begin();
  // put your setup code here, to run once:

}

void loop() {
 
  float temp = dht.readTemperature(); //temp variable will store the temperature values from the dht sensor
  delay(2000); //for safety 
  float hum = dht.readHumidity(); // similarly hum variable will read the humidity values from the dht sensor 
  delay(50);
  float battery = analogRead(b_level); // battery variable will store the battery level
  delay(2000);
  float cap = analogRead(c_pin); // cap variable will store the value of capacitance 
  delay(2000);
  float light = analogRead(ldr);
  delay(50);

  Serial.print("temperature:");
  Serial.print(temp);

   Serial.println("humidity:");
  Serial.print(hum);

   Serial.println("battery level:");
  Serial.print(battery);

   Serial.println("cap sensor output");
  Serial.print(cap);
  
 
    Serial.println("light intensity");
  Serial.print(cap);
  
  
  // put your main code here, to run repeatedly:

}
