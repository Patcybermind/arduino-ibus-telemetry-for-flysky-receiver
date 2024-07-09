my goal is to use an arduino to send telemetry data from a flysky receiver to a flysky radio transmitter using ibus that way i can monitor a lot of things like voltage etc

rn you must have pin 28 set to on because if you dont it will go back to boot sel mode so you can reflash something else without having to plug and unplug
![image](https://github.com/Patcybermind/arduino-ibus-telemetry-for-flysky-receiver/assets/97562509/a151bd3c-4728-4a71-98be-6b320284e82a)
you also have to change this in the ibusbm.h file of the ibus library or else you get an ambiguity error
