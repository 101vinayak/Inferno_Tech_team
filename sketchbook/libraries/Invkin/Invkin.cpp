#include "Arduino.h"
#include "Invkin.h"
Invkin::Invkin(float x,float y,float z){
    X =  x ;
    Y =  y ;
    Z =  z ;   
}

void Invkin::transform()
{
    

    
trigono_xyz(X,Y,Z); //contoh x,y,z
    
Serial.print("theta1= ");
Serial.print(theta1);
Serial.print(", theta2= ");
Serial.print(theta2);
Serial.print(", theta3= ");
Serial.print(theta3);    
Serial.println();
    
}

void Invkin::trigono_xyz(float X, float Y, float Z)
{
    
 theta1 = (atan(Y/X))*180/PI;

    r3 = sqrt(X*X + Y*Y + (Z-a1)*(Z-a1));

    theta2 = (atan((Z-a1)/(sqrt(X*X+Y*Y)))+acos((a2*a2 + r3*r3 - a3*a3)/(2*a2*r3)))*180/PI;

    im = acos((a3*a3 + a2*a2 - r3*r3)/(2*a2*a3))*(180/PI);    
    theta3 = -1*(180 - im);
    
}
