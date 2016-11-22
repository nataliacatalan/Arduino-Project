int led1R
int led1G=
int led1B
int led2R
int led2G
int led2B
int led3R
int led3G
int led3B
int sensor1
int sensor2
int sensor3
int startangel
int valorS1;
int valorS1;
int valorS1;
int startmillis;
int lastmillis;
int startmillis2;
int lastmillis2;
int strarttres;

void setup() {

  pinMode(led1R, OUTPUT);
  pinMode(led1G, OUTPUT);
  pinMode(led1B, OUTPUT);
  pinMode(led2R, OUTPUT);
  pinMode(led2G, OUTPUT);
  pinMode(led2B, OUTPUT);
  pinMode(led3R, OUTPUT);
  pinMode(led3G, OUTPUT);
  pinMode(led3B, OUTPUT);
  pinMode(sensor1, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP);


}

void loop() {


  if (valorS2 < valorS1 && valorS2 < valorS3) {
    digitalWrite(led2R, HIGH);
    digitalWrite(led2G, LOW);
    digitalWrite(led2B, HIGH);
  }

  else if (valorS2 > valorS1 && valorS1 < valorS3) {
    digitalWrite(led2R, HIGH);
    digitalWrite(led2G, HIGH);
    digitalWrite(led2B, LOW);
    digitalWrite(led1R, LOW);
    digitalWrite(led1G, HIGH);
    digitalWrite(led1B, HIGH);
  }

  else if (valorS2 > valorS3 && valorS3 < valorS1) {
    digitalWrite(led2R, HIGH);
    digitalWrite(led2G, HIGH);
    digitalWrite(led2B, LOW);
    digitalWrite(led3R, LOW);
    digitalWrite(led3G, HIGH);
    digitalWrite(led3B, HIGH);
    
  } else {
    digitalWrite(led1R, HIGH);
    digitalWrite(led1G, HIGH);
    digitalWrite(led1B, HIGH);
    digitalWrite(led2R, HIGH);
    digitalWrite(led2G, HIGH);
    digitalWrite(led2B, HIGH);
    digitalWrite(led3R, HIGH);
    digitalWrite(led3G, HIGH);
    digitalWrite(led3B, HIGH);
  }

}

