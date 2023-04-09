int j=1;
int DelayTime=1000;
string My_String ="j= ";

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.println(My_String)
    Serial.println(j);
    j=j+1;
    delay(DelayTime);
}