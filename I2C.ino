#include <Wire.h>

int x = 0;
void setup() 
{
  Wire.begin(); // join i2c bus (address optional for master)
  Serial.begin(9600);
}



void loop()
{ Wire.beginTransmission(8);
  Wire.write(x);
  Wire.endTransmission(8);
  Wire.requestFrom(8,1);
  while(Wire.available())
  {x = Wire.read();
  Serial.println(x);
  }
  x=x+1;
  delay(1000);
  
}
