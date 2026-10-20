void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);

  Serial.println("hello world");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  Serial.println("ON");
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.println("OFF");
}
