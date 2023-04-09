int PotpinNumber=A2;
int LedPinNumber=5;
int val=0;
float voltage=0;
int delayTime=1000;

void setup(){
    pinMode(A2,INPUT);
    pinMode(5,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    val=analogRead(A2);
    voltage=(5.0/1023)*val;
    Serial.println(v);
    if(voltage>4.0){
        digitalWrite(LedPinNumber,HIGH);
    }
    if(Volatge<4.0){
        digitalWrite(LedPinNumber, LOW);

    }
    delay(delayTime);

}
    //Two case,
    // Case1) Truning to Left ---->0
    // Case2) Turing to Right ---->1

    //    if(voltage<4.0 && Volatge>3.5){
    //     digitalWrite(LedPinNumber,HIGH);
    // }
    // if(Volatge<4.0){
    //     digitalWrite(LedPinNumber, LOW);

    // }
    // delay(delayTime);