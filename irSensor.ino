// Arduino Code for IR Sensor
// D0 pin 9
// A0 pin A3

float reading;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  delay(500);
  reading = analogRead(A3)
  Serial.println(reading);
  delay(100);
}
