int pinNumber=A2;
int val=0;
float voltage=0;
int delayTime=1000;

void setup(){
    pinMode(A2,INPUT);
    Serial.begin(9600);
}

void loop(){
    val=analogRead(A2);
    v=(5.0/1023)*val;
    Serial.println(v);
    delay(delayTime);

    //Two case,
    // Case1) Truning to Left ---->0
    // Case2) Turing to Right ---->1

}