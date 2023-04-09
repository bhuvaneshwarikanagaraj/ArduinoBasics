int pinNumber=A3;
int delayVariable=1000;
int val=0;
float voltage=0;

void setup() {
  
  pinMode(PinNumber,INPUT);
}

// the loop function runs over and over again forever
void loop() {
    
val= analogRead(PinNumber);
Serial.println(val);
//Prints the Analog value


voltage=(5.0/1023)*val;  
Serial.println(voltage);
//Print the Volatge Value

delay(delayVariable); 
}
