#include <Servo.h>

#define pinBase 12//defino el nombre y pin de la base
#define pinA 11 //defino el nombre y pin de servo derecho(adelante atras)
#define pinAB 10 //defino el nombre y pin de servo izquiero (arriba abajo)
#define pinPinza 9 //defino el nombre y pin de la pinza

Servo motorBase; //declara el servo de la base
Servo motorA;   //declara el servo de servo derecho(adelante atras)
Servo motorAB;  //declara el servo deservo izquiero (arriba abajo)
Servo motorPinza; //declara el servo de la pinza
 

void setup() {
  // put your setup code here, to run once:

//Base
  motorBase.attach(pinBase);
  motorBase.write(0);
  delay(2000);//espere dos segundos
  motorBase.write(180);
  delay(2000);//espere dos segundos
  motorBase.write(90 );
  delay(2000);//espere dos segundos


//servoderecho(adelante atras)

  motorA.attach(pinA);
  motorA.write(180);
  delay(2000);//espere dos segundos
  motorA.write(45);
  delay(2000);//espere dos segundos
  motorA.write(90 );
  delay(2000);//espere dos segundos



//servo izquierdo(arriba abajo)
  motorAB.attach(pinAB);
  motorAB.write(10);
  delay(2000);//espere dos segundos
  motorAB.write(45);
  delay(2000);//espere dos segundos
  motorAB.write(100 ); //hasta 100
  delay(2000);//espere dos segundos



//pinza
  
  motorPinza.attach(pinPinza);
  motorPinza.write(0);
  delay(2000);//espere dos segundos
  motorPinza.write(90);
  delay(2000);//espere dos segundos
  motorPinza.write(0);
  delay(2000);//espere dos segundos
 




}

void loop() {
  // put your main code here, to run repeatedly:

}
