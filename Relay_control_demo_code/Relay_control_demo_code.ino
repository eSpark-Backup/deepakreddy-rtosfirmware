void setup() {
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  delay(4000);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(4000);
}
