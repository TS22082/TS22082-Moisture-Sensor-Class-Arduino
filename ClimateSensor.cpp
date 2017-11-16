/*
  ClimateSensor.cpp - Library getting enviromental data.
  Created by Thomas W. Smith, November 18, 2017.
  Released into the public domain.
*/
#include "Arduino.h"
#include "ClimateSensor.h"

MoistureDetector::MoistureDetector(int pin, int power){
  sensorPin = pin;
  sensorPower = power;
}

int MoistureDetector::getSensorValue(){
  sensorReading = analogRead(sensorPin);
  return sensorReading;
}

void MoistureDetector::power(bool p){
  if(p == true){
    digitalWrite(sensorPower,HIGH);
  }
  else if (p == false){
    digitalWrite(sensorPower, LOW);
  }
}
