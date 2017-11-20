#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);
int i = 0;
int a = 0; // COLUMNA
int b = 0; // FILA
void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(a , b);
  lcd.print(i);
  delay(250);
  a++;
  if(a >= 16)
  {
    a = 0;
    b = 1 - b;
  }
  if(b == 1 && a == 16) //RESETEA
  {
    a = 0;
    b = 0;
  }
  lcd.clear();
}
