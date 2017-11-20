#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);
int valor = 0;
int a = 0;

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.clear();
  int boton = botonPre();
  switch(boton)
  {
    case 1:
     a += 10;
     lcd.print(a);
     break;
    case 2:
     a++;
     lcd.print(a);
     break;
    case 3:
     a--;
     lcd.print(a);
     break;
    case 4:
     a -= 10;
     lcd.print(a);
     break;
    case 5:
     a = 0;
     lcd.print(a);
     break;
    default:
     lcd.print(a);  
  }
  delay(250);
}

int botonPre()
{
    int valor = analogRead(A0);
    
    if(valor < 50) return 1;
    if(valor < 195) return 2;
    if(valor < 380) return 3;
    if(valor < 555) return 4;
    if(valor < 790) return 5;

    else return -1;
}
