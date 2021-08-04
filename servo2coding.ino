#include <Servo.h>

int i = 0,a=0;

Servo servo1,servo2;

void setup()
{
  servo1.attach(9); //servo1 sebelah kiri
 servo2.attach(8);//servo2 sebelah kanan

}

void loop()
{
//servo1 berputar 180 derajat
  for (i = 0; i <= 180; i += 1) //menentukan putran derajat
  {
    servo1.write(i);
    delay(15);// lama berhenti berputar
  }
  for (i = 180; i >= 0; i -= 1) //menentukan putran derajat
  {
    servo1.write(i);
  }
//akhirservo1

  
  
//servo2 berputar 360 draja

 for (a = 0; a <= 360; a += 1) //menentukan putran derajat
  {
    
      servo2.write(a);
    delay(15);// lama berhenti berputar
  }
  for (a = 360; a >= 0; a -= 1) //menentukan putran derajat
  {
    
    servo2.write(a);
  }
//akhirservo2
}