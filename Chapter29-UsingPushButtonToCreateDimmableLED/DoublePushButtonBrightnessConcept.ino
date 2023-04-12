int pushbutton1=2;
int pushbutton2=3;
int buttonVal1;
int buttonVal2;
int ledpin=5;
int brightness=0;

void setup(){
    pinMode(pushbutton1,INPUT);
    pinMode(pushbutton2,INPUT);
    pinMode(ledpin,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    buttonVal1=digitalRead(pushbutton1);
    buttonVal2=digitalRead(pushbutton2);
    Serial.print(buttonVal1);
    Serial.println(buttonVal2);
        if(brightness<0){
        brightness=0;
        analogWrite(ledpin,brightness);
    }
    if(brightness>255){
        brightness=255;
        analogWrite(ledpin,brightness);
    }
        if(buttonVal1==0){
        brightness=brightness+5;
        analogWrite(ledpin,brightness);
    }
    if(buttonVal2==0){
        brightness=brightness-5;
        analogWrite(ledpin,brightness);
    }

}