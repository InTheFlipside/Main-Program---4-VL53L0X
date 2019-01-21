#include <VL53L0X.h>
#include <Wire.h>

#define XSHUT_pin 3
#define Sensor_newAddress 29

VL53L0X Sensor;
void setup() {
   Serial.begin(9600);
  // put your setup code here, to run once:
 pinMode(XSHUT_pin, OUTPUT);

 Wire.begin();

  pinMode(XSHUT_pin, INPUT);
  delay(10);
  Sensor.setAddress(Sensor_newAddress);
  Sensor.init();
  Sensor.startContinuous();
 
}

void loop() {

Serial.print(Sensor.readRangeContinuousMillimeters());
Serial.println("                           ");

  

}
