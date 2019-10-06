double dist,duration;
volatile int distance;
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  pinMode(2,INPUT);
  duration=pulseIn(2,HIGH);
duration=duration*pow(10,-6);
dist=duration*340*100/2;
dist=dist*0.394;
 
  attachInterrupt(0,checkdist,CHANGE);

  Serial.print("\ndistance in inches : ");
  Serial.print(dist);
}

void checkdist()
{ distance=map((int)dist,20,50,0,1);
  digitalWrite(13,distance);
}