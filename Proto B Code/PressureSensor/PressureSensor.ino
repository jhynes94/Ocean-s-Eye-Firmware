const int PressureSensor = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Pressure: ");
  Serial.println(analogRead(PressureSensor));
  delay(1000);
}
