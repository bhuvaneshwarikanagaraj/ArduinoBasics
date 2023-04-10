int BuzPinNumber=8;
int potPinNumber=A2;
int Value;
void setup(){
    Serial.begin(9600);
    pinMode(BuzPinNumber,OUTPUT);
    pinMode(potPinNumber,INPUT);
}
void loop(){
    Serial.println("Hi Reading Pot Value");
    Value=analogRead(A2);
    Serial.println(Value);
    if(potPinNumber>1000) {
        digitalWrite(PinNumber,HIGH);
        delay(500);
        digitalWrite(PinNumber,LOW)
    }
}

