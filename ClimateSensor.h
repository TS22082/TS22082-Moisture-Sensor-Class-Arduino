#ifndef ClimateSensor_h
#define ClimateSensor_h

// the #include statment and code go here...
#include "Arduino.h"

class MoistureDetector{

public:

  MoistureDetector(int pin, int power);
  MoistureDetector(int pin);

  int getSensorValue();
  void power(bool p);

public:
  int sensorPin, sensorReading, sensorPower;
};
#endif
