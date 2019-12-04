#include <Servo.h>
Servo myservo;
int pos = 0; //variable que guarda la posicion del servo.
int buttonState = 0; //Accion de boton on/off
const int buttonPin = 2; // pin del boton

void setup() {
  myservo.attach(9);//sets the digital pin to 5
  pinMode(buttonPin, INPUT); // initializa el pushbutton como entrada de datos.
}

void loop() {
  //myservo.write(0);
  toClosed();
  toOpen();
  
  
}

void toClosed(){
  for(pos = 0;pos <= 78;pos+=1){  //forCycle that positions the servo each 15ms
    myservo.write(pos);
    delay(15);  //espera 15ms para que servo se cambie de posicion.
  }
}

void toOpen(){
  for(pos = 78;pos >= 0;pos-=1){//forCycle that positions the servo each 15ms
    myservo.write(pos);
    delay(15);
  }
}
