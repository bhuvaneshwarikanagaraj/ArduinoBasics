int photoPin=A1;
int lightval;
int d1=23;
 void setup(){
    pinMode(photoPin,OUTPUT);
 }
 void loop(){
    lightval=analogRead(photoPin);
    Serial.println(lightval);
 }