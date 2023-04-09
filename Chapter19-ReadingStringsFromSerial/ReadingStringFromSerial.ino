string myName;
string msg ="What is your Name?";
string msg2= "Hello";
string msg3=" , Wlecome to Arduino Sessions";

void setup(){
    Serial.begin(9600);
}
void loop(){
    Serial.println(msg);
    while(Serial.available==0){
        //Do Nothing ....just wait to fetch data
    }
    myName=Serial.readString();
    Serial.println(msg2);
    Serial.println(myName);
    Serial.println(msg3);
}
