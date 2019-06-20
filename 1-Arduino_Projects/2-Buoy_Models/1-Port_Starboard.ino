//Pin Assignment
int led = 13;
int flash = 200;
int wait = 750;

void setup() {
  //Pin initialisation
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, 255);
  delay(flash);
  analogWrite(led, 0);
  delay(wait);
}
