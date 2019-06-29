#include "MotorPID.h"
#include "Invkin.h"
int X , Y , Z ;
int move ; 

Invkin IK(70,0,23);

MotorPID motor(5,28,A0,35); //shoulder //23 , 0, 35

MotorPID motor1(3,22,A3,30); //elbow

int a = 1573 ; //Link angle at set up shoulder for potentiometer

int b = 1467; //Link angle at set up elbow for potentiometer

int a1 = 30 ;  // Link angle at that value 

int b1 = 60 ; //Link angle at that value 

void setup() { 
  Serial.begin(9600);
  motor.setPID(0.39,0.001,-0.002);
  motor1.setPID(0.25,0.001,0.02);
  motor.x = a + 5.5*a1 - 5.5*IK.theta2  ;  // + goes down relative to position now to zero to relative position
  motor1.x = b - 4*b1  - 4*IK.theta3 ;    // - goes up relative to position now to zero relative position
 
}

void loop() {
  // put your main code here, to run repeatedly:  
  IK.transform();
  motor.x = a + 5.5*a1 - 5.5*IK.theta2  ;  // + goes down relative to position now to zero to relative position
  motor1.x = b - 4*b1  - 4*IK.theta3 ; 
  Serial.println("------Shoulder Motor---------");
  Serial.println(" ");
  motor.errorcheck();
  Serial.println("------Elbow Motor---------");
  Serial.println(" ");
  motor1.errorcheck() ;
  delay(1000);
  Serial.println(" move ?? "); 
  Serial.println("X :   ");
  Serial.print(IK.X);
  Serial.print("  Y :   ");
  Serial.print(IK.Y);
  Serial.print("  Z :   ");
  Serial.print(IK.Z);
  while(Serial.available()){
  move = Serial.parseInt();
 if(move==0){}
 if(move==1){
  IK.X = IK.X + 1 ;
  
  //motor.x = motor.x + 5.5*IK.theta2  ;

 }
 if(move==2){
  IK.X = IK.X - 1 ;
  //motor.x = motor.x -5.5*Ik.theta2 ;

 }
 if(move==3){
  IK.Y = IK.Y + 1 ;
  //motor1.x = motor1.x + 4*IK.theta3 ;

 }
 if(move==4){
  IK.Y = IK.Y - 1 ;
  //motor1.x = motor1.x - 4*IK.theta3 ;

 }
 if(move==5){
  IK.Z = IK.Z + 1 ;
  //motor2.x = motor2.x + IK.theta3 ;
   
 }
 if(move==6){
  IK.Z = IK.Z - 1 ;
  //motor2.x = motor2.x - IK.theta3 ;
 }

  }
  
  
}
