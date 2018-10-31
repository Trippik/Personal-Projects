//Panel 1 Pins
int RedPinBank1Panel1 = 2;
int GreenPinBank1Panel1 = 3;
int BluePinBank1Panel1 = 4;
int RedPinBank2Panel1 = 5;
int GreenPinBank2Panel1 = 6;
int BluePinBank2Panel1 = 7;
int RedPinBank3Panel1 = 8;
int GreenPinBank3Panel1 = 9;
int BluePinBank3Panel1 = 10;
int RedPinBank4Panel1 = 11;
int GreenPinBank4Panel1 = 12;
int BluePinBank4Panel1 = 13;

//Panel 2 Pins
int RedPinBank1Panel2 = 18;
int GreenPinBank1Panel2 = 19;
int BluePinBank1Panel2 = 20;
int RedPinBank2Panel2 = 21;
int GreenPinBank2Panel2 = 22;
int BluePinBank2Panel2 = 24;
int RedPinBank3Panel2 = 26;
int GreenPinBank3Panel2 = 28;
int BluePinBank3Panel2 = 30;
int RedPinBank4Panel2 = 32;
int GreenPinBank4Panel2 = 34;
int BluePinBank4Panel2 = 36;

//Panel 3 Pins
int RedPinBank1Panel3 = 38;
int GreenPinBank1Panel3 = 40;
int BluePinBank1Panel3 = 42;
int RedPinBank2Panel3 = 44;
int GreenPinBank2Panel3 = 46;
int BluePinBank2Panel3 = 48;
int RedPinBank3Panel3 = 50;
int GreenPinBank3Panel3 = 52;
int BluePinBank3Panel3 = 23;
int RedPinBank4Panel3 = 25;
int GreenPinBank4Panel3 = 27;
int BluePinBank4Panel3 = 29;

//Panel 4 Pins
int RedPinBank1Panel4 = 31;
int GreenPinBank1Panel4 = 33;
int BluePinBank1Panel4 = 35;
int RedPinBank2Panel4 = 37;
int GreenPinBank2Panel4 = 39;
int BluePinBank2Panel4 = 41;
int RedPinBank3Panel4 = 43;
int GreenPinBank3Panel4 = 45;
int BluePinBank3Panel4 = 47;
int RedPinBank4Panel4 = 49;
int GreenPinBank4Panel4 = 51;
int BluePinBank4Panel4 = 53;

//Input Switch Pins
int Switch1 = 1;
int Switch2 = 0;
int Switch3 = 14;
int Switch4 = 15;
int Switch5 = 16;
int Switch6 = 17;

//Fixed system integers
int ShortDelay = 5;
int MidDelay = 200;
int LongDelay = 1000;
int Mode = 0;

void setup() {
  // put your setup code here, to run once:

  //Initiating Panel 1 Pins
  pinMode(RedPinBank1Panel1, OUTPUT);
  pinMode(GreenPinBank1Panel1, OUTPUT);
  pinMode(BluePinBank1Panel1, OUTPUT);
  pinMode(RedPinBank2Panel1, OUTPUT);
  pinMode(GreenPinBank2Panel1, OUTPUT);
  pinMode(BluePinBank2Panel1, OUTPUT);
  pinMode(RedPinBank3Panel1, OUTPUT);
  pinMode(GreenPinBank3Panel1, OUTPUT);
  pinMode(BluePinBank3Panel1, OUTPUT);
  pinMode(RedPinBank4Panel1,OUTPUT);
  pinMode(GreenPinBank4Panel1, OUTPUT);
  pinMode(BluePinBank4Panel1, OUTPUT);

  //Initiating Panel 2 Pins
  pinMode(RedPinBank1Panel2, OUTPUT);
  pinMode(GreenPinBank1Panel2, OUTPUT);
  pinMode(BluePinBank1Panel2, OUTPUT);
  pinMode(RedPinBank2Panel2, OUTPUT);
  pinMode(GreenPinBank2Panel2, OUTPUT);
  pinMode(BluePinBank2Panel2, OUTPUT);
  pinMode(RedPinBank3Panel2, OUTPUT);
  pinMode(GreenPinBank3Panel2, OUTPUT);
  pinMode(BluePinBank3Panel2, OUTPUT);
  pinMode(RedPinBank4Panel2,OUTPUT);
  pinMode(GreenPinBank4Panel2, OUTPUT);
  pinMode(BluePinBank4Panel2, OUTPUT);

  //Initiating Panel 3 Pins
  pinMode(RedPinBank1Panel3, OUTPUT);
  pinMode(GreenPinBank1Panel3, OUTPUT);
  pinMode(BluePinBank1Panel3, OUTPUT);
  pinMode(RedPinBank2Panel3, OUTPUT);
  pinMode(GreenPinBank2Panel3, OUTPUT);
  pinMode(BluePinBank2Panel3, OUTPUT);
  pinMode(RedPinBank3Panel3, OUTPUT);
  pinMode(GreenPinBank3Panel3, OUTPUT);
  pinMode(BluePinBank3Panel3, OUTPUT);
  pinMode(RedPinBank4Panel3,OUTPUT);
  pinMode(GreenPinBank4Panel3, OUTPUT);
  pinMode(BluePinBank4Panel3, OUTPUT);

  //Initiating Panel 4 Pins
  pinMode(RedPinBank1Panel4, OUTPUT);
  pinMode(GreenPinBank1Panel4, OUTPUT);
  pinMode(BluePinBank1Panel4, OUTPUT);
  pinMode(RedPinBank2Panel4, OUTPUT);
  pinMode(GreenPinBank2Panel4, OUTPUT);
  pinMode(BluePinBank2Panel4, OUTPUT);
  pinMode(RedPinBank3Panel4, OUTPUT);
  pinMode(GreenPinBank3Panel4, OUTPUT);
  pinMode(BluePinBank3Panel4, OUTPUT);
  pinMode(RedPinBank4Panel4,OUTPUT);
  pinMode(GreenPinBank4Panel4, OUTPUT);
  pinMode(BluePinBank4Panel4, OUTPUT);

  //Initiating Input Pins
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  pinMode(Switch4, INPUT);
}

//Primary Input Switch Routine
void ReadSwitches(){
  int Switch1State;
  int Switch2State;
  int Switch3State;
  int Switch4State;
  int Switch5State;
  int Switch6State;
  int SwitchTotalState;
  Switch1State = digitalRead(Switch1);
  Switch2State = digitalRead(Switch2);
  Switch3State = digitalRead(Switch3);
  Switch4State = digitalRead(Switch4);
  Switch5State = digitalRead(Switch5);
  Switch6State = digitalRead(Switch6);
  SwitchTotalState = Switch1State + Switch2State + Switch3State + Switch4State + Switch5State + Switch6State;

  if(Switch1State == HIGH){
    Mode = 1;
  };
  if(Switch2State == HIGH){
    Mode = 2;
  };
  if(Switch3State == HIGH){
    Mode = 3;
  };
  if(Switch4State == HIGH){
    Mode = 4;
  };
  if(Switch5State == HIGH){
    Mode = 5;
  };
  if(Switch6State == HIGH){
    Mode = 6;
  };
  if((Switch1State == LOW)&&(Switch2State == LOW)&&(Switch3State == LOW) && (Switch4State == LOW) && (Switch5State == LOW) && (Switch6State == LOW)){
    Mode = 0;
  };
  if(SwitchTotalState > 1){
    Mode = 0;
  };
  
}

//
//BANK1 PER PANEL COLOUR SETUP ROUTINES
//
//Bank1 Panel1 Colour Setup Routine
void SetColourBank1Panel1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1Panel1, redValue);
  analogWrite(GreenPinBank1Panel1, greenValue);
  analogWrite(BluePinBank1Panel1, blueValue);
}
//Bank1 Panel2 Colour Setup Routine
void SetColourBank1Panel2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1Panel2, redValue);
  analogWrite(GreenPinBank1Panel2, greenValue);
  analogWrite(BluePinBank1Panel2, blueValue);
}
//Bank1 Panel3 Colour Setup Routine
void SetColourBank1Panel3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1Panel3, redValue);
  analogWrite(GreenPinBank1Panel3, greenValue);
  analogWrite(BluePinBank1Panel3, blueValue);
}
// Bank1 Panel4 Colour Setup Routine
void SetColourBank1Panel4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1Panel4, redValue);
  analogWrite(GreenPinBank1Panel4, greenValue);
  analogWrite(BluePinBank1Panel4, blueValue);
}

