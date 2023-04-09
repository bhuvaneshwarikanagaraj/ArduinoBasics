int PinNumber=8;
int delayVariable=100;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PinNumber);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PinNumber, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(delayVariable);                      // wait for a second
  digitalWrite(PinNumber, LOW);   // turn the LED off by making the voltage LOW
  delay(delayVariable);                      // wait for a second
}
