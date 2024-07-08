#include <Arduino.h>
#include <IBusBM.h>

IBusBM IBus; // Use a single IBusBM instance for both servo signal and sensor data

#define TEMPBASE 400 // base value for temperature is -40'C

// sensor values
uint16_t speed = 0;
uint16_t temp = TEMPBASE + 200; // start at 20'C

void setup() {
  // initialize serial port for both debug messages and iBUS communication
  Serial.begin(115200);

  // Since Arduino Uno has only one hardware serial port, we use it for both debugging and iBUS.
  // Note: This setup requires careful management of serial communication to avoid conflicts.
  IBus.begin(Serial); // Use the same Serial for IBus communication

  Serial.println("Start iBUS");

  // adding 2 sensors to generate some dummy data
  IBus.addSensor(IBUSS_RPM);
  IBus.addSensor(IBUSS_TEMP);
}

void loop() {
  // Since we're using the same serial port for debug and iBUS, avoid using Serial.print for debugging
  // or ensure that it does not interfere with the iBUS communication.

  IBus.setSensorMeasurement(1, speed);
  speed += 10; // increase motor speed by 10 RPM
  IBus.setSensorMeasurement(2, temp++); // increase temperature by 0.1 'C every loop

  delay(500);
}