//
//BANK2 PER PANEL COLOUR SETUP ROUTINES
//
//Bank2 Panel1 Colour Setup Routine
void SetColourBank2Panel1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2Panel1, redValue);
  analogWrite(GreenPinBank2Panel1, greenValue);
  analogWrite(BluePinBank2Panel1, blueValue);
}
//Bank2 Panel2 Colour Setup Routine
void SetColourBank2Panel2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2Panel2, redValue);
  analogWrite(GreenPinBank2Panel2, greenValue);
  analogWrite(BluePinBank2Panel2, blueValue);
}
//Bank2 Panel3 Colour Setup Routine
void SetColourBank2Panel3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2Panel3, redValue);
  analogWrite(GreenPinBank2Panel3, greenValue);
  analogWrite(BluePinBank2Panel3, blueValue);
}
//Bank2 Panel4 Colour Setup Routine
void SetColourBank2Panel4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2Panel4, redValue);
  analogWrite(GreenPinBank2Panel4, greenValue);
  analogWrite(BluePinBank2Panel4, blueValue);
}

//
//BANK3 PER PANEL COLOUR SETUP ROUTINES
//
//Bank3 Panel1 Colour Setup Routine
void SetColourBank3Panel1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3Panel1, redValue);
  analogWrite(GreenPinBank3Panel1, greenValue);
  analogWrite(BluePinBank3Panel1, blueValue);
}
//Bank3 Panel2 Colour Setup Routine
void SetColourBank3Panel2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3Panel2, redValue);
  analogWrite(GreenPinBank3Panel2, greenValue);
  analogWrite(BluePinBank3Panel2, blueValue);
}
//Bank3 Panel3 Colour Setup Routine
void SetColourBank3Panel3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3Panel3, redValue);
  analogWrite(GreenPinBank3Panel3, greenValue);
  analogWrite(BluePinBank3Panel3, blueValue);
}
//Bank3 Panel4 Colour Setup Routine
void SetColourBank3Panel4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3Panel4, redValue);
  analogWrite(GreenPinBank3Panel4, greenValue);
  analogWrite(BluePinBank3Panel4, blueValue);
}

//
//BANK4 PER PANEL COLOUR SETUP ROUTINES
//
//Bank4 Panel1 Colour Setup Routine
void SetColourBank4Panel1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4Panel1, redValue);
  analogWrite(GreenPinBank4Panel1, greenValue);
  analogWrite(BluePinBank4Panel1, blueValue);
}
//Bank4 Panel2 Colour Setup Routine
void SetColourBank4Panel2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4Panel2, redValue);
  analogWrite(GreenPinBank4Panel2, greenValue);
  analogWrite(BluePinBank4Panel2, blueValue);
}
//Bank4 Panel3 Colour Setup Routine
void SetColourBank4Panel3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4Panel3, redValue);
  analogWrite(GreenPinBank4Panel3, greenValue);
  analogWrite(BluePinBank4Panel3, blueValue);
}
//Bank4 Panel4 Colour Setup Routine
void SetColourBank4Panel4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4Panel4, redValue);
  analogWrite(GreenPinBank4Panel4, greenValue);
  analogWrite(BluePinBank4Panel4, blueValue);
}

//
//ALL PANELS IN BANK COLOUR SETUP ROUTINE
//
//Simultaneously Control colour in all panels in bank 1
void SetColourBank1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1Panel1, redValue);
  analogWrite(RedPinBank1Panel2, redValue);
  analogWrite(RedPinBank1Panel3, redValue);
  analogWrite(RedPinBank1Panel4, redValue);
  analogWrite(GreenPinBank1Panel1, greenValue);
  analogWrite(GreenPinBank1Panel2, greenValue);
  analogWrite(GreenPinBank1Panel3, greenValue);
  analogWrite(GreenPinBank1Panel4, greenValue);
  analogWrite(BluePinBank1Panel1, blueValue);
  analogWrite(BluePinBank1Panel2, blueValue);
  analogWrite(BluePinBank1Panel3, blueValue);
  analogWrite(BluePinBank1Panel4, blueValue);
}
//Simultaneously Control colour in all panels in bank 2
void SetColourBank2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2Panel1, redValue);
  analogWrite(RedPinBank2Panel2, redValue);
  analogWrite(RedPinBank2Panel3, redValue);
  analogWrite(RedPinBank2Panel4, redValue);
  analogWrite(GreenPinBank2Panel2, greenValue);
  analogWrite(GreenPinBank2Panel2, greenValue);
  analogWrite(GreenPinBank2Panel3, greenValue);
  analogWrite(GreenPinBank2Panel4, greenValue);
  analogWrite(BluePinBank2Panel2, blueValue);
  analogWrite(BluePinBank2Panel2, blueValue);
  analogWrite(BluePinBank2Panel3, blueValue);
  analogWrite(BluePinBank2Panel4, blueValue);
}
//Simultaneously Control colour in all panels in bank 3
void SetColourBank3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3Panel1, redValue);
  analogWrite(RedPinBank3Panel2, redValue);
  analogWrite(RedPinBank3Panel3, redValue);
  analogWrite(RedPinBank3Panel4, redValue);
  analogWrite(GreenPinBank3Panel2, greenValue);
  analogWrite(GreenPinBank3Panel2, greenValue);
  analogWrite(GreenPinBank3Panel3, greenValue);
  analogWrite(GreenPinBank3Panel4, greenValue);
  analogWrite(BluePinBank3Panel2, blueValue);
  analogWrite(BluePinBank3Panel2, blueValue);
  analogWrite(BluePinBank3Panel3, blueValue);
  analogWrite(BluePinBank3Panel4, blueValue);
}
//Simultaneously Control colour in all panels in bank 4
void SetColourBank4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4Panel1, redValue);
  analogWrite(RedPinBank4Panel2, redValue);
  analogWrite(RedPinBank4Panel3, redValue);
  analogWrite(RedPinBank4Panel4, redValue);
  analogWrite(GreenPinBank4Panel2, greenValue);
  analogWrite(GreenPinBank4Panel2, greenValue);
  analogWrite(GreenPinBank4Panel3, greenValue);
  analogWrite(GreenPinBank4Panel4, greenValue);
  analogWrite(BluePinBank4Panel2, blueValue);
  analogWrite(BluePinBank4Panel2, blueValue);
  analogWrite(BluePinBank4Panel3, blueValue);
  analogWrite(BluePinBank4Panel4, blueValue);
}


//
///
/////
//////////BASE ROUTINES
////
///
//


