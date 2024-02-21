//declaration
int led = BUILTIN_LED; //42
//setup
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}
//loop
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  Serial.println("Led ON");
  delay(2000);
  digitalWrite(led, LOW);
  Serial.println("Led OFF");
  delay(2000);
}
