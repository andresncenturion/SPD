int estado = 0;
int estadoAnterior = 0;
int salida = 0;

void setup() {
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {

  estado = digitalRead(7);
  
  if((estado == 1) && (estadoAnterior == 0))
  {
    salida = 1- salida;
    //delay(0);
    digitalWrite(13, salida);
    delay(250);
  }

  estadoAnterior = estado;

  
  

 
  
  
}
