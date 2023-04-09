int PotpinNumber=A2;
int LedPinNumber=6;
int PotValue=0;
float LedValue=0;
int delayTime=1000;

void setup(){
    pinMode(PotpinNumber,INPUT);
    pinMode(LedPinNumber,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    PotValue=analogRead(A2);
    LedValue=(255/1023)*val;
    analogWrite(LedPinNumber,LedValue);
    Serial.println(v);
    delay(delayTime);

    //Two case,
    // Case1) Truning to Left ---->0
    // Case2) Turing to Right ---->1

}