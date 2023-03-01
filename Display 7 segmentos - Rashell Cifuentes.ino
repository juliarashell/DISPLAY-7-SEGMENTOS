#include "GFButton.h"//libreria para la conf de los botones
 
// asignan pines a los PushButton
GFButton buttonA(9); // ascender
GFButton buttonB(11);//descender

//almacenar valores
int input;
int i=0; 

// intefaz serial
void setup() {
  Serial.begin(9600); 
}
 
 // configuracion del buttonA / ascendente
void loop() {
  if (buttonA.isPressed()) { 
    Serial.println(F("PushButton Ascendete, presionado"));

    //enciende el display de forma ascendente 2-9
    CERO();
    delay(300);//tiempo de encendido
    UNO();
    delay(300);
    DOS();
    delay(300);
    TRES();
    delay(300);
    CUATRO();
    delay(300);
    CINCO();
    delay(300);
    SEIS();
    delay(300);
    SIETE();
    delay(300);
    OCHO();
    delay(300);
    NUEVE();
    delay(300);
    
  }
 
   // configuracion del buttonB / descendente
  if (buttonB.wasPressed()) {
    Serial.println(F("PushButton Descendete, presionado"));

    //enciende el display de forma descendente 9-2
    NUEVE();
    delay(300); //tiempo de encendido
    OCHO();
    delay(300);
    SIETE();
    delay(300);
    SEIS();
    delay(300);
    CINCO();
    delay(300);
    CUATRO();
    delay(300);
    TRES();
    delay(300);
    DOS();
    delay(300);
    UNO();
    delay(300);
    CERO();
    delay(300);
  }

  encender();
}
//impresion del numero en el display
void CERO(){
  //enciende los segmentos correspondientes al numero entero
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(300); // tiempo de encendido
//apaga los segmentos, para que pueda encender el siguiente numero entero
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
}

void UNO(){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
}

void DOS(){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
}

void TRES(){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
}

void CUATRO(){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
}

void CINCO(){
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
}

void SEIS(){
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
}

void SIETE(){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
}

void OCHO(){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
}

void NUEVE(){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
}

//imprime el numero entero en el monitor serial
void encender(){
  if (Serial.available()>0){ // obtiene el numero de bytes disponibles para la lectura del puerto de serie
 
 // lee el monitor
    input=Serial.read();
    if (input=='0'){ 
      Serial.println(F("Numero ingresado: 0")); //imprime el numero ingresado en el monitor
      CERO(); //llama a la funcion 0
    }
    
    if (input=='1'){
      Serial.println(F("Numero ingresado: 1"));
      UNO();
    }
 
    if (input=='2'){
      Serial.println(F("Numero ingresado: 2"));
      DOS();
    }

    if (input=='3'){
      Serial.println(F("Numero ingresado: 3"));
      TRES();
    }

    if (input=='4'){
      Serial.println(F("Numero ingresado: 4"));
      CUATRO();
    }

    if (input=='5'){
      Serial.println(F("Numero ingresado: 5"));
      CINCO();
    }

    if (input=='6'){
      Serial.println(F("Numero ingresado: 6"));
      SEIS();
    }

    if (input=='7'){
      Serial.println(F("Numero ingresado: 7"));
      SIETE();
    }

    if (input=='8'){
      Serial.println(F("Numero ingresado: 8"));
      OCHO();
    }

    if (input=='9'){
      Serial.println(F("Numero : 9"));
      NUEVE();
    }
}
}