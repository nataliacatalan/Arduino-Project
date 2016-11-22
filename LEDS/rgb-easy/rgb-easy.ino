int led1R = 13;
int led1G = 11;
int led1B = 12;


void setup() {
  pinMode(led1R, OUTPUT);
  pinMode(led1G, OUTPUT);
  pinMode(led1B, OUTPUT);


}

void loop() {

  digitalWrite(led1R, LOW);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, HIGH);
  delay(1000);
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, LOW);
  digitalWrite(led1B, HIGH);
  delay(1000);
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, LOW);
  delay(1000);
}
