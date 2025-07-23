#define BUZZER_PIN 11

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue > 800) {
    digitalWrite(BUZZER_PIN,HIGH);
    Serial.println("GAS DETECTED");
  } else {
    ditigalWrite(BUZZER_PIN,LOW);
  }
  delay(1000);
}
