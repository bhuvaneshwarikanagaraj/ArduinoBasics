#include <Servo.h>
Servo myServo;//Creating a object named myServo
int servoPin=9;
int servoPos;
//Servo Library only 9 and 10 Digitalpin


void setup(){
    Serial.begin(9600);
    myServo.attach(servoPin);
}

void loop(){
    Serial.print("Enter the Angle : ");
    if(Serial.available==0){

        //do Nothing
    }
    myServo.write(Serial.parseInt());
}