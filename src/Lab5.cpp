/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab5/src/Lab5.ino"
void setup();
void loop();
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab5/src/Lab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{    
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

void loop()
{
  int value = analogRead(A5);
  Serial.println(value);
  value = map(value, 0, 4095, 0, 255);
}