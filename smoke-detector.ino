#define BUZZER_PIN 11

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue > 800) {
    analogWrite(BUZZER_PIN, 50);
    Serial.println("GAS DETECTED");
  } else {
    analogWrite(BUZZER_PIN, 0);
  }
  delay(1000);
}
