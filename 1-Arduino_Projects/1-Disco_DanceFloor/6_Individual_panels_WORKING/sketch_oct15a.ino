//Re-Written Dance Floor Code for 6 Fully independent Panels

  //Panel 1 Pins
  int RPin1 = 2;
  int GPin1 = 3;
  int BPin1 = 4;

  //Panel 2 Pins
  int RPin2 = 5;
  int GPin2 = 6;
  int BPin2 = 7;

 //Panel 3 Pins
 int RPin3 = 8;
 int GPin3 = 9;
 int BPin3 = 10;

 //Panel 4 Pins
 int RPin4 = 11;
 int GPin4 = 12;
 int BPin4 = 13;

 //Panel 5 Pins
 int RPin5 = 14;
 int GPin5 = 15;
 int BPin5 = 16;

 //Panel 6 Pins
 int RPin6 = 17;
 int GPin6 = 18;
 int BPin6 = 19;

//Fixed system integers
int ShortDelay = 5;
int MidDelay = 200;
int LongDelay = 1000;

 
void setup() {
  //Initialise Pins for Panel 1
  pinMode(RPin1, OUTPUT);
  pinMode(GPin1, OUTPUT);
  pinMode(BPin1, OUTPUT);

  //Initialise Pins for Panel 2
  pinMode(RPin2, OUTPUT);
  pinMode(GPin2, OUTPUT);
  pinMode(BPin2, OUTPUT);

  //Initialise Pins for Panel 3
  pinMode(RPin3, OUTPUT);
  pinMode(GPin3, OUTPUT);
  pinMode(BPin3, OUTPUT);

  //Initialise Pins for Panel 4
  pinMode(RPin4, OUTPUT);
  pinMode(GPin4, OUTPUT);
  pinMode(BPin4, OUTPUT);

  //Initialise Pins for Panel 5
  pinMode(RPin5, OUTPUT);
  pinMode(GPin5, OUTPUT);
  pinMode(BPin5, OUTPUT);

  //Initialise Pins for Panel 6
  pinMode(RPin6, OUTPUT);
  pinMode(GPin6, OUTPUT);
  pinMode(BPin6, OUTPUT);
}

void SetColourAllPanels (int redValue, int greenValue, int blueValue) {
  analogWrite(RPin1, redValue);
  analogWrite(RPin2, redValue);
  analogWrite(RPin3, redValue);
  analogWrite(RPin4, redValue);
  analogWrite(RPin5, redValue);
  analogWrite(RPin6, redValue);

  analogWrite(GPin1, greenValue);
  analogWrite(GPin2, greenValue);
  analogWrite(GPin3, greenValue);
  analogWrite(GPin4, greenValue);
  analogWrite(GPin5, greenValue);
  analogWrite(GPin6, greenValue);

  analogWrite(BPin1, blueValue);
  analogWrite(BPin2, blueValue);
  analogWrite(BPin3, blueValue);
  analogWrite(BPin4, blueValue);
  analogWrite(BPin5, blueValue);
  analogWrite(BPin6, blueValue);
}



void SetColourPanel1(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin1, redValue);
  analogWrite(GPin1, greenValue);
  analogWrite(BPin1, blueValue);
}

void SetColourPanel2(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin2, redValue);
  analogWrite(GPin2, greenValue);
  analogWrite(BPin2, blueValue);
}

void SetColourPanel3(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin3, redValue);
  analogWrite(GPin3, greenValue);
  analogWrite(BPin3, blueValue);
}

void SetColourPanel4(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin4, redValue);
  analogWrite(GPin4, greenValue);
  analogWrite(BPin4, blueValue);
}

void SetColourPanel5(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin5, redValue);
  analogWrite(GPin5, greenValue);
  analogWrite(BPin5, blueValue);
}

void SetColourPanel6(int redValue, int greenValue, int blueValue) {
  analogWrite(RPin6, redValue);
  analogWrite(GPin6, greenValue);
  analogWrite(BPin6, blueValue);
}

