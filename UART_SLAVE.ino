#include <SoftwareSerial.h>
int f = 0;
int tx=4,rx=2;
SoftwareSerial mysrl(rx,tx);
char c;
void setup()
{
  Serial.begin(9600);
pinMode(tx,OUTPUT);
pinMode(rx,INPUT);
mysrl.begin(9600);

}

void loop()
{

if(Serial.available())
{
 c=Serial.read();
 mysrl.write(c);
}
if(mysrl.available())
{
 c=mysrl.read();
 Serial.write(c);
}

}
