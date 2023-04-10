int BuzPinNumber=9;
int potPinNumber=A1;
int tone_Value;
int pot_Value;

void setup(){
    pinMode(BuzPinNumber,OUTPUT);
    pinMode(potPinNumber,INPUT);
}
void loop(){
    pot_Value=analogRead(A1);
    tone_Value=(9940.0/1023.0)*(pot_Value)+60;
    digitalWrite(BuzPinNumber,HIGH);
    delayMicroseconds(tone_Value);
    digitalWrite(BuzPinNumber,LOW);
}