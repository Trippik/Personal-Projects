int RedPinBank1 = 2;
int GreenPinBank1 = 3;
int BluePinBank1 = 4;
int RedPinBank2 = 5;
int GreenPinBank2 = 6;
int BluePinBank2 = 7;
int RedPinBank3 = 8;
int GreenPinBank3 = 9;
int BluePinBank3 = 10;
int RedPinBank4 = 11;
int GreenPinBank4 = 12;
int BluePinBank4 = 13;
int Switch1 = 16;
int Switch2 = 17;
int Switch3 = 18;
int Switch4 = 19;
int Switch5 = 20;
int Switch6 = 21;

int ShortDelay = 5;
int MidDelay = 200;
int LongDelay = 1000;
int Mode = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(RedPinBank1, OUTPUT);
  pinMode(GreenPinBank1, OUTPUT);
  pinMode(BluePinBank1, OUTPUT);
  pinMode(RedPinBank2, OUTPUT);
  pinMode(GreenPinBank2, OUTPUT);
  pinMode(BluePinBank2, OUTPUT);
  pinMode(RedPinBank3, OUTPUT);
  pinMode(GreenPinBank3, OUTPUT);
  pinMode(BluePinBank3, OUTPUT);
  pinMode(RedPinBank4,OUTPUT);
  pinMode(GreenPinBank4, OUTPUT);
  pinMode(BluePinBank4, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  pinMode(Switch4, INPUT);
}

//SwitchRoutined

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

//Bank1 ColourSetup
void SetColourBank1(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank1, redValue);
  analogWrite(GreenPinBank1, greenValue);
  analogWrite(BluePinBank1, blueValue);
}

//Bank2ColourSetup
void SetColourBank2(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank2, redValue);
  analogWrite(GreenPinBank2, greenValue);
  analogWrite(BluePinBank2, blueValue);
}

//Bank3ColourSetup
void SetColourBank3(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank3, redValue);
  analogWrite(GreenPinBank3, greenValue);
  analogWrite(BluePinBank3, blueValue);
}

//Bank4ColourSetup
void SetColourBank4(int redValue, int greenValue, int blueValue) {
  analogWrite(RedPinBank4, redValue);
  analogWrite(GreenPinBank4, greenValue);
  analogWrite(BluePinBank4, blueValue);
}


//
//BASE ROUTINES
//


//Bank1BaseRoutines
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


//AllBankBaseRoutines
void SoftFadeDownRedBank(){
  SetColourBank1(230, 0, 0);
  SetColourBank2(230, 0, 0);
  SetColourBank3(230, 0, 0);
  SetColourBank4(230, 0, 0);
  delay(ShortDelay);
  SetColourBank1(210, 0, 0);
  SetColourBank2(210, 0, 0);
  SetColourBank3(210, 0, 0);
  SetColourBank4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1(190, 0, 0);
  SetColourBank2(190, 0, 0);
  SetColourBank3(190, 0, 0);
  SetColourBank4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1(170, 0, 0);
  SetColourBank2(170, 0, 0);
  SetColourBank3(170, 0, 0);
  SetColourBank4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1(150, 0, 0);
  SetColourBank2(150, 0, 0);
  SetColourBank3(150, 0, 0);
  SetColourBank4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1(130, 0, 0);
  SetColourBank2(130, 0, 0);
  SetColourBank3(130, 0, 0);
  SetColourBank4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1(110, 0, 0);
  SetColourBank2(110, 0, 0);
  SetColourBank3(110, 0, 0);
  SetColourBank4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1(90, 0, 0);
  SetColourBank2(90, 0, 0);
  SetColourBank3(90, 0, 0);
  SetColourBank4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1(70, 0, 0);
  SetColourBank2(70, 0, 0);
  SetColourBank3(70, 0, 0);
  SetColourBank4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1(50, 0, 0);
  SetColourBank2(50, 0, 0);
  SetColourBank3(50, 0, 0);
  SetColourBank4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1(30, 0, 0);
  SetColourBank2(30, 0, 0);
  SetColourBank3(30, 0, 0);
  SetColourBank4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1(10, 0, 0);
  SetColourBank2(10, 0, 0);
  SetColourBank3(10, 0, 0);
  SetColourBank4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}


void SoftFadeUpRedBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
  delay(ShortDelay);
  SetColourBank1(10, 0, 0);
  SetColourBank2(10, 0, 0);
  SetColourBank3(10, 0, 0);
  SetColourBank4(10, 0, 0);
  delay(ShortDelay);
  SetColourBank1(30, 0, 0);
  SetColourBank2(30, 0, 0);
  SetColourBank3(30, 0, 0);
  SetColourBank4(30, 0, 0);
  delay(ShortDelay);
  SetColourBank1(50, 0, 0);
  SetColourBank2(50, 0, 0);
  SetColourBank3(50, 0, 0);
  SetColourBank4(50, 0, 0);
  delay(ShortDelay);
  SetColourBank1(70, 0, 0);
  SetColourBank2(70, 0, 0);
  SetColourBank3(70, 0, 0);
  SetColourBank4(70, 0, 0);
  delay(ShortDelay);
  SetColourBank1(90, 0, 0);
  SetColourBank2(90, 0, 0);
  SetColourBank3(90, 0, 0);
  SetColourBank4(90, 0, 0);
  delay(ShortDelay);
  SetColourBank1(110, 0, 0);
  SetColourBank2(110, 0, 0);
  SetColourBank3(110, 0, 0);
  SetColourBank4(110, 0, 0);
  delay(ShortDelay);
  SetColourBank1(130, 0, 0);
  SetColourBank2(130, 0, 0);
  SetColourBank3(130, 0, 0);
  SetColourBank4(130, 0, 0);
  delay(ShortDelay);
  SetColourBank1(150, 0, 0);
  SetColourBank2(150, 0, 0);
  SetColourBank3(150, 0, 0);
  SetColourBank4(150, 0, 0);
  delay(ShortDelay);
  SetColourBank1(170, 0, 0);
  SetColourBank2(170, 0, 0);
  SetColourBank3(170, 0, 0);
  SetColourBank4(170, 0, 0);
  delay(ShortDelay);
  SetColourBank1(190, 0, 0);
  SetColourBank2(190, 0, 0);
  SetColourBank3(190, 0, 0);
  SetColourBank4(190, 0, 0);
  delay(ShortDelay);
  SetColourBank1(210, 0, 0);
  SetColourBank2(210, 0, 0);
  SetColourBank3(210, 0, 0);
  SetColourBank4(210, 0, 0);
  delay(ShortDelay);
  SetColourBank1(230, 0, 0);
  SetColourBank2(230, 0, 0);
  SetColourBank3(230, 0, 0);
  SetColourBank4(230, 0, 0);
}


void SoftFadeDownGreenBank(){
  SetColourBank1(0, 230, 0);
  SetColourBank2(0, 230, 0);
  SetColourBank3(0, 230, 0);
  SetColourBank4(0, 230, 0);
  delay(ShortDelay);
  SetColourBank1(0, 210, 0);
  SetColourBank2(0, 210, 0);
  SetColourBank3(0, 210, 0);
  SetColourBank4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1(0, 190, 0);
  SetColourBank2(0, 190, 0);
  SetColourBank3(0, 190, 0);
  SetColourBank4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1(0, 170, 0);
  SetColourBank2(0, 170, 0);
  SetColourBank3(0, 170, 0);
  SetColourBank4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1(0, 150, 0);
  SetColourBank2(0, 150, 0);
  SetColourBank3(0, 150, 0);
  SetColourBank4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1(0, 130, 0);
  SetColourBank2(0, 130, 0);
  SetColourBank3(0, 130, 0);
  SetColourBank4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1(0, 110, 0);
  SetColourBank2(0, 110, 0);
  SetColourBank3(0, 110, 0);
  SetColourBank4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1(0, 90, 0);
  SetColourBank2(0, 90, 0);
  SetColourBank3(0, 90, 0);
  SetColourBank4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1(0, 70, 0);
  SetColourBank2(0, 70, 0);
  SetColourBank3(0, 70, 0);
  SetColourBank4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1(0, 50, 0);
  SetColourBank2(0, 50, 0);
  SetColourBank3(0, 50, 0);
  SetColourBank4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1(0, 30, 0);
  SetColourBank2(0, 30, 0);
  SetColourBank3(0, 30, 0);
  SetColourBank4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1(0, 10, 0);
  SetColourBank2(0, 10, 0);
  SetColourBank3(0, 10, 0);
  SetColourBank4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}

void SoftFadeUpGreenBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 10, 0);
  SetColourBank2(0, 10, 0);
  SetColourBank3(0, 10, 0);
  SetColourBank4(0, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 30, 0);
  SetColourBank2(0, 30, 0);
  SetColourBank3(0, 30, 0);
  SetColourBank4(0, 30, 0);
  delay(ShortDelay);
  SetColourBank1(0, 50, 0);
  SetColourBank2(0, 50, 0);
  SetColourBank3(0, 50, 0);
  SetColourBank4(0, 50, 0);
  delay(ShortDelay);
  SetColourBank1(0, 70, 0);
  SetColourBank2(0, 70, 0);
  SetColourBank3(0, 70, 0);
  SetColourBank4(0, 70, 0);
  delay(ShortDelay);
  SetColourBank1(0, 90, 0);
  SetColourBank2(0, 90, 0);
  SetColourBank3(0, 90, 0);
  SetColourBank4(0, 90, 0);
  delay(ShortDelay);
  SetColourBank1(0, 110, 0);
  SetColourBank2(0, 110, 0);
  SetColourBank3(0, 110, 0);
  SetColourBank4(0, 110, 0);
  delay(ShortDelay);
  SetColourBank1(0, 130, 0);
  SetColourBank2(0, 130, 0);
  SetColourBank3(0, 130, 0);
  SetColourBank4(0, 130, 0);
  delay(ShortDelay);
  SetColourBank1(0, 150, 0);
  SetColourBank2(0, 150, 0);
  SetColourBank3(0, 150, 0);
  SetColourBank4(0, 150, 0);
  delay(ShortDelay);
  SetColourBank1(0, 170, 0);
  SetColourBank2(0, 170, 0);
  SetColourBank3(0, 170, 0);
  SetColourBank4(0, 170, 0);
  delay(ShortDelay);
  SetColourBank1(0, 190, 0);
  SetColourBank2(0, 190, 0);
  SetColourBank3(0, 190, 0);
  SetColourBank4(0, 190, 0);
  delay(ShortDelay);
  SetColourBank1(0, 210, 0);
  SetColourBank2(0, 210, 0);
  SetColourBank3(0, 210, 0);
  SetColourBank4(0, 210, 0);
  delay(ShortDelay);
  SetColourBank1(0, 230, 0);
  SetColourBank2(0, 230, 0);
  SetColourBank3(0, 230, 0);
  SetColourBank4(0, 230, 0);
}

void SoftFadeDownBlueBank(){
  SetColourBank1(0, 0, 230);
  SetColourBank2(0, 0, 230);
  SetColourBank3(0, 0, 230);
  SetColourBank4(0, 0, 230);
  delay(ShortDelay);
  SetColourBank1(0, 0, 210);
  SetColourBank2(0, 0, 210);
  SetColourBank3(0, 0, 210);
  SetColourBank4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1(0, 0, 190);
  SetColourBank2(0, 0, 190);
  SetColourBank3(0, 0, 190);
  SetColourBank4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1(0, 0, 170);
  SetColourBank2(0, 0, 170);
  SetColourBank3(0, 0, 170);
  SetColourBank4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1(0, 0, 150);
  SetColourBank2(0, 0, 150);
  SetColourBank3(0, 0, 150);
  SetColourBank4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1(0, 0, 130);
  SetColourBank2(0, 0, 130);
  SetColourBank3(0, 0, 130);
  SetColourBank4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1(0, 0, 110);
  SetColourBank2(0, 0, 110);
  SetColourBank3(0, 0, 110);
  SetColourBank4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1(0, 0, 90);
  SetColourBank2(0, 0, 90);
  SetColourBank3(0, 0, 90);
  SetColourBank4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1(0, 0, 70);
  SetColourBank2(0, 0, 70);
  SetColourBank3(0, 0, 70);
  SetColourBank4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1(0, 0, 50);
  SetColourBank2(0, 0, 50);
  SetColourBank3(0, 0, 50);
  SetColourBank4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1(0, 0, 30);
  SetColourBank2(0, 0, 30);
  SetColourBank3(0, 0, 30);
  SetColourBank4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1(0, 0, 10);
  SetColourBank2(0, 0, 10);
  SetColourBank3(0, 0, 10);
  SetColourBank4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}

void SoftFadeUpBlueBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 0, 10);
  SetColourBank2(0, 0, 10);
  SetColourBank3(0, 0, 10);
  SetColourBank4(0, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 30);
  SetColourBank2(0, 0, 30);
  SetColourBank3(0, 0, 30);
  SetColourBank4(0, 0, 30);
  delay(ShortDelay);
  SetColourBank1(0, 0, 50);
  SetColourBank2(0, 0, 50);
  SetColourBank3(0, 0, 50);
  SetColourBank4(0, 0, 50);
  delay(ShortDelay);
  SetColourBank1(0, 0, 70);
  SetColourBank2(0, 0, 70);
  SetColourBank3(0, 0, 70);
  SetColourBank4(0, 0, 70);
  delay(ShortDelay);
  SetColourBank1(0, 0, 90);
  SetColourBank2(0, 0, 90);
  SetColourBank3(0, 0, 90);
  SetColourBank4(0, 0, 90);
  delay(ShortDelay);
  SetColourBank1(0, 0, 110);
  SetColourBank2(0, 0, 110);
  SetColourBank3(0, 0, 110);
  SetColourBank4(0, 0, 110);
  delay(ShortDelay);
  SetColourBank1(0, 0, 130);
  SetColourBank2(0, 0, 130);
  SetColourBank3(0, 0, 130);
  SetColourBank4(0, 0, 130);
  delay(ShortDelay);
  SetColourBank1(0, 0, 150);
  SetColourBank2(0, 0, 150);
  SetColourBank3(0, 0, 150);
  SetColourBank4(0, 0, 150);
  delay(ShortDelay);
  SetColourBank1(0, 0, 170);
  SetColourBank2(0, 0, 170);
  SetColourBank3(0, 0, 170);
  SetColourBank4(0, 0, 170);
  delay(ShortDelay);
  SetColourBank1(0, 0, 190);
  SetColourBank2(0, 0, 190);
  SetColourBank3(0, 0, 190);
  SetColourBank4(0, 0, 190);
  delay(ShortDelay);
  SetColourBank1(0, 0, 210);
  SetColourBank2(0, 0, 210);
  SetColourBank3(0, 0, 210);
  SetColourBank4(0, 0, 210);
  delay(ShortDelay);
  SetColourBank1(0, 0, 230);
  SetColourBank2(0, 0, 230);
  SetColourBank3(0, 0, 230);
  SetColourBank4(0, 0, 230);
}

void SoftFadeDownYellowBank(){
  SetColourBank1(230, 230, 0);
  SetColourBank2(230, 230, 0);
  SetColourBank3(230, 230, 0);
  SetColourBank4(230, 230, 0);
  delay(ShortDelay);
  SetColourBank1(210, 210, 0);
  SetColourBank2(210, 210, 0);
  SetColourBank3(210, 210, 0);
  SetColourBank4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1(190, 190, 0);
  SetColourBank2(190, 190, 0);
  SetColourBank3(190, 190, 0);
  SetColourBank4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1(170, 170, 0);
  SetColourBank2(170, 170, 0);
  SetColourBank3(170, 170, 0);
  SetColourBank4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1(150, 150, 0);
  SetColourBank2(150, 150, 0);
  SetColourBank3(150, 150, 0);
  SetColourBank4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1(130, 130, 0);
  SetColourBank2(130, 130, 0);
  SetColourBank3(130, 130, 0);
  SetColourBank4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1(110, 110, 0);
  SetColourBank2(110, 110, 0);
  SetColourBank3(110, 110, 0);
  SetColourBank4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1(90, 90, 0);
  SetColourBank2(90, 90, 0);
  SetColourBank3(90, 90, 0);
  SetColourBank4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1(70, 70, 0);
  SetColourBank2(70, 70, 0);
  SetColourBank3(70, 70, 0);
  SetColourBank4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1(50, 50, 0);
  SetColourBank2(50, 50, 0);
  SetColourBank3(50, 50, 0);
  SetColourBank4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1(30, 30, 0);
  SetColourBank2(30, 30, 0);
  SetColourBank3(30, 30, 0);
  SetColourBank4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1(10, 10, 0);
  SetColourBank2(10, 10, 0);
  SetColourBank3(10, 10, 0);
  SetColourBank4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}

void SoftFadeUpYellowBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(10, 10, 0);
  SetColourBank2(10, 10, 0);
  SetColourBank3(10, 10, 0);
  SetColourBank4(10, 10, 0);
  delay(ShortDelay);
  SetColourBank1(30, 30, 0);
  SetColourBank2(30, 30, 0);
  SetColourBank3(30, 30, 0);
  SetColourBank4(30, 30, 0);
  delay(ShortDelay);
  SetColourBank1(50, 50, 0);
  SetColourBank2(50, 50, 0);
  SetColourBank3(50, 50, 0);
  SetColourBank4(50, 50, 0);
  delay(ShortDelay);
  SetColourBank1(70, 70, 0);
  SetColourBank2(70, 70, 0);
  SetColourBank3(70, 70, 0);
  SetColourBank4(70, 70, 0);
  delay(ShortDelay);
  SetColourBank1(90, 90, 0);
  SetColourBank2(90, 90, 0);
  SetColourBank3(90, 90, 0);
  SetColourBank4(90, 90, 0);
  delay(ShortDelay);
  SetColourBank1(110, 110, 0);
  SetColourBank2(110, 110, 0);
  SetColourBank3(110, 110, 0);
  SetColourBank4(110, 110, 0);
  delay(ShortDelay);
  SetColourBank1(130, 130, 0);
  SetColourBank2(130, 130, 0);
  SetColourBank3(130, 130, 0);
  SetColourBank4(130, 130, 0);
  delay(ShortDelay);
  SetColourBank1(150, 150, 0);
  SetColourBank2(150, 150, 0);
  SetColourBank3(150, 150, 0);
  SetColourBank4(150, 150, 0);
  delay(ShortDelay);
  SetColourBank1(170, 170, 0);
  SetColourBank2(170, 170, 0);
  SetColourBank3(170, 170, 0);
  SetColourBank4(170, 170, 0);
  delay(ShortDelay);
  SetColourBank1(190, 190, 0);
  SetColourBank2(190, 190, 0);
  SetColourBank3(190, 190, 0);
  SetColourBank4(190, 190, 0);
  delay(ShortDelay);
  SetColourBank1(210, 210, 0);
  SetColourBank2(210, 210, 0);
  SetColourBank3(210, 210, 0);
  SetColourBank4(210, 210, 0);
  delay(ShortDelay);
  SetColourBank1(230, 230, 0);
  SetColourBank2(230, 230, 0);
  SetColourBank3(230, 230, 0);
  SetColourBank4(230, 230, 0);
}

void SoftFadeDownAquaBank(){
  SetColourBank1(0, 230, 230);
  SetColourBank2(0, 230, 230);
  SetColourBank3(0, 230, 230);
  SetColourBank4(0, 230, 230);
  delay(ShortDelay);
  SetColourBank1(0, 210, 210);
  SetColourBank2(0, 210, 210);
  SetColourBank3(0, 210, 210);
  SetColourBank4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1(0, 190, 190);
  SetColourBank2(0, 190, 190);
  SetColourBank3(0, 190, 190);
  SetColourBank4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1(0, 170, 170);
  SetColourBank2(0, 170, 170);
  SetColourBank3(0, 170, 170);
  SetColourBank4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1(0, 150, 150);
  SetColourBank2(0, 150, 150);
  SetColourBank3(0, 150, 150);
  SetColourBank4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1(0, 130, 130);
  SetColourBank2(0, 130, 130);
  SetColourBank3(0, 130, 130);
  SetColourBank4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1(0, 110, 110);
  SetColourBank2(0, 110, 110);
  SetColourBank3(0, 110, 110);
  SetColourBank4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1(0, 90, 90);
  SetColourBank2(0, 90, 90);
  SetColourBank3(0, 90, 90);
  SetColourBank4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1(0, 70, 70);
  SetColourBank2(0, 70, 70);
  SetColourBank3(0, 70, 70);
  SetColourBank4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1(0, 50, 50);
  SetColourBank2(0, 50, 50);
  SetColourBank3(0, 50, 50);
  SetColourBank4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1(0, 30, 30);
  SetColourBank2(0, 30, 30);
  SetColourBank3(0, 30, 30);
  SetColourBank4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1(0, 10, 10);
  SetColourBank2(0, 10, 10);
  SetColourBank3(0, 10, 10);
  SetColourBank4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}

void SoftFadeUpAquaBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(0, 10, 10);
  SetColourBank2(0, 10, 10);
  SetColourBank3(0, 10, 10);
  SetColourBank4(0, 10, 10);
  delay(ShortDelay);
  SetColourBank1(0, 30, 30);
  SetColourBank2(0, 30, 30);
  SetColourBank3(0, 30, 30);
  SetColourBank4(0, 30, 30);
  delay(ShortDelay);
  SetColourBank1(0, 50, 50);
  SetColourBank2(0, 50, 50);
  SetColourBank3(0, 50, 50);
  SetColourBank4(0, 50, 50);
  delay(ShortDelay);
  SetColourBank1(0, 70, 70);
  SetColourBank2(0, 70, 70);
  SetColourBank3(0, 70, 70);
  SetColourBank4(0, 70, 70);
  delay(ShortDelay);
  SetColourBank1(0, 90, 90);
  SetColourBank2(0, 90, 90);
  SetColourBank3(0, 90, 90);
  SetColourBank4(0, 90, 90);
  delay(ShortDelay);
  SetColourBank1(0, 110, 110);
  SetColourBank2(0, 110, 110);
  SetColourBank3(0, 110, 110);
  SetColourBank4(0, 110, 110);
  delay(ShortDelay);
  SetColourBank1(0, 130, 130);
  SetColourBank2(0, 130, 130);
  SetColourBank3(0, 130, 130);
  SetColourBank4(0, 130, 130);
  delay(ShortDelay);
  SetColourBank1(0, 150, 150);
  SetColourBank2(0, 150, 150);
  SetColourBank3(0, 150, 150);
  SetColourBank4(0, 150, 150);
  delay(ShortDelay);
  SetColourBank1(0, 170, 170);
  SetColourBank2(0, 170, 170);
  SetColourBank3(0, 170, 170);
  SetColourBank4(0, 170, 170);
  delay(ShortDelay);
  SetColourBank1(0, 190, 190);
  SetColourBank2(0, 190, 190);
  SetColourBank3(0, 190, 190);
  SetColourBank4(0, 190, 190);
  delay(ShortDelay);
  SetColourBank1(0, 210, 210);
  SetColourBank2(0, 210, 210);
  SetColourBank3(0, 210, 210);
  SetColourBank4(0, 210, 210);
  delay(ShortDelay);
  SetColourBank1(0, 230, 230);
  SetColourBank2(0, 230, 230);
  SetColourBank3(0, 230, 230);
  SetColourBank4(0, 230, 230);
}

void SoftFadeDownPurpleBank(){
  SetColourBank1(230, 0, 230);
  SetColourBank2(230, 0, 230);
  SetColourBank3(230, 0, 230);
  SetColourBank4(230, 0, 230);
  delay(ShortDelay);
  SetColourBank1(210, 0, 210);
  SetColourBank2(210, 0, 210);
  SetColourBank3(210, 0, 210);
  SetColourBank4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1(190, 0, 190);
  SetColourBank2(190, 0, 190);
  SetColourBank3(190, 0, 190);
  SetColourBank4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1(170, 0, 170);
  SetColourBank2(170, 0, 170);
  SetColourBank3(170, 0, 170);
  SetColourBank4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1(150, 0, 150);
  SetColourBank2(150, 0, 150);
  SetColourBank3(150, 0, 150);
  SetColourBank4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1(130, 0, 130);
  SetColourBank2(130, 0, 130);
  SetColourBank3(130, 0, 130);
  SetColourBank4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1(110, 0, 110);
  SetColourBank2(110, 0, 110);
  SetColourBank3(110, 0, 110);
  SetColourBank4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1(90, 0, 90);
  SetColourBank2(90, 0, 90);
  SetColourBank3(90, 0, 90);
  SetColourBank4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1(70, 0, 70);
  SetColourBank2(70, 0, 70);
  SetColourBank3(70, 0, 70);
  SetColourBank4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1(50, 0, 50);
  SetColourBank2(50, 0, 50);
  SetColourBank3(50, 0, 50);
  SetColourBank4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1(30, 0, 30);
  SetColourBank2(30, 0, 30);
  SetColourBank3(30, 0, 30);
  SetColourBank4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1(10, 0, 10);
  SetColourBank2(10, 0, 10);
  SetColourBank3(10, 0, 10);
  SetColourBank4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0);
}

