int PinNumber=9;
int delayVariable=100;
int Brightness=255;
int MediumBrightness=125;
int NoBrightness=5;
//(0 ---> 255)
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PinNumber);
}

// the loop function runs over and over again forever
void loop() {
analogWrite(PinNumber,Brightness);
analogWrite(PinNumber,MediumBrightness);
analogWrite(pinMode,No NoBrightness);
}
