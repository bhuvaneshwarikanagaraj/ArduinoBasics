int PotpinNumber=A2;
int LedPinNumber=5;
int val=0;
int delayTime=1000;

void setup(){
    pinMode(PotpinNumber,INPUT);
    pinMode(LedPinNumber,OUTPUT);

}

void loop(){
    val=analogRead(A2);
    while(val>1000){
        digitalWrite(LedPinNumber,HIGH);

    }
    delay(delayTime);
}