void SoftFadeUpPurpleBank(){
  SetColourBank1(0, 0, 0);
  SetColourBank2(0, 0, 0);
  SetColourBank3(0, 0, 0);
  SetColourBank4(0, 0, 0); 
  delay(ShortDelay);
  SetColourBank1(10, 0, 10);
  SetColourBank2(10, 0, 10);
  SetColourBank3(10, 0, 10);
  SetColourBank4(10, 0, 10);
  delay(ShortDelay);
  SetColourBank1(30, 0, 30);
  SetColourBank2(30, 0, 30);
  SetColourBank3(30, 0, 30);
  SetColourBank4(30, 0, 30);
  delay(ShortDelay);
  SetColourBank1(50, 0, 50);
  SetColourBank2(50, 0, 50);
  SetColourBank3(50, 0, 50);
  SetColourBank4(50, 0, 50);
  delay(ShortDelay);
  SetColourBank1(70, 0, 70);
  SetColourBank2(70, 0, 70);
  SetColourBank3(70, 0, 70);
  SetColourBank4(70, 0, 70);
  delay(ShortDelay);
  SetColourBank1(90, 0, 90);
  SetColourBank2(90, 0, 90);
  SetColourBank3(90, 0, 90);
  SetColourBank4(90, 0, 90);
  delay(ShortDelay);
  SetColourBank1(110, 0, 110);
  SetColourBank2(110, 0, 110);
  SetColourBank3(110, 0, 110);
  SetColourBank4(110, 0, 110);
  delay(ShortDelay);
  SetColourBank1(130, 0, 130);
  SetColourBank2(130, 0, 130);
  SetColourBank3(130, 0, 130);
  SetColourBank4(130, 0, 130);
  delay(ShortDelay);
  SetColourBank1(150, 0, 150);
  SetColourBank2(150, 0, 150);
  SetColourBank3(150, 0, 150);
  SetColourBank4(150, 0, 150);
  delay(ShortDelay);
  SetColourBank1(170, 0, 170);
  SetColourBank2(170, 0, 170);
  SetColourBank3(170, 0, 170);
  SetColourBank4(170, 0, 170);
  delay(ShortDelay);
  SetColourBank1(190, 0, 190);
  SetColourBank2(190, 0, 190);
  SetColourBank3(190, 0, 190);
  SetColourBank4(190, 0, 190);
  delay(ShortDelay);
  SetColourBank1(210, 0, 210);
  SetColourBank2(210, 0, 210);
  SetColourBank3(210, 0, 210);
  SetColourBank4(210, 0, 210);
  delay(ShortDelay);
  SetColourBank1(230, 0, 230);
  SetColourBank2(230, 0, 230);
  SetColourBank3(230, 0, 230);
  SetColourBank4(230, 0, 230);
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

void AllBankFadeInOutRed(){
  SoftFadeUpRedBank();
  SoftFadeDownRedBank();
}

void AllBankFadeInOutGreen(){
  SoftFadeUpGreenBank();
  SoftFadeDownGreenBank();
}

void AllBankFadeInOutBlue(){
  SoftFadeUpBlueBank();
  SoftFadeDownBlueBank();
}

void AllBankFadeInOutYellow(){
  SoftFadeUpYellowBank();
  SoftFadeDownYellowBank();
}

void AllBankFadeInOutAqua(){
  SoftFadeUpAquaBank();
  SoftFadeDownAquaBank();
}

void AllBankFadeInOutPurple(){
  SoftFadeUpPurpleBank();
  SoftFadeDownPurpleBank();
}

void AllBankRed(){
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
    AllBankFadeInOutRed();
    AllBankFadeInOutGreen();
    AllBankFadeInOutBlue();
    AllBankFadeInOutYellow();
    AllBankFadeInOutAqua();
    AllBankFadeInOutPurple();
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
