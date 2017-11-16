int noiseFloor = 0;
int noiseRoof;
int actualNoise;
int startFlag = 0;
int recFlag = 0;
int wFlag = 0;
int i = 0;
int cont = 0;
unsigned long pass[3];
unsigned long k0;
unsigned long auxK;
float tolerance = 1.15;

void setup() 
{
  Serial.begin (9600);
  pass[0]=0;
  pass[1]=0;
  pass[2]=0;
}

void loop() 
{
  if (startFlag == 0)
  {
  startFlag = 1;
  noiseFloor = analogRead (A0);
  noiseRoof = noiseFloor * tolerance;
  Serial.println ("Ingrese nuevo password de 4 golpes");
  }
  else
  {
  actualNoise = analogRead (A0);
  if (actualNoise > noiseRoof)
    {
      if (recFlag == 0)
      {
        recFlag = 1;
        k0 = millis ();
        delay (300);
      }
      else
      {
      auxK = millis ();
      auxK = auxK - k0;
      pass[i] = auxK;
      i++;
      delay (300);
      }
    }
  }
  if (pass[2] != 0 && wFlag == 0)
  {
  wFlag = 1;
  Serial.println (pass[0]);
  Serial.println (pass[1]);
  Serial.println (pass[2]);
  Serial.println ("Password guardado correctamente");
  }
}
