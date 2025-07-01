#include <OneWire.h>
#include <pins_arduino.h>
#include <Wire.h>

int temperature = 0; 

int Temp = A0;

void setup() {
  Serial.begin(115200);
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

void loop() {
   
  temperature = readTemperature(); // read temperature data
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  
      // send humidity data
  Wire.write(temperature);    // send temperature data
}


int readTemperature(){
   int sensor = analogRead(Temp);
   int temperature =  (5.0 * sensor * 100.0)/1024.0; 
 
   Serial.print("temperature: ");
    Serial.println(temperature);
    delay(10000);
   return temperature;
}