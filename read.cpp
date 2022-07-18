int led = 12;

void setup() {
  Serial.begin(115200);
  pinMode(led , OUTPUT);
  Serial.setTimeout(100);
}

void loop() {
  if (Serial.available() > 0) {
    int command = Serial.read();
    if (command == '1') {
      digitalWrite(led, HIGH);
    }
    else if (command == '2') {
      digitalWrite(led, LOW);
    }
  }
}
