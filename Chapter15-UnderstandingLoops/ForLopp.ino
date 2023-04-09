int YellowPin =6;
int redPin=9;
int delayTime=1000;
void setup(){
 pinMode(YellowPin,OUTPUT);
 pinMode(redPin,OUTPUT);

}
void loop(){
    for(int i=0; i<=5 ; i++){
        digitalWrite(YellowPin,HIGH);
        delay(delayTime);
        digitalWrite(YellowPin,LOW);a
    }

    for(int j=0 ; j<=2 ; j++){
        digitalWrite(redPin,HIGH);
        delay(delayTime);
        digitalWrite(redPin,LOW);
    }
}