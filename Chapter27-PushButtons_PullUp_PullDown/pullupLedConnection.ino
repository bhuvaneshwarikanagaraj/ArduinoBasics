int readValue=10;
int digiVal;
int ledPin=8;

void setup(){
pinMode(readValue,INPUT);
pinMode(ledPin,OUTPUT);
Serial.begin(9600);

}

void loop(){
    digiVal=digitalRead(readValue);
    Serial.println(digiVal);
    if(digiVal==0){
        digitalWrite(ledPin,HIGH);
        //ref the circuit diagram for doubts
    }
    if(digiVal==1){
        digitalWrite(ledPin,LOW);
        //Its low , if any doubts ref the diagram
    }

}