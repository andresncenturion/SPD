void setup() {
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 Serial.begin(9600);
 Serial.println("Inicializando");
}

void loop() {
  
  
  digitalWrite(3,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  Serial.println(3,"Inciando pin 3");
  delay(250);
  

  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  Serial.println(3,"Inciando pin 3");
  delay(250);
  
  
  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(3,LOW);
  Serial.println(3,"Inciando pin 3");
  delay(250);

  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  Serial.println(3,"Inciando pin 3");
  delay(250);
 
  
  
  

}
