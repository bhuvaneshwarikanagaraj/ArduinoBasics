int pin1=2;
int pin2=3;
int pin3=4;
string msg="What colour do you want?";
string colour;

void setup(){

Serial.begin(9600);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3, OUTPUT);

}
void loop(){
    Serial.println(msg);
    while(Serial.available()==0){

        //Do nothing
    }
    colour=Serial.readString();
    if(colour == "red"){
    digitalWrite(pin1,HIGH);
    digitalWrite(pin1,LOW);
    digitalWrite(pin1,LOW);
    delay(1000);
    }
    if(colour == "Aqua"){
    digitalWrite(pin1, LOW);
    analogWrite(pin2,255);
    analogRead(pin3,255);
    delay(1000);
    }
    if(colour =="Magenta"){
    
    analogWrite(pin1,255);
    analogWrite(pin2,0);
    analogWrite(pin3,100);
    }


}