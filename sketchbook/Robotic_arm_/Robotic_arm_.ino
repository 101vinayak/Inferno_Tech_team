#include <MotorPID.h>

int move ; 

MotorPID motor(5,28,A0,35); //shoulder

MotorPID motor1(3,22,A3,30); //elbow

int a = 0 ; //Link angle at set up shoulder

int b = 0; //Link angle at set up elbow

void setup() { put your setup code here, to run once:
  Serial.begin(9600);
  motor1.setPID(0.39,0.001,-0.002);
  motor2.setPID(0.25,0.001,0.02);
  motor1.x = a ;
  motor2.x = b ; 
}

void loop() {
  // put your main code here, to run repeatedly:  
  Serial.println("------Shoulder Motor---------");
  Serial.println(" ");
  motor.errorcheck();
  Serial.println("------Shoulder Motor---------");
  motor1.errorcheck();
  delay(1000);
 Serial.println(" move ?? "); 
 while(!Serial.available()){
 move = Serial.parseInt();

 if(move==0){}
 if(move==1){
  
  motor.x = motor.x + 20 ;

 }
 if(move==2){
  
  motor.x = motor.x - 20 ;

 }
 if(move==3){
  
  motor1.x = motor1.x + 20 ;

 }
 if(move==4){
  
  motor1.x = motor1.x - 20 ;

 }
 if(move==5){
  
  motor2.x = motor2.x + 20 ;
   
 }
 if(move==6){
  
  motor2.x = motor.x - 20 ;
 }
 /*if(move==7){
   motor.pidtermscaled = 0 ;
   motor.errorcheck() ; 
   }
  */ 
  
}
