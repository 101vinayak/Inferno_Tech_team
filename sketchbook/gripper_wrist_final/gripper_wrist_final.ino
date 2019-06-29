
#include <Servo.h>
// create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo ;
Servo myservo1;

int pos = 0;    // variable to store the servo position
int move ;   // for incoming serial data
int pin1 = 3 ;
int pin2 = 6 ;
void setup() {
  Serial.begin(9600);
  // attaches the servo on pin 9 to the servo object
  pinMode(pin1 , OUTPUT); 
  pinMode(pin2 , OUTPUT);
  myservo.attach(9);
  myservo1.attach(11);
}


void move_up(){

 analogWrite(pin1,40);
 digitalWrite(pin2,HIGH);
 delay(1000); 
 
 
}

void move_down(){

 analogWrite(pin1,20);
 digitalWrite(pin2,LOW);
 delay(500); 

 
}






void loop() {

Serial.println("move??");
          

 analogWrite(pin1,10);
 digitalWrite(pin2,HIGH);


                move = Serial.parseInt();
                if(move==1){

                move_down();  
                  
                }

                if(move==2){

                move_up();
                }

                if(move==3){
                myservo.write(35);
                /*for(int i=90;i>=0;i=i-4)
                {/*
                  myservo.write(i);
                  delay(10);
                
                 delay(1300);
                 myservo.write(90);
                   
                */
                delay(400);
                myservo.write(90);
                }
                if(move==4)
                {/*
                  for(int j=100;j<180;j=j+4)
                    myservo.write(j);
                    delay(20);
                */
                myservo.write(120);
                delay(200);
                
                myservo.write(90);
                }
                if(move==5){
                myservo.write(90);
                  
                }
                if(move==6)
                {
                myservo1.write(110);
                delay(400);                
                myservo1.write(90);
                }
                if(move==7){
                myservo1.write(70);
                delay(400);
                myservo1.write(90);
                  
                }
                if(move==8){
                myservo1.write(90);
                
                }
                              

                  

              
}
