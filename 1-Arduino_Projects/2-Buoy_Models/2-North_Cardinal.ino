//Pin Assignment
int led = 3;
int button = 2;
int flash = 200;
int wait = 500;

void setup() {
  //Pin initialisation
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if(button == 1){
    analogWrite(led, 255);
    delay(flash);
    analogWrite(led, 0);
    delay(wait);
  }
}
