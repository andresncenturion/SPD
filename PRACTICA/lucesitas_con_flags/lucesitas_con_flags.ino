void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop() 
{
  int i=0,flag=0;

  if(flag==0)
  {
  analogWrite(3,i);
  i++;if(i==255)
  {
  flag=1;
  }
  delay(10);
  }
  
  
  
  if(flag==1)
  {
  analogWrite(3,i);
  i--;}
  if(i==0)
  {
  flag=0;
  delay(10);
  }
  i=0;
  
}
