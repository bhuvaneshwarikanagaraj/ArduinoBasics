int PinNumber=8;
int dt1=1;
int dt2=2;

void setup(){
    Serial.begin(9600);
    pinMode(PinNumber,OUTPUT);

}
void loop(){
    for(int i=0 ; i<=100; i++){
        digitalWrite(PinNumber,HIGH);
        delay(dt1);
        digitalWrite(PinNumber,LOW);
        delay(dt2);
    }
        for(int j=0 ; j<=100; j++){
        digitalWrite(PinNumber,HIGH);
        delay(dt1);
        digitalWrite(PinNumber,LOW);
        delay(dt2);
    }

}

