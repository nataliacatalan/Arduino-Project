int sensor1;
int sensor2;
int sensor3;
int ledred1;
int ledred2;
int ledred3;
int ledgreen1;
int ledgreen2;
int ledgreen3
int swich;


void setup()

pinMode (sensor1, INPUT_PULLUP);
pinMode (sensor2, INPUT_PULLUP);
pinMode (sensor3, INPUT_PULLUP);
pinMode (ledred1, OUTPUT);
pinMode (ledred2, OUTPUT);
pinMode (ledred3, OUTPUT);
pinMode (ledgreen1, OUTPUT);
pinMode (ledgreen2, OUTPUT);
pinMode (ledgreen3, OUTPUT);
pinMode (swich, INPUT_PULLUP);

  

}

void loop() {

  int reading = digitalRead (swich);
 
  //    int bucle = (sensor2,sensor1,sensor1,sensor2);
  //    int tres = (sensor2,sensor1,sensor2,sensor3,sensor2);

  if (reading == 1023){


  }

  else if (reading == 512){


  }

  else if (reding == 0){

  }

}
