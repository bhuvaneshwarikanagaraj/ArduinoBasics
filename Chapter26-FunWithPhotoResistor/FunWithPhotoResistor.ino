int photoPin=A1;
int BuzzerPin=8;
int Tv;
int Lv;
 void setup(){
    pinMode(BuzzerPin,INPUT);
    pinMode(photoPin,OUTPUT);
    Serial.begin(9600);
 }
 void loop(){
    Lv=analogRead(photoPin);
    Serial.println(Lv);
    Tv=(0.016*Lv)-2.2;
    digitalWrite(BuzzerPin,HIGH);
    delay(Tv);
    digitalWrite(BuzzerPin,LOW);
    delay(Lv);
    
 }