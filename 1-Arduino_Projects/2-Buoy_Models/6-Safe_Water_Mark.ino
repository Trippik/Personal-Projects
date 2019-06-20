//Pin Assignment
int led = 13;
int flash = 3000;
int wait = 10000;

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