//
////PANEL1 BASE ROUTINES
//
void SoftFadeDownRedBank1Panel1(){
  SetColourBank1Panel1(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpRedBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(255, 0, 0);
}

void SoftFadeDownGreenBank1Panel1(){
  SetColourBank1Panel1(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpGreenBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 255, 0);
}

void SoftFadeDownBlueBank1Panel1(){
  SetColourBank1Panel1(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpBlueBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 255);
}

void SoftFadeDownPurpleBank1Panel1(){
  SetColourBank1Panel1(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpPurpleBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(255, 0, 255);
}

void SoftFadeDownAquaBank1Panel1(){
  SetColourBank1Panel1(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpAquaBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 255, 255);
}

void SoftFadeDownYellowBank1Panel1(){
  SetColourBank1Panel1(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(0, 0, 0);
}

void SoftFadeUpYellowBank1Panel1(){
  SetColourBank1Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel1(255, 255, 0);
}



//Bank2BaseRoutines
void SoftFadeDownRedBank2Panel1(){
  SetColourBank2Panel1(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpRedBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(255, 0, 0);
}

void SoftFadeDownGreenBank2Panel1(){
  SetColourBank2Panel1(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpGreenBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 255, 0);
}

void SoftFadeDownBlueBank2Panel1(){
  SetColourBank2Panel1(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpBlueBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 255);
}

void SoftFadeDownPurpleBank2Panel1(){
  SetColourBank2Panel1(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpPurpleBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(255, 0, 255);
}

void SoftFadeDownAquaBank2Panel1(){
  SetColourBank2Panel1(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpAquaBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 255, 255);
}

void SoftFadeDownYellowBank2Panel1(){
  SetColourBank2Panel1(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(0, 0, 0);
}

void SoftFadeUpYellowBank2Panel1(){
  SetColourBank2Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel1(255, 255, 0);
}

//Bank3BaseRoutines
void SoftFadeDownRedBank3Panel1(){
  SetColourBank3Panel1(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpRedBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(255, 0, 0);
}

void SoftFadeDownGreenBank3Panel1(){
  SetColourBank3Panel1(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpGreenBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 255, 0);
}

void SoftFadeDownBlueBank3Panel1(){
  SetColourBank3Panel1(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpBlueBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 255);
}

void SoftFadeDownPurpleBank3Panel1(){
  SetColourBank3Panel1(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpPurpleBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(255, 0, 255);
}

void SoftFadeDownAquaBank3Panel1(){
  SetColourBank3Panel1(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpAquaBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 255, 255);
}

void SoftFadeDownYellowBank3Panel1(){
  SetColourBank3Panel1(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(0, 0, 0);
}

void SoftFadeUpYellowBank3Panel1(){
  SetColourBank3Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel1(255, 255, 0);
}




//Bank4BaseRoutines
void SoftFadeDownRedBank4Panel1(){
  SetColourBank4Panel1(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpRedBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(255, 0, 0);
}

void SoftFadeDownGreenBank4Panel1(){
  SetColourBank4Panel1(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpGreenBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 255, 0);
}

void SoftFadeDownBlueBank4Panel1(){
  SetColourBank4Panel1(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpBlueBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 255);
}

void SoftFadeDownPurpleBank4Panel1(){
  SetColourBank4Panel1(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpPurpleBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(255, 0, 255);
}

void SoftFadeDownAquaBank4Panel1(){
  SetColourBank4Panel1(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpAquaBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 255, 255);
}

void SoftFadeDownYellowBank4Panel1(){
  SetColourBank4Panel1(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(0, 0, 0);
}

void SoftFadeUpYellowBank4Panel1(){
  SetColourBank4Panel1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel1(255, 255, 0);
}

//
////Panel2 BASE ROUTINES
//
void SoftFadeDownRedBank1Panel2(){
  SetColourBank1Panel2(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpRedBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(255, 0, 0);
}

void SoftFadeDownGreenBank1Panel2(){
  SetColourBank1Panel2(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpGreenBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 255, 0);
}

void SoftFadeDownBlueBank1Panel2(){
  SetColourBank1Panel2(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpBlueBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 255);
}

void SoftFadeDownPurpleBank1Panel2(){
  SetColourBank1Panel2(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpPurpleBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(255, 0, 255);
}

void SoftFadeDownAquaBank1Panel2(){
  SetColourBank1Panel2(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpAquaBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 255, 255);
}

void SoftFadeDownYellowBank1Panel2(){
  SetColourBank1Panel2(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(0, 0, 0);
}

void SoftFadeUpYellowBank1Panel2(){
  SetColourBank1Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel2(255, 255, 0);
}



//Bank2BaseRoutines
void SoftFadeDownRedBank2Panel2(){
  SetColourBank2Panel2(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpRedBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(255, 0, 0);
}

void SoftFadeDownGreenBank2Panel2(){
  SetColourBank2Panel2(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpGreenBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 255, 0);
}

void SoftFadeDownBlueBank2Panel2(){
  SetColourBank2Panel2(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpBlueBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 255);
}

void SoftFadeDownPurpleBank2Panel2(){
  SetColourBank2Panel2(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpPurpleBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(255, 0, 255);
}

void SoftFadeDownAquaBank2Panel2(){
  SetColourBank2Panel2(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpAquaBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 255, 255);
}

void SoftFadeDownYellowBank2Panel2(){
  SetColourBank2Panel2(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(0, 0, 0);
}

void SoftFadeUpYellowBank2Panel2(){
  SetColourBank2Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel2(255, 255, 0);
}

//Bank3BaseRoutines
void SoftFadeDownRedBank3Panel2(){
  SetColourBank3Panel2(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpRedBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(255, 0, 0);
}

void SoftFadeDownGreenBank3Panel2(){
  SetColourBank3Panel2(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpGreenBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 255, 0);
}

void SoftFadeDownBlueBank3Panel2(){
  SetColourBank3Panel2(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpBlueBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 255);
}

void SoftFadeDownPurpleBank3Panel2(){
  SetColourBank3Panel2(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpPurpleBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(255, 0, 255);
}

void SoftFadeDownAquaBank3Panel2(){
  SetColourBank3Panel2(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpAquaBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 255, 255);
}

void SoftFadeDownYellowBank3Panel2(){
  SetColourBank3Panel2(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(0, 0, 0);
}

void SoftFadeUpYellowBank3Panel2(){
  SetColourBank3Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel2(255, 255, 0);
}




//Bank4BaseRoutines
void SoftFadeDownRedBank4Panel2(){
  SetColourBank4Panel2(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpRedBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(255, 0, 0);
}

void SoftFadeDownGreenBank4Panel2(){
  SetColourBank4Panel2(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpGreenBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 255, 0);
}

void SoftFadeDownBlueBank4Panel2(){
  SetColourBank4Panel2(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpBlueBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 255);
}

void SoftFadeDownPurpleBank4Panel2(){
  SetColourBank4Panel2(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpPurpleBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(255, 0, 255);
}

void SoftFadeDownAquaBank4Panel2(){
  SetColourBank4Panel2(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpAquaBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 255, 255);
}

void SoftFadeDownYellowBank4Panel2(){
  SetColourBank4Panel2(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(0, 0, 0);
}

void SoftFadeUpYellowBank4Panel2(){
  SetColourBank4Panel2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel2(255, 255, 0);
}

//
////Panel3 BASE ROUTINES
//
void SoftFadeDownRedBank1Panel3(){
  SetColourBank1Panel3(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpRedBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(255, 0, 0);
}

void SoftFadeDownGreenBank1Panel3(){
  SetColourBank1Panel3(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpGreenBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 255, 0);
}

void SoftFadeDownBlueBank1Panel3(){
  SetColourBank1Panel3(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpBlueBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 255);
}

void SoftFadeDownPurpleBank1Panel3(){
  SetColourBank1Panel3(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpPurpleBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(255, 0, 255);
}

void SoftFadeDownAquaBank1Panel3(){
  SetColourBank1Panel3(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpAquaBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 255, 255);
}

void SoftFadeDownYellowBank1Panel3(){
  SetColourBank1Panel3(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(0, 0, 0);
}

void SoftFadeUpYellowBank1Panel3(){
  SetColourBank1Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel3(255, 255, 0);
}



//Bank2BaseRoutines
void SoftFadeDownRedBank2Panel3(){
  SetColourBank2Panel3(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpRedBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(255, 0, 0);
}

void SoftFadeDownGreenBank2Panel3(){
  SetColourBank2Panel3(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpGreenBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 255, 0);
}

void SoftFadeDownBlueBank2Panel3(){
  SetColourBank2Panel3(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpBlueBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 255);
}

void SoftFadeDownPurpleBank2Panel3(){
  SetColourBank2Panel3(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpPurpleBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(255, 0, 255);
}

void SoftFadeDownAquaBank2Panel3(){
  SetColourBank2Panel3(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpAquaBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 255, 255);
}

void SoftFadeDownYellowBank2Panel3(){
  SetColourBank2Panel3(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(0, 0, 0);
}

void SoftFadeUpYellowBank2Panel3(){
  SetColourBank2Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel3(255, 255, 0);
}

//Bank3BaseRoutines
void SoftFadeDownRedBank3Panel3(){
  SetColourBank3Panel3(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpRedBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(255, 0, 0);
}

void SoftFadeDownGreenBank3Panel3(){
  SetColourBank3Panel3(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpGreenBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 255, 0);
}

void SoftFadeDownBlueBank3Panel3(){
  SetColourBank3Panel3(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpBlueBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 255);
}

void SoftFadeDownPurpleBank3Panel3(){
  SetColourBank3Panel3(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpPurpleBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(255, 0, 255);
}

void SoftFadeDownAquaBank3Panel3(){
  SetColourBank3Panel3(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpAquaBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 255, 255);
}

void SoftFadeDownYellowBank3Panel3(){
  SetColourBank3Panel3(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(0, 0, 0);
}

void SoftFadeUpYellowBank3Panel3(){
  SetColourBank3Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel3(255, 255, 0);
}




//Bank4BaseRoutines
void SoftFadeDownRedBank4Panel3(){
  SetColourBank4Panel3(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpRedBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(255, 0, 0);
}

void SoftFadeDownGreenBank4Panel3(){
  SetColourBank4Panel3(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpGreenBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 255, 0);
}

void SoftFadeDownBlueBank4Panel3(){
  SetColourBank4Panel3(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpBlueBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 255);
}

void SoftFadeDownPurpleBank4Panel3(){
  SetColourBank4Panel3(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpPurpleBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(255, 0, 255);
}

void SoftFadeDownAquaBank4Panel3(){
  SetColourBank4Panel3(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpAquaBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 255, 255);
}

void SoftFadeDownYellowBank4Panel3(){
  SetColourBank4Panel3(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(0, 0, 0);
}

void SoftFadeUpYellowBank4Panel3(){
  SetColourBank4Panel3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel3(255, 255, 0);
}

//
////Panel4 BASE ROUTINES
//
void SoftFadeDownRedBank1Panel4(){
  SetColourBank1Panel4(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpRedBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(255, 0, 0);
}

void SoftFadeDownGreenBank1Panel4(){
  SetColourBank1Panel4(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpGreenBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 255, 0);
}

void SoftFadeDownBlueBank1Panel4(){
  SetColourBank1Panel4(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpBlueBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 255);
}

void SoftFadeDownPurpleBank1Panel4(){
  SetColourBank1Panel4(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank1Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpPurpleBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(255, 0, 255);
}

void SoftFadeDownAquaBank1Panel4(){
  SetColourBank1Panel4(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpAquaBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 255, 255);
}

void SoftFadeDownYellowBank1Panel4(){
  SetColourBank1Panel4(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(0, 0, 0);
}

void SoftFadeUpYellowBank1Panel4(){
  SetColourBank1Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1Panel4(255, 255, 0);
}



//Bank2BaseRoutines
void SoftFadeDownRedBank2Panel4(){
  SetColourBank2Panel4(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpRedBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(255, 0, 0);
}

void SoftFadeDownGreenBank2Panel4(){
  SetColourBank2Panel4(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpGreenBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 255, 0);
}

void SoftFadeDownBlueBank2Panel4(){
  SetColourBank2Panel4(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpBlueBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 255);
}

void SoftFadeDownPurpleBank2Panel4(){
  SetColourBank2Panel4(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank2Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpPurpleBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(255, 0, 255);
}

void SoftFadeDownAquaBank2Panel4(){
  SetColourBank2Panel4(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpAquaBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 255, 255);
}

void SoftFadeDownYellowBank2Panel4(){
  SetColourBank2Panel4(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(0, 0, 0);
}

void SoftFadeUpYellowBank2Panel4(){
  SetColourBank2Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2Panel4(255, 255, 0);
}

//Bank3BaseRoutines
void SoftFadeDownRedBank3Panel4(){
  SetColourBank3Panel4(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpRedBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(255, 0, 0);
}

void SoftFadeDownGreenBank3Panel4(){
  SetColourBank3Panel4(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpGreenBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 255, 0);
}

void SoftFadeDownBlueBank3Panel4(){
  SetColourBank3Panel4(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpBlueBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 255);
}

void SoftFadeDownPurpleBank3Panel4(){
  SetColourBank3Panel4(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank3Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpPurpleBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(255, 0, 255);
}

void SoftFadeDownAquaBank3Panel4(){
  SetColourBank3Panel4(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpAquaBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 255, 255);
}

void SoftFadeDownYellowBank3Panel4(){
  SetColourBank3Panel4(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(0, 0, 0);
}

void SoftFadeUpYellowBank3Panel4(){
  SetColourBank3Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3Panel4(255, 255, 0);
}




//Bank4BaseRoutines
void SoftFadeDownRedBank4Panel4(){
  SetColourBank4Panel4(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpRedBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(255, 0, 0);
}

void SoftFadeDownGreenBank4Panel4(){
  SetColourBank4Panel4(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpGreenBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 255, 0);
}

void SoftFadeDownBlueBank4Panel4(){
  SetColourBank4Panel4(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpBlueBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 255);
}

void SoftFadeDownPurpleBank4Panel4(){
  SetColourBank4Panel4(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank4Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpPurpleBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(255, 0, 255);
}

void SoftFadeDownAquaBank4Panel4(){
  SetColourBank4Panel4(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpAquaBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 255, 255);
}

void SoftFadeDownYellowBank4Panel4(){
  SetColourBank4Panel4(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(0, 0, 0);
}

void SoftFadeUpYellowBank4Panel4(){
  SetColourBank4Panel4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4Panel4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4Panel4(255, 255, 0);
}

//
////PANEL FADE ROUTINES WITHIN BANK
//
//BANK1
//Soft fade up all the panels to red in bank 1 in series starting with Panel 1 and ending with Panel 4 
void SoftFadeUpRedBank1Series(){
  SoftFadeUpRedBank1Panel1();
  SoftFadeUpRedBank1Panel2();
  SoftFadeUpRedBank1Panel3();
  SoftFadeUpRedBank1Panel4();
}
//Soft fade down all the panels from red in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownRedBank1Series(){
  SoftFadeDownRedBank1Panel4();
  SoftFadeDownRedBank1Panel3();
  SoftFadeDownRedBank1Panel2();
  SoftFadeDownRedBank1Panel1();
}
//Soft fade up all the panels to green in bank 1 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpGreenBank1Series(){
  SoftFadeUpGreenBank1Panel1();
  SoftFadeUpGreenBank1Panel2();
  SoftFadeUpGreenBank1Panel3();
  SoftFadeUpGreenBank1Panel4();
}
//Soft fade down all the panels from Green in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownGreenBank1Series(){
  SoftFadeDownGreenBank1Panel4();
  SoftFadeDownGreenBank1Panel3();
  SoftFadeDownGreenBank1Panel2();
  SoftFadeDownGreenBank1Panel1();
}
//Soft fade up all the panels to Blue in bank 1 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpBlueBank1Series(){
  SoftFadeUpBlueBank1Panel1();
  SoftFadeUpBlueBank1Panel2();
  SoftFadeUpBlueBank1Panel3();
  SoftFadeUpBlueBank1Panel4();
}
//Soft fade down all the panels from Blue in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownBlueBank1Series(){
  SoftFadeDownBlueBank1Panel4();
  SoftFadeDownBlueBank1Panel3();
  SoftFadeDownBlueBank1Panel2();
  SoftFadeDownBlueBank1Panel1();
}
//Soft fade up all the panels to Purple in bank 1 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpPurpleBank1Series(){
  SoftFadeUpPurpleBank1Panel1();
  SoftFadeUpPurpleBank1Panel2();
  SoftFadeUpPurpleBank1Panel3();
  SoftFadeUpPurpleBank1Panel4();
}
//Soft fade down all the panels from Purple in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownPurpleBank1Series(){
  SoftFadeDownPurpleBank1Panel4();
  SoftFadeDownPurpleBank1Panel3();
  SoftFadeDownPurpleBank1Panel2();
  SoftFadeDownPurpleBank1Panel1();
}
//Soft fade up all the panels to Aqua in bank 1 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpAquaBank1Series(){
  SoftFadeUpAquaBank1Panel1();
  SoftFadeUpAquaBank1Panel2();
  SoftFadeUpAquaBank1Panel3();
  SoftFadeUpAquaBank1Panel4();
}
//Soft fade down all the panels from Aqua in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownAquaBank1Series(){
  SoftFadeDownAquaBank1Panel4();
  SoftFadeDownAquaBank1Panel3();
  SoftFadeDownAquaBank1Panel2();
  SoftFadeDownAquaBank1Panel1();
}
//Soft fade up all the panels to Yellow in bank 1 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpYellowBank1Series(){
  SoftFadeUpYellowBank1Panel1();
  SoftFadeUpYellowBank1Panel2();
  SoftFadeUpYellowBank1Panel3();
  SoftFadeUpYellowBank1Panel4();
}
//Soft fade down all the panels from Yellow in bank 1 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownYellowBank1Series(){
  SoftFadeDownYellowBank1Panel4();
  SoftFadeDownYellowBank1Panel3();
  SoftFadeDownYellowBank1Panel2();
  SoftFadeDownYellowBank1Panel1();
}

//BANK2
//Soft fade up all the panels to red in bank 2 in series starting with Panel 1 and ending with Panel 4 
void SoftFadeUpRedBank2Series(){
  SoftFadeUpRedBank2Panel1();
  SoftFadeUpRedBank2Panel2();
  SoftFadeUpRedBank2Panel3();
  SoftFadeUpRedBank2Panel4();
}
//Soft fade down all the panels from red in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownRedBank2Series(){
  SoftFadeDownRedBank2Panel4();
  SoftFadeDownRedBank2Panel3();
  SoftFadeDownRedBank2Panel2();
  SoftFadeDownRedBank2Panel1();
}
//Soft fade up all the panels to green in bank 2 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpGreenBank2Series(){
  SoftFadeUpGreenBank2Panel1();
  SoftFadeUpGreenBank2Panel2();
  SoftFadeUpGreenBank2Panel3();
  SoftFadeUpGreenBank2Panel4();
}
//Soft fade down all the panels from Green in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownGreenBank2Series(){
  SoftFadeDownGreenBank2Panel4();
  SoftFadeDownGreenBank2Panel3();
  SoftFadeDownGreenBank2Panel2();
  SoftFadeDownGreenBank2Panel1();
}
//Soft fade up all the panels to Blue in bank 2 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpBlueBank2Series(){
  SoftFadeUpBlueBank2Panel1();
  SoftFadeUpBlueBank2Panel2();
  SoftFadeUpBlueBank2Panel3();
  SoftFadeUpBlueBank2Panel4();
}
//Soft fade down all the panels from Blue in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownBlueBank2Series(){
  SoftFadeDownBlueBank2Panel4();
  SoftFadeDownBlueBank2Panel3();
  SoftFadeDownBlueBank2Panel2();
  SoftFadeDownBlueBank2Panel1();
}
//Soft fade up all the panels to Purple in bank 2 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpPurpleBank2Series(){
  SoftFadeUpPurpleBank2Panel1();
  SoftFadeUpPurpleBank2Panel2();
  SoftFadeUpPurpleBank2Panel3();
  SoftFadeUpPurpleBank2Panel4();
}
//Soft fade down all the panels from Purple in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownPurpleBank2Series(){
  SoftFadeDownPurpleBank2Panel4();
  SoftFadeDownPurpleBank2Panel3();
  SoftFadeDownPurpleBank2Panel2();
  SoftFadeDownPurpleBank2Panel1();
}
//Soft fade up all the panels to Aqua in bank 2 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpAquaBank2Series(){
  SoftFadeUpAquaBank2Panel1();
  SoftFadeUpAquaBank2Panel2();
  SoftFadeUpAquaBank2Panel3();
  SoftFadeUpAquaBank2Panel4();
}
//Soft fade down all the panels from Aqua in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownAquaBank2Series(){
  SoftFadeDownAquaBank2Panel4();
  SoftFadeDownAquaBank2Panel3();
  SoftFadeDownAquaBank2Panel2();
  SoftFadeDownAquaBank2Panel1();
}
//Soft fade up all the panels to Yellow in bank 2 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpYellowBank2Series(){
  SoftFadeUpYellowBank2Panel1();
  SoftFadeUpYellowBank2Panel2();
  SoftFadeUpYellowBank2Panel3();
  SoftFadeUpYellowBank2Panel4();
}
//Soft fade down all the panels from Yellow in bank 2 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownYellowBank2Series(){
  SoftFadeDownYellowBank2Panel4();
  SoftFadeDownYellowBank2Panel3();
  SoftFadeDownYellowBank2Panel2();
  SoftFadeDownYellowBank2Panel1();
}

//BANK3
//Soft fade up all the panels to red in bank 3 in series starting with Panel 1 and ending with Panel 4 
void SoftFadeUpRedBank3Series(){
  SoftFadeUpRedBank3Panel1();
  SoftFadeUpRedBank3Panel2();
  SoftFadeUpRedBank3Panel3();
  SoftFadeUpRedBank3Panel4();
}
//Soft fade down all the panels from red in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownRedBank3Series(){
  SoftFadeDownRedBank3Panel4();
  SoftFadeDownRedBank3Panel3();
  SoftFadeDownRedBank3Panel2();
  SoftFadeDownRedBank3Panel1();
}
//Soft fade up all the panels to green in bank 3 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpGreenBank3Series(){
  SoftFadeUpGreenBank3Panel1();
  SoftFadeUpGreenBank3Panel2();
  SoftFadeUpGreenBank3Panel3();
  SoftFadeUpGreenBank3Panel4();
}
//Soft fade down all the panels from Green in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownGreenBank3Series(){
  SoftFadeDownGreenBank3Panel4();
  SoftFadeDownGreenBank3Panel3();
  SoftFadeDownGreenBank3Panel2();
  SoftFadeDownGreenBank3Panel1();
}
//Soft fade up all the panels to Blue in bank 3 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpBlueBank3Series(){
  SoftFadeUpBlueBank3Panel1();
  SoftFadeUpBlueBank3Panel2();
  SoftFadeUpBlueBank3Panel3();
  SoftFadeUpBlueBank3Panel4();
}
//Soft fade down all the panels from Blue in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownBlueBank3Series(){
  SoftFadeDownBlueBank3Panel4();
  SoftFadeDownBlueBank3Panel3();
  SoftFadeDownBlueBank3Panel2();
  SoftFadeDownBlueBank3Panel1();
}
//Soft fade up all the panels to Purple in bank 3 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpPurpleBank3Series(){
  SoftFadeUpPurpleBank3Panel1();
  SoftFadeUpPurpleBank3Panel2();
  SoftFadeUpPurpleBank3Panel3();
  SoftFadeUpPurpleBank3Panel4();
}
//Soft fade down all the panels from Purple in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownPurpleBank3Series(){
  SoftFadeDownPurpleBank3Panel4();
  SoftFadeDownPurpleBank3Panel3();
  SoftFadeDownPurpleBank3Panel2();
  SoftFadeDownPurpleBank3Panel1();
}
//Soft fade up all the panels to Aqua in bank 3 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpAquaBank3Series(){
  SoftFadeUpAquaBank3Panel1();
  SoftFadeUpAquaBank3Panel2();
  SoftFadeUpAquaBank3Panel3();
  SoftFadeUpAquaBank3Panel4();
}
//Soft fade down all the panels from Aqua in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownAquaBank3Series(){
  SoftFadeDownAquaBank3Panel4();
  SoftFadeDownAquaBank3Panel3();
  SoftFadeDownAquaBank3Panel2();
  SoftFadeDownAquaBank3Panel1();
}
//Soft fade up all the panels to Yellow in bank 3 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpYellowBank3Series(){
  SoftFadeUpYellowBank3Panel1();
  SoftFadeUpYellowBank3Panel2();
  SoftFadeUpYellowBank3Panel3();
  SoftFadeUpYellowBank3Panel4();
}
//Soft fade down all the panels from Yellow in bank 3 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownYellowBank3Series(){
  SoftFadeDownYellowBank3Panel4();
  SoftFadeDownYellowBank3Panel3();
  SoftFadeDownYellowBank3Panel2();
  SoftFadeDownYellowBank3Panel1();
}

//BANK4
//Soft fade up all the panels to red in bank 4 in series starting with Panel 1 and ending with Panel 4 
void SoftFadeUpRedBank4Series(){
  SoftFadeUpRedBank4Panel1();
  SoftFadeUpRedBank4Panel2();
  SoftFadeUpRedBank4Panel3();
  SoftFadeUpRedBank4Panel4();
}
//Soft fade down all the panels from red in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownRedBank4Series(){
  SoftFadeDownRedBank4Panel4();
  SoftFadeDownRedBank4Panel3();
  SoftFadeDownRedBank4Panel2();
  SoftFadeDownRedBank4Panel1();
}
//Soft fade up all the panels to green in bank 4 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpGreenBank4Series(){
  SoftFadeUpGreenBank4Panel1();
  SoftFadeUpGreenBank4Panel2();
  SoftFadeUpGreenBank4Panel3();
  SoftFadeUpGreenBank4Panel4();
}
//Soft fade down all the panels from Green in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownGreenBank4Series(){
  SoftFadeDownGreenBank4Panel4();
  SoftFadeDownGreenBank4Panel3();
  SoftFadeDownGreenBank4Panel2();
  SoftFadeDownGreenBank4Panel1();
}
//Soft fade up all the panels to Blue in bank 4 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpBlueBank4Series(){
  SoftFadeUpBlueBank4Panel1();
  SoftFadeUpBlueBank4Panel2();
  SoftFadeUpBlueBank4Panel3();
  SoftFadeUpBlueBank4Panel4();
}
//Soft fade down all the panels from Blue in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownBlueBank4Series(){
  SoftFadeDownBlueBank4Panel4();
  SoftFadeDownBlueBank4Panel3();
  SoftFadeDownBlueBank4Panel2();
  SoftFadeDownBlueBank4Panel1();
}
//Soft fade up all the panels to Purple in bank 4 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpPurpleBank4Series(){
  SoftFadeUpPurpleBank4Panel1();
  SoftFadeUpPurpleBank4Panel2();
  SoftFadeUpPurpleBank4Panel3();
  SoftFadeUpPurpleBank4Panel4();
}
//Soft fade down all the panels from Purple in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownPurpleBank4Series(){
  SoftFadeDownPurpleBank4Panel4();
  SoftFadeDownPurpleBank4Panel3();
  SoftFadeDownPurpleBank4Panel2();
  SoftFadeDownPurpleBank4Panel1();
}
//Soft fade up all the panels to Aqua in bank 4 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpAquaBank4Series(){
  SoftFadeUpAquaBank4Panel1();
  SoftFadeUpAquaBank4Panel2();
  SoftFadeUpAquaBank4Panel3();
  SoftFadeUpAquaBank4Panel4();
}
//Soft fade down all the panels from Aqua in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownAquaBank4Series(){
  SoftFadeDownAquaBank4Panel4();
  SoftFadeDownAquaBank4Panel3();
  SoftFadeDownAquaBank4Panel2();
  SoftFadeDownAquaBank4Panel1();
}
//Soft fade up all the panels to Yellow in bank 4 in series starting with Panel 1 and ending with Panel 4
void SoftFadeUpYellowBank4Series(){
  SoftFadeUpYellowBank4Panel1();
  SoftFadeUpYellowBank4Panel2();
  SoftFadeUpYellowBank4Panel3();
  SoftFadeUpYellowBank4Panel4();
}
//Soft fade down all the panels from Yellow in bank 4 in series starting with Panel 4 and ending with Panel 1
void SoftFadeDownYellowBank4Series(){
  SoftFadeDownYellowBank4Panel4();
  SoftFadeDownYellowBank4Panel3();
  SoftFadeDownYellowBank4Panel2();
  SoftFadeDownYellowBank4Panel1();
}

//SIMULTANEOUS FADE ALL PANELS IN BANK
//Bank1FadeRoutines
void SoftFadeDownRedBank1(){
  SetColourBank1(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpRedBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1(255, 0, 0);
}
void SoftFadeDownGreenBank1(){
  SetColourBank1(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpGreenBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1(0, 255, 0);
}
void SoftFadeDownBlueBank1(){
  SetColourBank1(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpBlueBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1(0, 0, 255);
}
void SoftFadeDownPurpleBank1(){
  SetColourBank1(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpPurpleBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1(255, 0, 255);
}
void SoftFadeDownAquaBank1(){
  SetColourBank1(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpAquaBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1(0, 255, 255);
}
void SoftFadeDownYellowBank1(){
  SetColourBank1(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
}
void SoftFadeUpYellowBank1(){
  SetColourBank1(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1(255, 255, 0);
}
//Bank2BaseRoutines
void SoftFadeDownRedBank2(){
  SetColourBank2(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpRedBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(10, 0, 0);
  delay(ShortDelay);
  SetColourBank2(30, 0, 0);
  delay(ShortDelay);
  SetColourBank2(50, 0, 0);
  delay(ShortDelay);
  SetColourBank2(70, 0, 0);
  delay(ShortDelay);
  SetColourBank2(90, 0, 0);
  delay(ShortDelay);
  SetColourBank2(110, 0, 0);
  delay(ShortDelay);
  SetColourBank2(130, 0, 0);
  delay(ShortDelay);
  SetColourBank2(150, 0, 0);
  delay(ShortDelay);
  SetColourBank2(170, 0, 0);
  delay(ShortDelay);
  SetColourBank2(190, 0, 0);
  delay(ShortDelay);
  SetColourBank2(210, 0, 0);
  delay(ShortDelay);
  SetColourBank2(230, 0, 0);
  delay(ShortDelay);
  SetColourBank2(255, 0, 0);
}
void SoftFadeDownGreenBank2(){
  SetColourBank2(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpGreenBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(0, 10, 0);
  delay(ShortDelay);
  SetColourBank2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2(0, 50, 0);
  delay(ShortDelay);
  SetColourBank2(0, 70, 0);
  delay(ShortDelay);
  SetColourBank2(0, 90, 0);
  delay(ShortDelay);
  SetColourBank2(0, 110, 0);
  delay(ShortDelay);
  SetColourBank2(0, 130, 0);
  delay(ShortDelay);
  SetColourBank2(0, 150, 0);
  delay(ShortDelay);
  SetColourBank2(0, 170, 0);
  delay(ShortDelay);
  SetColourBank2(0, 190, 0);
  delay(ShortDelay);
  SetColourBank2(0, 210, 0);
  delay(ShortDelay);
  SetColourBank2(0, 230, 0);
  delay(ShortDelay);
  SetColourBank2(0, 255, 0);
}
void SoftFadeDownBlueBank2(){
  SetColourBank2(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2(0, 0, 30);
  delay(ShortDelay);
  SetColourBank2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpBlueBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(0, 0, 10);
  delay(ShortDelay);
  SetColourBank2(0, 30, 0);
  delay(ShortDelay);
  SetColourBank2(0, 0, 50);
  delay(ShortDelay);
  SetColourBank2(0, 0, 70);
  delay(ShortDelay);
  SetColourBank2(0, 0, 90);
  delay(ShortDelay);
  SetColourBank2(0, 0, 110);
  delay(ShortDelay);
  SetColourBank2(0, 0, 130);
  delay(ShortDelay);
  SetColourBank2(0, 0, 150);
  delay(ShortDelay);
  SetColourBank2(0, 0, 170);
  delay(ShortDelay);
  SetColourBank2(0, 0, 190);
  delay(ShortDelay);
  SetColourBank2(0, 0, 210);
  delay(ShortDelay);
  SetColourBank2(0, 0, 230);
  delay(ShortDelay);
  SetColourBank2(0, 0, 255);
}
void SoftFadeDownPurpleBank2(){
  SetColourBank2(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpPurpleBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(10, 0, 10);
  delay(ShortDelay);
  SetColourBank2(30, 0, 30);
  delay(ShortDelay);
  SetColourBank2(50, 0, 50);
  delay(ShortDelay);
  SetColourBank2(70, 0, 70);
  delay(ShortDelay);
  SetColourBank2(90, 0, 90);
  delay(ShortDelay);
  SetColourBank2(110, 0, 110);
  delay(ShortDelay);
  SetColourBank2(130, 0, 130);
  delay(ShortDelay);
  SetColourBank2(150, 0, 150);
  delay(ShortDelay);
  SetColourBank2(170, 0, 170);
  delay(ShortDelay);
  SetColourBank2(190, 0, 190);
  delay(ShortDelay);
  SetColourBank2(210, 0, 210);
  delay(ShortDelay);
  SetColourBank2(230, 0, 230);
  delay(ShortDelay);
  SetColourBank2(255, 0, 255);
}
void SoftFadeDownAquaBank2(){
  SetColourBank2(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpAquaBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(0, 10, 10);
  delay(ShortDelay);
  SetColourBank2(0, 30, 30);
  delay(ShortDelay);
  SetColourBank2(0, 50, 50);
  delay(ShortDelay);
  SetColourBank2(0, 70, 70);
  delay(ShortDelay);
  SetColourBank2(0, 90, 90);
  delay(ShortDelay);
  SetColourBank2(0, 110, 110);
  delay(ShortDelay);
  SetColourBank2(0, 130, 130);
  delay(ShortDelay);
  SetColourBank2(0, 150, 150);
  delay(ShortDelay);
  SetColourBank2(0, 170, 170);
  delay(ShortDelay);
  SetColourBank2(0, 190, 190);
  delay(ShortDelay);
  SetColourBank2(0, 210, 210);
  delay(ShortDelay);
  SetColourBank2(0, 230, 230);
  delay(ShortDelay);
  SetColourBank2(0, 255, 255);
}
void SoftFadeDownYellowBank2(){
  SetColourBank2(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2(0, 0, 0);
}
void SoftFadeUpYellowBank2(){
  SetColourBank2(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank2(10, 10, 0);
  delay(ShortDelay);
  SetColourBank2(30, 30, 0);
  delay(ShortDelay);
  SetColourBank2(50, 50, 0);
  delay(ShortDelay);
  SetColourBank2(70, 70, 0);
  delay(ShortDelay);
  SetColourBank2(90, 90, 0);
  delay(ShortDelay);
  SetColourBank2(110, 110, 0);
  delay(ShortDelay);
  SetColourBank2(130, 130, 0);
  delay(ShortDelay);
  SetColourBank2(150, 150, 0);
  delay(ShortDelay);
  SetColourBank2(170, 170, 0);
  delay(ShortDelay);
  SetColourBank2(190, 190, 0);
  delay(ShortDelay);
  SetColourBank2(210, 210, 0);
  delay(ShortDelay);
  SetColourBank2(230, 230, 0);
  delay(ShortDelay);
  SetColourBank2(255, 255, 0);
}
//Bank3BaseRoutines
void SoftFadeDownRedBank3(){
  SetColourBank3(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpRedBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(10, 0, 0);
  delay(ShortDelay);
  SetColourBank3(30, 0, 0);
  delay(ShortDelay);
  SetColourBank3(50, 0, 0);
  delay(ShortDelay);
  SetColourBank3(70, 0, 0);
  delay(ShortDelay);
  SetColourBank3(90, 0, 0);
  delay(ShortDelay);
  SetColourBank3(110, 0, 0);
  delay(ShortDelay);
  SetColourBank3(130, 0, 0);
  delay(ShortDelay);
  SetColourBank3(150, 0, 0);
  delay(ShortDelay);
  SetColourBank3(170, 0, 0);
  delay(ShortDelay);
  SetColourBank3(190, 0, 0);
  delay(ShortDelay);
  SetColourBank3(210, 0, 0);
  delay(ShortDelay);
  SetColourBank3(230, 0, 0);
  delay(ShortDelay);
  SetColourBank3(255, 0, 0);
}
void SoftFadeDownGreenBank3(){
  SetColourBank3(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpGreenBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(0, 10, 0);
  delay(ShortDelay);
  SetColourBank3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3(0, 50, 0);
  delay(ShortDelay);
  SetColourBank3(0, 70, 0);
  delay(ShortDelay);
  SetColourBank3(0, 90, 0);
  delay(ShortDelay);
  SetColourBank3(0, 110, 0);
  delay(ShortDelay);
  SetColourBank3(0, 130, 0);
  delay(ShortDelay);
  SetColourBank3(0, 150, 0);
  delay(ShortDelay);
  SetColourBank3(0, 170, 0);
  delay(ShortDelay);
  SetColourBank3(0, 190, 0);
  delay(ShortDelay);
  SetColourBank3(0, 210, 0);
  delay(ShortDelay);
  SetColourBank3(0, 230, 0);
  delay(ShortDelay);
  SetColourBank3(0, 255, 0);
}
void SoftFadeDownBlueBank3(){
  SetColourBank3(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3(0, 0, 30);
  delay(ShortDelay);
  SetColourBank3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpBlueBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(0, 0, 10);
  delay(ShortDelay);
  SetColourBank3(0, 30, 0);
  delay(ShortDelay);
  SetColourBank3(0, 0, 50);
  delay(ShortDelay);
  SetColourBank3(0, 0, 70);
  delay(ShortDelay);
  SetColourBank3(0, 0, 90);
  delay(ShortDelay);
  SetColourBank3(0, 0, 110);
  delay(ShortDelay);
  SetColourBank3(0, 0, 130);
  delay(ShortDelay);
  SetColourBank3(0, 0, 150);
  delay(ShortDelay);
  SetColourBank3(0, 0, 170);
  delay(ShortDelay);
  SetColourBank3(0, 0, 190);
  delay(ShortDelay);
  SetColourBank3(0, 0, 210);
  delay(ShortDelay);
  SetColourBank3(0, 0, 230);
  delay(ShortDelay);
  SetColourBank3(0, 0, 255);
}
void SoftFadeDownPurpleBank3(){
  SetColourBank3(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpPurpleBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(10, 0, 10);
  delay(ShortDelay);
  SetColourBank3(30, 0, 30);
  delay(ShortDelay);
  SetColourBank3(50, 0, 50);
  delay(ShortDelay);
  SetColourBank3(70, 0, 70);
  delay(ShortDelay);
  SetColourBank3(90, 0, 90);
  delay(ShortDelay);
  SetColourBank3(110, 0, 110);
  delay(ShortDelay);
  SetColourBank3(130, 0, 130);
  delay(ShortDelay);
  SetColourBank3(150, 0, 150);
  delay(ShortDelay);
  SetColourBank3(170, 0, 170);
  delay(ShortDelay);
  SetColourBank3(190, 0, 190);
  delay(ShortDelay);
  SetColourBank3(210, 0, 210);
  delay(ShortDelay);
  SetColourBank3(230, 0, 230);
  delay(ShortDelay);
  SetColourBank3(255, 0, 255);
}
void SoftFadeDownAquaBank3(){
  SetColourBank3(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpAquaBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(0, 10, 10);
  delay(ShortDelay);
  SetColourBank3(0, 30, 30);
  delay(ShortDelay);
  SetColourBank3(0, 50, 50);
  delay(ShortDelay);
  SetColourBank3(0, 70, 70);
  delay(ShortDelay);
  SetColourBank3(0, 90, 90);
  delay(ShortDelay);
  SetColourBank3(0, 110, 110);
  delay(ShortDelay);
  SetColourBank3(0, 130, 130);
  delay(ShortDelay);
  SetColourBank3(0, 150, 150);
  delay(ShortDelay);
  SetColourBank3(0, 170, 170);
  delay(ShortDelay);
  SetColourBank3(0, 190, 190);
  delay(ShortDelay);
  SetColourBank3(0, 210, 210);
  delay(ShortDelay);
  SetColourBank3(0, 230, 230);
  delay(ShortDelay);
  SetColourBank3(0, 255, 255);
}
void SoftFadeDownYellowBank3(){
  SetColourBank3(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3(0, 0, 0);
}
void SoftFadeUpYellowBank3(){
  SetColourBank3(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank3(10, 10, 0);
  delay(ShortDelay);
  SetColourBank3(30, 30, 0);
  delay(ShortDelay);
  SetColourBank3(50, 50, 0);
  delay(ShortDelay);
  SetColourBank3(70, 70, 0);
  delay(ShortDelay);
  SetColourBank3(90, 90, 0);
  delay(ShortDelay);
  SetColourBank3(110, 110, 0);
  delay(ShortDelay);
  SetColourBank3(130, 130, 0);
  delay(ShortDelay);
  SetColourBank3(150, 150, 0);
  delay(ShortDelay);
  SetColourBank3(170, 170, 0);
  delay(ShortDelay);
  SetColourBank3(190, 190, 0);
  delay(ShortDelay);
  SetColourBank3(210, 210, 0);
  delay(ShortDelay);
  SetColourBank3(230, 230, 0);
  delay(ShortDelay);
  SetColourBank3(255, 255, 0);
}
//Bank4BaseRoutines
void SoftFadeDownRedBank4(){
  SetColourBank4(255, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpRedBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank4(255, 0, 0);
}
void SoftFadeDownGreenBank4(){
  SetColourBank4(0, 255, 0); 
  delay(ShortDelay);
  SetColourBank4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpGreenBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank4(0, 255, 0);
}
void SoftFadeDownBlueBank4(){
  SetColourBank4(0, 0, 255); 
  delay(ShortDelay);
  SetColourBank4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpBlueBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank4(0, 0, 255);
}
void SoftFadeDownPurpleBank4(){
  SetColourBank4(255, 0, 255); 
  delay(ShortDelay);
  SetColourBank4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpPurpleBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank4(255, 0, 255);
}
void SoftFadeDownAquaBank4(){
  SetColourBank4(0, 255, 255); 
  delay(ShortDelay);
  SetColourBank4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpAquaBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank4(0, 255, 255);
}
void SoftFadeDownYellowBank4(){
  SetColourBank4(255, 255, 0); 
  delay(ShortDelay);
  SetColourBank4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4(0, 0, 0);
}
void SoftFadeUpYellowBank4(){
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank4(255, 255, 0);
}




//MainRoutines
void SoftFadeAllColourBank1(){
  SoftFadeUpRedBank1();
  SoftFadeDownRedBank1();
  SoftFadeUpGreenBank1();
  SoftFadeDownGreenBank1();
  SoftFadeUpBlueBank1();
  SoftFadeDownBlueBank1();
  SoftFadeUpPurpleBank1();
  SoftFadeDownPurpleBank1();
  SoftFadeUpYellowBank1();
  SoftFadeDownYellowBank1();
  SoftFadeUpAquaBank1();
  SoftFadeDownAquaBank1();
}

void SoftFadeAllColourBank2(){
  SoftFadeUpRedBank2();
  SoftFadeDownRedBank2();
  SoftFadeUpGreenBank2();
  SoftFadeDownGreenBank2();
  SoftFadeUpBlueBank2();
  SoftFadeDownBlueBank2();
  SoftFadeUpPurpleBank2();
  SoftFadeDownPurpleBank2();
  SoftFadeUpYellowBank2();
  SoftFadeDownYellowBank2();
  SoftFadeUpAquaBank2();
  SoftFadeDownAquaBank2();
}

void SoftFadeAllColourBank3(){
  SoftFadeUpRedBank3();
  SoftFadeDownRedBank3();
  SoftFadeUpGreenBank3();
  SoftFadeDownGreenBank3();
  SoftFadeUpBlueBank3();
  SoftFadeDownBlueBank3();
  SoftFadeUpPurpleBank3();
  SoftFadeDownPurpleBank3();
  SoftFadeUpYellowBank3();
  SoftFadeDownYellowBank3();
  SoftFadeUpAquaBank3();
  SoftFadeDownAquaBank3();
}

void SoftFadeAllColourBank4(){
  SoftFadeUpRedBank4();
  SoftFadeDownRedBank4();
  SoftFadeUpGreenBank4();
  SoftFadeDownGreenBank4();
  SoftFadeUpBlueBank4();
  SoftFadeDownBlueBank4();
  SoftFadeUpPurpleBank4();
  SoftFadeDownPurpleBank4();
  SoftFadeUpYellowBank4();
  SoftFadeDownYellowBank4();
  SoftFadeUpAquaBank4();
  SoftFadeDownAquaBank4();
}


void AllBankRed(){
  SetColourBank1(255, 0, 0);
  SetColourBank1(255, 0, 0);
  SetColourBank2(255, 0, 0);
  SetColourBank3(255, 0, 0);
  SetColourBank4(255, 0, 0);
}

void AllBankGreen(){
  SetColourBank1(0, 255, 0);
  SetColourBank2(0, 255, 0);
  SetColourBank3(0, 255, 0);
  SetColourBank4(0, 255, 0);
}

void AllBankBlue(){
  SetColourBank1(0, 0, 255);
  SetColourBank2(0, 0, 255);
  SetColourBank3(0, 0, 255);
  SetColourBank4(0, 0, 255);
}

void AllBankYellow(){
  SetColourBank1(255, 255, 0);
  SetColourBank2(255, 255, 0);
  SetColourBank3(255, 255, 0);
  SetColourBank4(255, 255, 0);
}

void AllBankAqua(){
  SetColourBank1(0, 255, 255);
  SetColourBank2(0, 255, 255);
  SetColourBank3(0, 255, 255);
  SetColourBank4(0, 255, 255);
}

void AllBankPurple(){
  SetColourBank1(255, 0, 255);
  SetColourBank2(255, 0, 255);
  SetColourBank3(255, 0, 255);
  SetColourBank4(255, 0, 255);
}

void AllBankWhite(){
  SetColourBank1(255, 255, 255);
  SetColourBank2(255, 255, 255);
  SetColourBank3(255, 255, 255);
  SetColourBank4(255, 255, 255);
}

void CycleUpCycleDown(){
  SoftFadeUpRedBank1();
  SoftFadeUpRedBank2();
  SoftFadeUpRedBank3();
  SoftFadeUpRedBank4();
  SoftFadeDownRedBank4();
  SoftFadeDownRedBank3();
  SoftFadeDownRedBank2();
  SoftFadeDownRedBank1();
  delay(MidDelay);
  SoftFadeUpGreenBank1();
  SoftFadeUpGreenBank2();
  SoftFadeUpGreenBank3();
  SoftFadeUpGreenBank4();
  SoftFadeDownGreenBank4();
  SoftFadeDownGreenBank3();
  SoftFadeDownGreenBank2();
  SoftFadeDownGreenBank1();
  delay(MidDelay);
  SoftFadeUpBlueBank1();
  SoftFadeUpBlueBank2();
  SoftFadeUpBlueBank3();
  SoftFadeUpBlueBank4();
  SoftFadeDownBlueBank4();
  SoftFadeDownBlueBank3();
  SoftFadeDownBlueBank2();
  SoftFadeDownBlueBank1();
  delay(MidDelay);
  SoftFadeUpYellowBank1();
  SoftFadeUpYellowBank2();
  SoftFadeUpYellowBank3();
  SoftFadeUpYellowBank4();
  SoftFadeDownYellowBank4();
  SoftFadeDownYellowBank3();
  SoftFadeDownYellowBank2();
  SoftFadeDownYellowBank1();
  delay(MidDelay);
  SoftFadeUpAquaBank1();
  SoftFadeUpAquaBank2();
  SoftFadeUpAquaBank3();
  SoftFadeUpAquaBank4();
  SoftFadeDownAquaBank4();
  SoftFadeDownAquaBank3();
  SoftFadeDownAquaBank2();
  SoftFadeDownAquaBank1();
  delay(MidDelay);
  SoftFadeUpPurpleBank1();
  SoftFadeUpPurpleBank2();
  SoftFadeUpPurpleBank3();
  SoftFadeUpPurpleBank4();
  SoftFadeDownPurpleBank4();
  SoftFadeDownPurpleBank3();
  SoftFadeDownPurpleBank2();
  SoftFadeDownPurpleBank1();
  delay(MidDelay);
}
void AllOff(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}





//Preset Routines
void Routine1(){
    SoftFadeAllColourBank1();
    SoftFadeAllColourBank2();
    SoftFadeAllColourBank3();
    SoftFadeAllColourBank4();
}

void Routine2(){
  SoftFadeUpRedBank4Panel1();
  SoftFadeUpGreenBank3Panel1();
  SoftFadeUpGreenBank4Panel2();
  SoftFadeUpBlueBank2Panel1();
  SoftFadeUpBlueBank3Panel2();
  SoftFadeUpBlueBank4Panel3();
  SoftFadeUpPurpleBank1Panel1();
  SoftFadeUpPurpleBank2Panel2();
  SoftFadeUpPurpleBank3Panel3();
  SoftFadeUpPurpleBank4Panel4();
  SoftFadeUpYellowBank1Panel2();
  SoftFadeUpYellowBank2Panel3();
  SoftFadeUpYellowBank3Panel4();
  SoftFadeUpAquaBank1Panel3();
  SoftFadeUpAquaBank2Panel4();
  SoftFadeUpRedBank1Panel4();
  AllOff();
}

void Routine3(){
    AllBankRed();
    delay(LongDelay);
    delay(MidDelay);
    AllBankGreen();
    delay(LongDelay);
    delay(MidDelay);
    AllBankBlue();
    delay(LongDelay);
    delay(MidDelay);
    AllBankBlue();
    delay(LongDelay);
    delay(MidDelay);
    AllBankYellow();
    delay(LongDelay);
    delay(MidDelay);
    AllBankAqua();
    delay(LongDelay);
    delay(MidDelay);
    AllBankPurple();
    delay(LongDelay);
    delay(MidDelay);
    AllBankRed();
    delay(MidDelay);
    AllBankGreen();
    delay(MidDelay);
    AllBankBlue();
    delay(MidDelay);
    AllBankBlue();
    delay(MidDelay);
    AllBankYellow();
    delay(MidDelay);
    AllBankAqua();
    delay(MidDelay);
    AllBankPurple();
    delay(MidDelay);
}

void Routine4(){
  CycleUpCycleDown();
}

void loop() {
  int Routine;
  ReadSwitches();
  if(Mode == 0){
    AllOff();
  };
  if(Mode == 1){
    Routine1();
  };
  if(Mode == 2){
    Routine2();
  };
  if(Mode == 3){
    Routine3();
  };
  if(Mode == 4){
    Routine4();
  };
  if(Mode == 5){
    Routine1();
    Routine2();
    Routine3();
    Routine4();
  };
  if(Mode == 6){
    AllBankWhite();
  };
}
