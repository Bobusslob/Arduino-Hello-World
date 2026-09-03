const int led = 2;  // constant variable assigned the Digital Pin Number 
const int button = 4;

int buttonState = 0;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  
  if (buttonState == HIGH){
    Serial.println("LED ON");
    digitalWrite(led, HIGH);
  } else{
    Serial.println("LED OFF");
    digitalWrite(led, LOW);
  }
}
