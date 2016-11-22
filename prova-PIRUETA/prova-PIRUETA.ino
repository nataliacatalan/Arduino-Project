int led1R = 13;
int led1G = 11;
int led1B = 12;
int led2R = 6;
int led2G = 4;
int led2B = 5;
int led3R = 3;
int led3G = 10;
int led3B = 2;
int sensor1 = 8;
int sensor2 = 7;
int sensor3 = 9;
int startangel;
int valorS1;
int valorS2;
int valorS3;
int startmillis;
int lastmillis;
int startmillis2;
int lastmillis2;
int strarttres;


//*************************************************************************
///SETUP

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
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor2, INPUT);


}

//*************************************************************************
///FUNCTIONS

void red1() {
  digitalWrite(led1R, LOW);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, HIGH);

}
void green1() {
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, LOW);
  digitalWrite(led1B, HIGH);

}
void blue1() {
  digitalWrite(led1R, HIGH);
  digitalWrite(led1G, HIGH);
  digitalWrite(led1B, LOW);

}
void red2() {
  digitalWrite(led2R, LOW);
  digitalWrite(led2G, HIGH);
  digitalWrite(led2B, HIGH);

}
void green2() {
  digitalWrite(led2R, HIGH);
  digitalWrite(led2G, LOW);
  digitalWrite(led2B, HIGH);

}
void blue2() {
  digitalWrite(led2R, HIGH);
  digitalWrite(led2G, HIGH);
  digitalWrite(led2B, LOW);

}

void red3() {
  digitalWrite(led3R, LOW);
  digitalWrite(led3G, HIGH);
  digitalWrite(led3B, HIGH);

}
void green3() {
  digitalWrite(led3R, HIGH);
  digitalWrite(led3G, LOW);
  digitalWrite(led3B, HIGH);

}
void blue3() {
  digitalWrite(led3R, HIGH);
  digitalWrite(led3G, HIGH);
  digitalWrite(led3B, LOW);

}
void off() {
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


//*************************************************************************
///LOOP

void loop() {

  valorS1 = analogRead(sensor1);
  valorS2 = analogRead(sensor2);
  valorS3 = analogRead(sensor3);


  if (valorS2 == 1 && valorS1 == 0 && valorS3 == 0 ) {
    green2();
  }

  else if (valorS2 == 0 && valorS1 == 1 && valorS3 == 0) {
    blue2();
    red1();
  }

  else if (valorS2 == 0 && valorS1 == 0 && valorS3 == 1) {
    blue2();
    red3();

  } else if (valorS1 == 0 && valorS2 == 0 && valorS3 == 0) {
    off();

  }
}



