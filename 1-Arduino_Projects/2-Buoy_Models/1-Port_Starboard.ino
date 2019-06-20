//Pin Assignment
int led = 3;
int button = 2;
int wait = 750;

void setup() {
  //Pin initialisation
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if(button == 1){
    analogWrite(led, 255);
    delay(wait);
  }
}
