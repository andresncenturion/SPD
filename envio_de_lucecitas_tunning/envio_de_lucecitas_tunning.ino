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
  Serial.print(1);
  digitalWrite(4,LOW);
  Serial.print(0);
  digitalWrite(5,LOW);
  Serial.print(0);
  digitalWrite(6,LOW);
  Serial.println(0);
  delay(500);
  

  digitalWrite(3,LOW);
  Serial.print(0);
  digitalWrite(4,HIGH);
  Serial.print(1);
  digitalWrite(5,LOW);
  Serial.print(0);
  digitalWrite(6,LOW);
  Serial.println(0);
  delay(500);
  
  
  digitalWrite(3,LOW);
  Serial.print(0);
  digitalWrite(4,LOW);
  Serial.print(0);
  digitalWrite(5,HIGH);
  Serial.print(1);
  digitalWrite(6,LOW);
  Serial.println(0);
  delay(500);

  digitalWrite(3,LOW);
  Serial.print(0);
  digitalWrite(3,LOW);
  Serial.print(0);
  digitalWrite(3,LOW);
  Serial.print(0);
  digitalWrite(3,HIGH);
  Serial.println(1);
  delay(500);
 
  
  
  

}
