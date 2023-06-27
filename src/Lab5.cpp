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

int value; 

void setup() {
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

void loop() {
  int value =  analogRead(A5);
  digitalWrite(value);
  value = map(value, 0, 4095, 0, 255);
}