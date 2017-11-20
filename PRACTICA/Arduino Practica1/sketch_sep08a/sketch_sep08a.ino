// PARPADEO DE LED

void setup() {
  pinMode(13, OUTPUT);    //INDICO AL PIN 13 QUE ES DE SALIDA.

}

void loop() {
  digitalWrite(13, HIGH); // ENCENDEMOS EL LED.
  delay(1000);            // ESPERAMOS 1 SEGUNDO.
  digitalWrite(13, LOW);  // APAGAMOS EL LED.
  delay(1000); 
}
