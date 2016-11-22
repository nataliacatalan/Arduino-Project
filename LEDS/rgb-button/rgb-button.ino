
int led1R = 13;
int led1G = 11;
int led1B = 12;
int but = 8;

///****************************************************
/// FUNCTIONS

void red() {
  digitalWrite(led1R, LOW);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, HIGH);

}
void green() {
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, LOW);
  digitalWrite(led1B, HIGH);

}
void blue() {
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, LOW);

}
void off() {
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, HIGH);

}

///****************************************************
///SETUP

void setup() {
  pinMode(led1R, OUTPUT);
  pinMode(led1G, OUTPUT);
  pinMode(led1B, OUTPUT);
  pinMode(but, INPUT);
  Serial.begin(9600);


}

///****************************************************
///LOOP

void loop() {

  int button = digitalRead(but);

  if (button == 1) {
    red();
    delay(1000);
    green();
    delay(1000);
    blue();
    delay(1000);

  } else {
    off();

    Serial.println(but);

  }

}