//
///
/////BASE ROUTINES
///
//

//
////PANEL ROUTINES
//

//PANEL 1 ROUTINES

void Panel1Off(){
  SetColourPanel1(0, 0, 0);
}

void Panel1Red(){
  SetColourPanel1(255, 0, 0);
}

void Panel1Green(){
  SetColourPanel1(0, 255, 0);
}

void Panel1Blue(){
  SetColourPanel1(0, 0, 255);
}

void Panel1Purple(){
  SetColourPanel1(255, 0, 255);
}

void Panel1Aqua(){
  SetColourPanel1(0, 255, 255);
}

void Panel1Yellow(){
  SetColourPanel1(255, 255, 0);
}

void Panel1FadeUpRed(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(255, 0, 0);
}

void Panel1FadeDownRed() {
  SetColourPanel1(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}

void Panel1FadeUpGreen(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 255, 0);
}

void Panel1FadeDownGreen(){
  SetColourPanel1(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel1(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}

void Panel1FadeUpBlue(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel1(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 255);
}

void Panel1FadeDownBlue(){
  SetColourPanel1(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel1(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}

void Panel1FadeUpPurple(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel1(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel1(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel1(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel1(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel1(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel1(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel1(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel1(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel1(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel1(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel1(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel1(255, 0, 255);
}

void Panel1FadeDownPurple(){
  SetColourPanel1(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel1(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel1(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel1(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel1(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel1(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel1(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel1(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel1(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel1(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel1(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel1(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel1(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}

void Panel1FadeUpAqua(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel1(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel1(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel1(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel1(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel1(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel1(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel1(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel1(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel1(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel1(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel1(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel1(0, 255, 255);
}

void Panel1FadeDownAqua(){
  SetColourPanel1(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel1(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel1(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel1(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel1(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel1(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel1(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel1(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel1(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel1(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel1(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel1(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel1(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}

void Panel1FadeUpYellow(){
  SetColourPanel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel1(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel1(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel1(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel1(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel1(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel1(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel1(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel1(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel1(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel1(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel1(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel1(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel1(255, 255, 0);

}

void Panel1FadeDownYellow(){
  SetColourPanel1(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel1(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel1(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel1(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel1(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel1(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel1(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel1(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel1(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel1(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel1(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel1(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel1(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel1(0, 0, 0);
}


//PANEL 2 ROUTINES

void Panel2Off(){
  SetColourPanel2(0, 0, 0);
}


void Panel2Red(){
  SetColourPanel2(255, 0, 0);
}

void Panel2Green(){
  SetColourPanel2(0, 255, 0);
}

void Panel2Blue(){
  SetColourPanel2(0, 0, 255);
}

void Panel2Purple(){
  SetColourPanel2(255, 0, 255);
}

void Panel2Aqua(){
  SetColourPanel2(0, 255, 255);
}

void Panel2Yellow(){
  SetColourPanel2(255, 255, 0);
}

void Panel2FadeUpRed(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(255, 0, 0);
}

void Panel2FadeDownRed() {
  SetColourPanel2(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

void Panel2FadeUpGreen(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 255, 0);
}

void Panel2FadeDownGreen(){
  SetColourPanel2(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel2(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

void Panel2FadeUpBlue(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel2(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 255);
}

void Panel2FadeDownBlue(){
  SetColourPanel2(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel2(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

void Panel2FadeUpPurple(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel2(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel2(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel2(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel2(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel2(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel2(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel2(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel2(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel2(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel2(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel2(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel2(255, 0, 255);
}

void Panel2FadeDownPurple(){
  SetColourPanel2(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel2(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel2(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel2(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel2(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel2(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel2(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel2(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel2(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel2(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel2(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel2(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel2(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

void Panel2FadeUpAqua(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel2(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel2(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel2(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel2(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel2(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel2(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel2(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel2(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel2(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel2(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel2(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel2(0, 255, 255);
}

void Panel2FadeDownAqua(){
  SetColourPanel2(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel2(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel2(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel2(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel2(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel2(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel2(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel2(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel2(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel2(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel2(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel2(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel2(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

void Panel2FadeUpYellow(){
  SetColourPanel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel2(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel2(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel2(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel2(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel2(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel2(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel2(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel2(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel2(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel2(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel2(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel2(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel2(255, 255, 0);

}

void Panel2FadeDownYellow(){
  SetColourPanel2(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel2(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel2(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel2(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel2(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel2(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel2(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel2(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel2(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel2(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel2(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel2(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel2(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel2(0, 0, 0);
}

//PANEL 3 ROUTINES

void Panel3Off(){
  SetColourPanel3(0, 0, 0);
}


void Panel3Red(){
  SetColourPanel3(255, 0, 0);
}

void Panel3Green(){
  SetColourPanel3(0, 255, 0);
}

void Panel3Blue(){
  SetColourPanel3(0, 0, 255);
}

void Panel3Purple(){
  SetColourPanel3(255, 0, 255);
}

void Panel3Aqua(){
  SetColourPanel3(0, 255, 255);
}

void Panel3Yellow(){
  SetColourPanel3(255, 255, 0);
}

void Panel3FadeUpRed(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(255, 0, 0);
}

void Panel3FadeDownRed() {
  SetColourPanel3(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

void Panel3FadeUpGreen(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 255, 0);
}

void Panel3FadeDownGreen(){
  SetColourPanel3(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel3(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

void Panel3FadeUpBlue(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel3(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 255);
}

void Panel3FadeDownBlue(){
  SetColourPanel3(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel3(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

void Panel3FadeUpPurple(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel3(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel3(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel3(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel3(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel3(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel3(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel3(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel3(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel3(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel3(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel3(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel3(255, 0, 255);
}

void Panel3FadeDownPurple(){
  SetColourPanel3(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel3(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel3(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel3(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel3(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel3(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel3(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel3(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel3(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel3(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel3(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel3(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel3(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

void Panel3FadeUpAqua(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel3(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel3(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel3(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel3(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel3(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel3(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel3(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel3(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel3(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel3(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel3(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel3(0, 255, 255);
}

void Panel3FadeDownAqua(){
  SetColourPanel3(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel3(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel3(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel3(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel3(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel3(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel3(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel3(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel3(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel3(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel3(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel3(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel3(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

void Panel3FadeUpYellow(){
  SetColourPanel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel3(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel3(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel3(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel3(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel3(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel3(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel3(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel3(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel3(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel3(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel3(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel3(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel3(255, 255, 0);

}

void Panel3FadeDownYellow(){
  SetColourPanel3(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel3(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel3(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel3(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel3(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel3(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel3(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel3(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel3(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel3(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel3(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel3(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel3(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel3(0, 0, 0);
}

//PANEL 4 ROUTINES

void Panel4Off(){
  SetColourPanel4(0, 0, 0);
}


void Panel4Red(){
  SetColourPanel4(255, 0, 0);
}

void Panel4Green(){
  SetColourPanel4(0, 255, 0);
}

void Panel4Blue(){
  SetColourPanel4(0, 0, 255);
}

void Panel4Purple(){
  SetColourPanel4(255, 0, 255);
}

void Panel4Aqua(){
  SetColourPanel4(0, 255, 255);
}

void Panel4Yellow(){
  SetColourPanel4(255, 255, 0);
}

void Panel4FadeUpRed(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(255, 0, 0);
}

void Panel4FadeDownRed() {
  SetColourPanel4(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

void Panel4FadeUpGreen(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 255, 0);
}

void Panel4FadeDownGreen(){
  SetColourPanel4(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel4(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

void Panel4FadeUpBlue(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel4(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 255);
}

void Panel4FadeDownBlue(){
  SetColourPanel4(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel4(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

void Panel4FadeUpPurple(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel4(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel4(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel4(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel4(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel4(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel4(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel4(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel4(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel4(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel4(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel4(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel4(255, 0, 255);
}

void Panel4FadeDownPurple(){
  SetColourPanel4(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel4(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel4(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel4(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel4(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel4(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel4(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel4(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel4(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel4(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel4(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel4(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel4(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

void Panel4FadeUpAqua(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel4(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel4(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel4(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel4(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel4(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel4(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel4(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel4(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel4(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel4(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel4(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel4(0, 255, 255);
}

void Panel4FadeDownAqua(){
  SetColourPanel4(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel4(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel4(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel4(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel4(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel4(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel4(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel4(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel4(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel4(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel4(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel4(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel4(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

void Panel4FadeUpYellow(){
  SetColourPanel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel4(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel4(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel4(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel4(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel4(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel4(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel4(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel4(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel4(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel4(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel4(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel4(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel4(255, 255, 0);

}

void Panel4FadeDownYellow(){
  SetColourPanel4(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel4(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel4(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel4(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel4(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel4(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel4(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel4(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel4(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel4(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel4(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel4(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel4(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel4(0, 0, 0);
}

//PANEL 5 ROUTINES

void Panel5Off(){
  SetColourPanel5(0, 0, 0);
}


void Panel5Red(){
  SetColourPanel5(255, 0, 0);
}

void Panel5Green(){
  SetColourPanel5(0, 255, 0);
}

void Panel5Blue(){
  SetColourPanel5(0, 0, 255);
}

void Panel5Purple(){
  SetColourPanel5(255, 0, 255);
}

void Panel5Aqua(){
  SetColourPanel5(0, 255, 255);
}

void Panel5Yellow(){
  SetColourPanel5(255, 255, 0);
}

void Panel5FadeUpRed(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(255, 0, 0);
}

void Panel5FadeDownRed() {
  SetColourPanel5(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
}

void Panel5FadeUpGreen(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 255, 0);
}

void Panel5FadeDownGreen(){
  SetColourPanel5(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel5(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
}

void Panel5FadeUpBlue(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel5(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 255);
}

void Panel5FadeDownBlue(){
  SetColourPanel5(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel5(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
}

void Panel5FadeUpPurple(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel5(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel5(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel5(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel5(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel5(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel5(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel5(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel5(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel5(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel5(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel5(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel5(255, 0, 255);
}

void Panel5FadeDownPurple(){
  SetColourPanel5(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel5(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel5(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel5(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel5(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel5(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel5(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel5(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel5(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel5(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel5(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel5(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel5(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
}

void Panel5FadeUpAqua(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel5(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel5(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel5(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel5(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel5(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel5(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel5(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel5(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel5(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel5(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel5(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel5(0, 255, 255);
}

void Panel5FadeDownAqua(){
  SetColourPanel5(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel5(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel5(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel5(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel5(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel5(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel5(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel5(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel5(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel5(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel5(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel5(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel5(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
}

void Panel5FadeUpYellow(){
  SetColourPanel5(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel5(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel5(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel5(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel5(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel5(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel5(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel5(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel5(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel5(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel5(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel5(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel5(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel5(255, 255, 0);

}

void Panel5FadeDownYellow(){
  SetColourPanel5(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel5(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel5(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel5(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel5(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel5(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel5(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel5(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel5(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel5(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel5(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel5(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel5(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel5(0, 0, 0);
  }

//PANEL 6 ROUTINES

void Panel6Off(){
  SetColourPanel6(0, 0, 0);
}


void Panel6Red(){
  SetColourPanel6(255, 0, 0);
}

void Panel6Green(){
  SetColourPanel6(0, 255, 0);
}

void Panel6Blue(){
  SetColourPanel6(0, 0, 255);
}

void Panel6Purple(){
  SetColourPanel6(255, 0, 255);
}

void Panel6Aqua(){
  SetColourPanel6(0, 255, 255);
}

void Panel6Yellow(){
  SetColourPanel6(255, 255, 0);
}

void Panel6FadeUpRed(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(255, 0, 0);
}

void Panel6FadeDownRed() {
  SetColourPanel6(255, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(230, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(210, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(190, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(170, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(150, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(130, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(110, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(90, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(70, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(50, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(30, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(10, 0, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

void Panel6FadeUpGreen(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 255, 0);
}

void Panel6FadeDownGreen(){
  SetColourPanel6(0, 255, 0); 
  delay(ShortDelay);
  SetColourPanel6(0, 230, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 210, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 190, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 170, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 150, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 130, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 110, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 90, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 70, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 50, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 10, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

void Panel6FadeUpBlue(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel6(0, 30, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 255);
}

void Panel6FadeDownBlue(){
  SetColourPanel6(0, 0, 255); 
  delay(ShortDelay);
  SetColourPanel6(0, 0, 230);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 210);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 190);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 170);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 150);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 130);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 110);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 90);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 70);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 50);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 30);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 10);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

void Panel6FadeUpPurple(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel6(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel6(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel6(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel6(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel6(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel6(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel6(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel6(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel6(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel6(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel6(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel6(255, 0, 255);
}

void Panel6FadeDownPurple(){
  SetColourPanel6(255, 0, 255); 
  delay(ShortDelay);
  SetColourPanel6(230, 0, 230);
  delay(ShortDelay);
  SetColourPanel6(210, 0, 210);
  delay(ShortDelay);
  SetColourPanel6(190, 0, 190);
  delay(ShortDelay);
  SetColourPanel6(170, 0, 170);
  delay(ShortDelay);
  SetColourPanel6(150, 0, 150);
  delay(ShortDelay);
  SetColourPanel6(130, 0, 130);
  delay(ShortDelay);
  SetColourPanel6(110, 0, 110);
  delay(ShortDelay);
  SetColourPanel6(90, 0, 90);
  delay(ShortDelay);
  SetColourPanel6(70, 0, 70);
  delay(ShortDelay);
  SetColourPanel6(50, 0, 50);
  delay(ShortDelay);
  SetColourPanel6(30, 0, 30);
  delay(ShortDelay);
  SetColourPanel6(10, 0, 10);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

void Panel6FadeUpAqua(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel6(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel6(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel6(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel6(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel6(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel6(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel6(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel6(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel6(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel6(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel6(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel6(0, 255, 255);
}

void Panel6FadeDownAqua(){
  SetColourPanel6(0, 255, 255); 
  delay(ShortDelay);
  SetColourPanel6(0, 230, 230);
  delay(ShortDelay);
  SetColourPanel6(0, 210, 210);
  delay(ShortDelay);
  SetColourPanel6(0, 190, 190);
  delay(ShortDelay);
  SetColourPanel6(0, 170, 170);
  delay(ShortDelay);
  SetColourPanel6(0, 150, 150);
  delay(ShortDelay);
  SetColourPanel6(0, 130, 130);
  delay(ShortDelay);
  SetColourPanel6(0, 110, 110);
  delay(ShortDelay);
  SetColourPanel6(0, 90, 90);
  delay(ShortDelay);
  SetColourPanel6(0, 70, 70);
  delay(ShortDelay);
  SetColourPanel6(0, 50, 50);
  delay(ShortDelay);
  SetColourPanel6(0, 30, 30);
  delay(ShortDelay);
  SetColourPanel6(0, 10, 10);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

void Panel6FadeUpYellow(){
  SetColourPanel6(0, 0, 0); 
  delay(ShortDelay);
  SetColourPanel6(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel6(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel6(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel6(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel6(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel6(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel6(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel6(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel6(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel6(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel6(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel6(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel6(255, 255, 0);

}

void Panel6FadeDownYellow(){
  SetColourPanel6(255, 255, 0); 
  delay(ShortDelay);
  SetColourPanel6(230, 230, 0);
  delay(ShortDelay);
  SetColourPanel6(210, 210, 0);
  delay(ShortDelay);
  SetColourPanel6(190, 190, 0);
  delay(ShortDelay);
  SetColourPanel6(170, 170, 0);
  delay(ShortDelay);
  SetColourPanel6(150, 150, 0);
  delay(ShortDelay);
  SetColourPanel6(130, 130, 0);
  delay(ShortDelay);
  SetColourPanel6(110, 110, 0);
  delay(ShortDelay);
  SetColourPanel6(90, 90, 0);
  delay(ShortDelay);
  SetColourPanel6(70, 70, 0);
  delay(ShortDelay);
  SetColourPanel6(50, 50, 0);
  delay(ShortDelay);
  SetColourPanel6(30, 30, 0);
  delay(ShortDelay);
  SetColourPanel6(10, 10, 0);
  delay(ShortDelay);
  SetColourPanel6(0, 0, 0);
}

//SERIES PANEL ROUTINE


//
///
/////WORKING ROUTINES
///
//

//A Function that turns off all of the panels 
void AllOff(){
  Panel1Off();
  Panel2Off();
  Panel3Off();
  Panel4Off();
  Panel5Off();
  Panel6Off();
}

//First Basic Light Pattern Routine - Using block lighting with no fades
void LightRoutine1(){
  Panel1Red();
  Panel3Blue();
  Panel5Green();
  
  Panel1Off();
  Panel2Purple();
  Panel3Off();
  Panel4Aqua();
  Panel5Off();
  Panel6Yellow();

  AllOff();
}

//Second Basic Light Pattern Routine - Using block lighting with no fades
void LightRoutine2(){
  Panel2Green();
  Panel3Green();
  Panel6Green();
  Panel1Blue();
  Panel4Blue();
  Panel5Blue();

  AllOff();
}

//Third Basic Light Pattern Routine - Using block lighting with no fades
void LightRoutine3(){
  Panel2Green();
  Panel3Green();
  Panel6Green();
  Panel1Purple();
  Panel4Purple();
  Panel5Purple();

  AllOff();
}

//Fourth Basic Light Pattern Routine - Using block lighting with no fades
void LightRoutine4(){
  Panel2Purple();
  Panel3Purple();
  Panel6Purple();
  Panel1Green();
  Panel4Green();
  Panel5Green();

  AllOff();
}

//Fifth Basic Light Pattern Routine - Using Fades
void LightRoutine5(){
  Panel1FadeUpRed();
  Panel2FadeUpGreen();
  Panel3FadeUpBlue();
  Panel4FadeUpYellow();
  Panel5FadeUpAqua();
  Panel6FadeUpPurple();
  Panel1FadeDownRed();
  Panel2FadeDownGreen();
  Panel3FadeDownBlue();
  Panel4FadeDownYellow();
  Panel5FadeDownAqua();
  Panel6FadeDownPurple();
}

//Turn All Panels to solid Red
void AllRed(){
  SetColourAllPanels(255, 0, 0);
}

//Turn All Panels to solid Green
void AllGreen(){
  SetColourAllPanels(0, 255, 0);
}

//Turn All Panels to solid Blue
void AllBlue(){
  SetColourAllPanels(0, 0, 255);
}

//Turn All Panels to solid Aqua
void AllAqua(){
  SetColourAllPanels(0, 255, 255);
}

//Turn All Panels to solid Purple
void AllPurple(){
  SetColourAllPanels(255, 0, 255);
}

//Turn All Panels to solid Yellow
void AllYellow(){
  SetColourAllPanels(255, 255, 0);
}

//Fade Up All Panels to Red
void AllFadeUpRed(){
  Panel1FadeUpRed();
  Panel2FadeUpRed();
  Panel3FadeUpRed();
  Panel4FadeUpRed();
  Panel5FadeUpRed();
  Panel6FadeUpRed();
}

//Fade Up All Panels to Green
void AllFadeUpGreen(){
  Panel1FadeUpGreen();
  Panel2FadeUpGreen();
  Panel3FadeUpGreen();
  Panel4FadeUpGreen();
  Panel5FadeUpGreen();
  Panel6FadeUpGreen();
}

//Fade Up All Panels to Blue
void AllFadeUpBlue(){
  Panel1FadeUpBlue();
  Panel2FadeUpBlue();
  Panel3FadeUpBlue();
  Panel4FadeUpBlue();
  Panel5FadeUpBlue();
  Panel6FadeUpBlue();
}

//Fade Up All Panels to Aqua
void AllFadeUpAqua(){
  Panel1FadeUpAqua();
  Panel2FadeUpAqua();
  Panel3FadeUpAqua();
  Panel4FadeUpAqua();
  Panel5FadeUpAqua();
  Panel6FadeUpAqua();
}

//Fade Up All Panels to Purple
void AllFadeUpPurple(){
  Panel1FadeUpPurple();
  Panel2FadeUpPurple();
  Panel3FadeUpPurple();
  Panel4FadeUpPurple();
  Panel5FadeUpPurple();
  Panel6FadeUpPurple();
}

//Fade Up All Panels to Yellow
void AllFadeUpYellow(){
  Panel1FadeUpYellow();
  Panel2FadeUpYellow();
  Panel3FadeUpYellow();
  Panel4FadeUpYellow();
  Panel5FadeUpYellow();
  Panel6FadeUpYellow();
}

//Fade Down All Panels from Red
void AllFadeDownRed(){
  Panel1FadeDownRed();
  Panel2FadeDownRed();
  Panel3FadeDownRed();
  Panel4FadeDownRed();
  Panel5FadeDownRed();
  Panel6FadeDownRed();
}

//Fade Down All Panels from Green
void AllFadeDownGreen(){
  Panel1FadeDownGreen();
  Panel2FadeDownGreen();
  Panel3FadeDownGreen();
  Panel4FadeDownGreen();
  Panel5FadeDownGreen();
  Panel6FadeDownGreen();
}

//Fade Down All Panels from Blue
void AllFadeDownBlue(){
  Panel1FadeDownBlue();
  Panel2FadeDownBlue();
  Panel3FadeDownBlue();
  Panel4FadeDownBlue();
  Panel5FadeDownBlue();
  Panel6FadeDownBlue();
}

//Fade Down All Panels from Aqua
void AllFadeDownAqua(){
  Panel1FadeDownAqua();
  Panel2FadeDownAqua();
  Panel3FadeDownAqua();
  Panel4FadeDownAqua();
  Panel5FadeDownAqua();
  Panel6FadeDownAqua();
}

//Fade Down All Panels from Purple
void AllFadeDownPurple(){
  Panel1FadeDownPurple();
  Panel2FadeDownPurple();
  Panel3FadeDownPurple();
  Panel4FadeDownPurple();
  Panel5FadeDownPurple();
  Panel6FadeDownPurple();
}

//Fade Down All Panels from Yellow
void AllFadeDownYellow(){
  Panel1FadeDownYellow();
  Panel2FadeDownYellow();
  Panel3FadeDownYellow();
  Panel4FadeDownYellow();
  Panel5FadeDownYellow();
  Panel6FadeDownYellow();
}


//Primary loop or routines that will run continuosuly while there is power to the Arduino MicroController
void loop() {
  LightRoutine1();
  LightRoutine2();
  LightRoutine3();
  LightRoutine4();
  LightRoutine5();
  AllRed();
  AllGreen();
  AllBlue();
  AllAqua();
  AllPurple();
  AllYellow();
  AllOff();
  AllFadeUpRed();
  AllFadeDownRed();
  AllFadeUpGreen();
  AllFadeDownGreen();
  AllFadeUpBlue();
  AllFadeDownBlue();
  AllFadeUpAqua();
  AllFadeDownAqua();
  AllFadeUpPurple();
  AllFadeDownPurple();
  AllFadeUpYellow();
  AllFadeDownYellow();
}
