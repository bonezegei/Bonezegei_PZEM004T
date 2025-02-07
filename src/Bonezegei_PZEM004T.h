/*
  PZEM004T Library
  Author: Bonezegei (Jofel Batutay)
  Date : January 2025
*/

#include <Arduino.h>

#ifndef _BONEZEGEI_PZEM004T_H_
#define _BONEZEGEI_PZEM004T_H_

class Bonezegei_PZEM004T {
public:
  Bonezegei_PZEM004T();
  char begin();
  uint16_t getData(uint16_t);
  float getVoltage();
  float getCurrent(bool fahrenheit);
  float getPower();

  uint8_t data[6];

  float _voltage;
  float _current;
};

#endif
