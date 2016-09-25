/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 * Note: because most Arduinos have a built-in LED attached
 to pin 13 on the board, the LED is optional.


 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */

const int xInput = A3;
const int yInput = A2;
const int zInput = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("x: ");
  Serial.print(analogRead(xInput));
  Serial.print(" y: ");
  Serial.print(analogRead(yInput));
  Serial.print(" z: ");
  Serial.println(analogRead(zInput));
  delay(100);        // delay in between reads for stability
}
