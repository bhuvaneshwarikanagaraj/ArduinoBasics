int myNo;
int delayTime=1000;
string msg ="Please Enter your Roll Number";
void setup(){
    Serial.begin(9600);
}

void loop(){
    Serial.println(msg);
    delay(delayTime);
    while(Serial.available()==0){
        //do Nothing ...We wait to fetch the data

    }
    myNo=Serial.parseInt();
    Serial.println(myNo);
}












Serial.parseInt()