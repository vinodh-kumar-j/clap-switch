#include <Servo.h>
//vk boom
//https://www.youtube.com/channel/UCV4eCjHVpH2XRIfaQipFHmg/videos
Servo myservo;
int Sensor = 2;
int clap = 0;


int angle =90;  
int angleStep =180;
void setup()

{
pinMode(Sensor, INPUT);
myservo.attach(9);
}

void loop() 
{

if (millis>= 500)
{
if (clap == 1)
{
      angle = angle - angleStep;
       if(angle < 0){
        angle = 0;
       }
}
else if (angle >= 0 && angle <= 180)
{
 
      angle = angle + angleStep;
      if(angle >180){
        angle =180;
       }
}
}
clap = 0;
}
