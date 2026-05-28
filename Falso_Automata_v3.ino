
//-----------------------------------   Servo
#include <Servo.h> 

Servo servo1 , servo2 , servo3 , servo4 , servo5 , servo6;
int pos, compases, A, B, C, D, E, F; 

//------------------------------------  Botones
const int buttonPin = 0;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup(){ 
  pinMode(buttonPin, INPUT);     

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
  pos = 0;

  A = int(random(6));
  B = int(random(6));
  C = int(random(6));
  D = int(random(6));
  E = int(random(6));
  F = int(random(6));

} 

void loop(){
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {     
    A = 1;
    B = 1;
    C = 1;
    D = 1;
    E = 1;
    F = 1;
  } 




  if(compases % 16 == 0){
    int sorteo = int(random(1));
    if(sorteo == 1){
      A = 1;
    }
    else{
      D = 1;    
    }
  }

  //---------------------------------------------Posicion ACTIVA
  for(pos = 0; pos <= 180; pos += 3){ 
    if (A == 1)       servo1.write(pos);     
    if (B == 1)       servo2.write(pos);   
    if (C == 1)       servo3.write(pos); 
    if (D == 1)       servo4.write(pos); 
    if (E == 1)       servo5.write(pos);   
    if (F == 1)       servo6.write(pos);  
    delay(5);               
  } 
  //---------------------------------------------Posicion REPOSO
  for(pos = 180; pos >= 0; pos -= 3){                                
    if (A == 1)      servo1.write(pos);    
    if (B == 1)      servo2.write(pos);     
    if (C == 1)      servo3.write(pos);     
    if (D == 1)      servo4.write(pos);    
    if (E == 1)      servo5.write(pos);    
    if (F == 1)      servo6.write(pos);     
    delay(5); 
  } 

  A = int(random(4));
  B = int(random(4));
  C = int(random(4));
  D = int(random(4));
  E = int(random(4));
  F = int(random(4));
  compases++;

  delay(50);
} 




