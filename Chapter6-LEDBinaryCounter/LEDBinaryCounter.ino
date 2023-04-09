int PinNumber1=2;
int PinNumber2=3;
int PinNumber3=4;
int PinNumber4=5;
int delayVariable=1000;
void setup() {
  
  pinMode(PinNumber,OUTPUT);
}

Void Loop{

//0

  digitalWrite(PinNumber1, LOW);                     
  digitalWrite(PinNumber2, LOW);
  digitalWrite(PinNumber3, LOW); 
  digitalWrite(PinNumber4, LOW); 
  delay(delayVariable); 
  
//1


  digitalWrite(PinNumber1, LOW);                     
  digitalWrite(PinNumber2, LOW);
  digitalWrite(PinNumber3, LOW); 
  digitalWrite(PinNumber4, HIGH); 
  delay(delayVariable);

//2
  
  digitalWrite(PinNumber1, LOW);                     
  digitalWrite(PinNumber2, LOW);
  digitalWrite(PinNumber3, HIGH); 
  digitalWrite(PinNumber4, LOW); 
  delay(delayVariable); 

//3

  digitalWrite(PinNumber1, LOW);                     
  digitalWrite(PinNumber2, LOW);
  digitalWrite(PinNumber3, HIGH); 
  digitalWrite(PinNumber4, HIGH); 
  delay(delayVariable); 

//4


  digitalWrite(PinNumber1, LOW);                     
  digitalWrite(PinNumber2, HIGH);
  digitalWrite(PinNumber3, LOW); 
  digitalWrite(PinNumber4, LOW); 
  delay(delayVariable);  


//5


  digitalWrite(PinNumber1, HIGH);                     
  digitalWrite(PinNumber2, LOW);
  digitalWrite(PinNumber3, LOW); 
  digitalWrite(PinNumber4, LOW); 
  delay(delayVariable); 

}
