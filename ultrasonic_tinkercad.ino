double dist,duration;
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
pinMode(12,OUTPUT);
  digitalWrite(12,LOW);
  delayMicroseconds(2);
  digitalWrite(12,HIGH);
  delayMicroseconds(10);
  digitalWrite(12,LOW);
  pinMode(12,INPUT);
  duration=pulseIn(12,HIGH);
duration=duration*pow(10,-6);
dist=duration*340*100/2;
dist=dist*0.394;
  Serial.print("\ndistance in inches : ");
  Serial.print(dist);


}