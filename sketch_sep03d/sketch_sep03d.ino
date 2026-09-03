const int led = 2;  // constant variable assigned the Digital Pin Number 
                    // that we have connected the positive wire to from the LED
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(led, HIGH);
  delay(1000);

  Serial.println("LED OFF");
  digitalWrite(led, LOW);
  delay(500);
}
