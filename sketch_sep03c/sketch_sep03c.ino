void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
