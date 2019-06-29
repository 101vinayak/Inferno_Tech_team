#ifndef Invkin_h

#define Invkin_h

#include "Arduino.h"



class Invkin

{

   public:
   
    Invkin(float,float,float);

    void transform();    
    
    float theta3,theta1,theta2,im,r3;
   
    float X,Y,Z ;
    
    
    private:
    
    void trigono_xyz(float , float , float );
    
    const float a1=23; 
    const float a2=40; 
    const float a3=30; 
    
    float L, L1;        
};



#endif
