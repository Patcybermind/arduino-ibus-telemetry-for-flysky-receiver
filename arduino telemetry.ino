extern "C" {
#include "pico.h"
#include "pico/time.h"
#include "pico/bootrom.h"
}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as an output
    pinMode(28, INPUT); // Set pin 8 as an input

}

void loop () {
  
  if (digitalRead(28) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED
  } else {
    digitalWrite(LED_BUILTIN, LOW); // Turn off the LED
    delay(50);
    digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED
    delay(50);
  }
  
  //reset_usb_boot(1<<PICO_DEFAULT_LED_PIN,0);
}


/*
#include <IBusBM.h>

IBusBM IBus; // Use a single IBusBM instance for both servo signal and sensor data



void setup() {
  Serial.begin(115200);

  //#define TEMPBASE 400    // base value for 0'C

// sensor values
uint16_t speed=0;
uint16_t temp=TEMPBASE+200; // start at 20'C
 Since Arduino Uno has only one hardware serial port, we use it for both debugging and iBUS.
  // Note: This setup requires careful management of serial communication to avoid conflicts.
  IBus.begin(Ser500; // Use the same Serial for IBus communication

  //Serial.println("Start iBUS");

    // adding 2 sensors
  IBus.addSensor(IBUSS_RPM);
  IBus.addSensor(IBUSS_TEMP);
#define TEMPBASE 400    // base value for 0'C

// sensor values
uint16_t speed=0;
uint16_t temp=TEMPBASE+200; // start at 20'C

  // Since Arduino Uno has only one hardware serial port, we use it for both debugging and iBUS.
  // Note: This setup requires careful management of serial communication to avoid conflicts.
  IBus.begin(Serial); // Use the same Serial for IBus communication

  //Serial.println("Start iBUS");

    // adding 2 sensors
  IBus.addSensor(IBUSS_RPM);
  IBus.addSensor(IBUSS_TEMP);
}
#define TEMPBASE 400    // base value for 0'C

// sensor values
uint16_t speed=0;
uint16_t temp=TEMPBASE+200; // start at 20'C

void loop() {
  IBus.setSensorMeasurement(1,speed);
  speed += 10;                         increase motor speed by 10 RPM
  IBus.setSensorMeasurement(2,temp++);   /increase temperature by 0.1 'C every loop
  //Serial.print("Speed=");
  //Serial.print(speed);
  //Serial.print(" Temp=");
  //Serial.println((temp-TEMPBASE)/10.);
  delay(500);
}


// Function to read servo data from a specific iBUS channel
int readIBusServoData(int channel) {
  // iBUS channels are 0-indexed, so subtract 1 from the channel number
  int channelIndex = channel - 1;
  
  // Read the servo data from the specified channel
  int servoData = IBus.readChannel(channelIndex);
  
  // Return the servo data
  return servoData;
}
*/