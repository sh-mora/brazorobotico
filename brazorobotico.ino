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
  Serial.begin(9600);

}

int i;
char s[6];

void loop(){


    if(Serial.available()>0&&Serial.available()<6);
    { Serial.readBytes(s,6);
        switch(s[0])
        { 
          case 'B' :   motorBase.attach(pinBase);
                       motorBase.write(((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48)*1));//limite de 0 a 180
                       delay(2000);//espere dos segundos
                       break;

         case 'G' :  motorPinza.attach(pinPinza);
                     motorPinza.write(((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48)*1));//limite de 0 a 35
                     delay(2000);//espere dos segundos
                     break;

         case 'D' :  motorA.attach(pinA);
                     //motorA.write(90);
         
                     motorA.write(((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48)*1));//limite de 45 a 100
                     delay(2000);//espere dos segundos
                     break;

         case 'I' : motorAB.attach(pinAB);
                    motorAB.write(((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48)*1));//limite de 10 a 100
                    delay(2000);//espere dos segundos
                    break;
        };
        Serial.print(s);
    }
    delay(500);
}
 
