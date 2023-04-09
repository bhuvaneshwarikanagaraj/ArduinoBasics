int YellowPin =6;
int redPin=9;
int delayTime=1000;
void setup(){
 pinMode(YellowPin,OUTPUT);
 pinMode(redPin,OUTPUT);
 Serial.begin();

}
void loop(){
    for(int i=0; i<=5 ; i++){
    Serial.println("hello");
    digitalWrite(redPin,HIGH);
    delay(delayTime);
    digitalWrite(redPin,LOW);
    }

}