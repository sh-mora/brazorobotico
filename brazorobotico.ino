
#include <Servo.h>

#define pinBase 12 //defino el nombre y pin de la base

Servo motorBase; //declara el servo de la base
 

void setup() {
  // put your setup code here, to run once:

motorBase.attach(pinBase);
motorBase.write(0);
delay(2000);//espere dos segundos
motorBase.write(90);
delay(2000);//espere dos segundos
motorBase.write(180 );
delay(2000);//espere dos segundos
}

void loop() {
  // put your main code here, to run repeatedly:

}
