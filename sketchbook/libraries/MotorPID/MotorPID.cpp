#include "Arduino.h"
#include "MotorPID.h"


MotorPID::MotorPID(int pin1 , int pin2 , char m,int a) {
  
  pinMode(pin1, OUTPUT);  // pwm
  pinMode(m,INPUT);       //dir
  pinMode(pin2, OUTPUT);  //analog potentiometer
 
  pwm = pin1 ;        
  dir = pin2 ;    
  analog = m ;        
  
 last_error = 0;
 error = 0;
 changeError = 0;
 totalError = 0;
 pidTerm = 0;    
 pidlow = a ; 
   
}


void MotorPID::errorcheck(){        
  int pot = analogRead(analog);      
  setpoint = x ;    
  angle = map(pot,0,1023,0,3600); //count to angle conversion
  PIDcalculation(); // find PID value 
 
  
  if (angle < setpoint) {
    digitalWrite(dir, HIGH); // Forward motion
    Serial.println(pidTerm_scaled);  
    analogWrite(pwm, pidTerm_scaled);
  }
    
  else  {
    digitalWrite(dir, LOW); //Reverse motion
    Serial.println(pidTerm_scaled);  
    analogWrite(pwm, pidTerm_scaled);
  }   
}

void MotorPID::PIDcalculation(){  
  error = setpoint - angle;  
  Serial.print("Error calc:");
  Serial.println(error);
  changeError = error - last_error; // derivative term
  totalError += error;              //accumalate errors to find integral term
  pidTerm = (Kp * error) + (Ki * totalError) + (Kd * changeError);//total gain
  pidTerm = constrain(pidTerm, -1*pidlow,pidlow ); //constraining to appropriate value
  pidTerm_scaled = abs(pidTerm); //to make sure it's a positive value
  last_error = error;

}


/*
void MotorPID::move_safe(){
  int pot = analogRead(analog);      
  setpoint = x ;    
  angle = map(pot,0,1023,0,3600); //count to angle conversion
  PIDcalculation(); 
  touch = digitalRead(limiter);
  
  if(touch == 0 ) {
    if(angle==0){Serial.println("---------check potentiometer connections-----);} 
    else{                            
    errorcheck();   
    }
  }
  else{
   Serial.println("-----------limit reached-------------");
   if(angle<limit){errorcheck();}
   else{}    
}
*/


void MotorPID::setPID(float kp , float ki , float kd){
    
    Kp = kp ;
    
    Ki = ki ;
    
    Kd = kd ;  
     
} 
