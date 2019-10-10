#include <Wire.h>
int x=0;
void setup() 
{
  Wire.begin(8);               
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  Serial.begin(9600);         
}

void loop() 
{
 ;
}

void receiveEvent(int howMany) 
{
  while (Wire.available()) 
  { 
  x = Wire.read();
  Serial.println(x);
  }
  x=x+1;
}

void requestEvent()
{
Wire.write(x);
}
