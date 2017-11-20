int estado = 0;
int estadoAnterior = 0;
int salida = 0;

void setup() {
  pinMode(8,INPUT);
  pinMode(7,OUTPUT);
}

void loop() {

  estado = digitalRead(8);
  
  if((estado == 1) && (estadoAnterior == 0))
  {
    salida = 1 - salida;
    delay(20);
  }

  estadoAnterior = estado;

  if(salida == 1)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }
  
}
