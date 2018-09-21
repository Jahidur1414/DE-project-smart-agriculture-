#include <Servo.h>
Servo servo;
int led=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
 servo.attach(8);
 servo.write(0);
}

void loop() {
  int i;
  for(i = 5; i <= 190; i++)
  {
    servo.write(i);
    if(i>180)
    {
      digitalWrite(led, HIGH);
    }
    if(i<180)
    {
      digitalWrite(led, LOW);
    }
    delay(5);
  }
  delay(500);
  for(i = 190; i >= 5; i--)
  {
    servo.write(i);
    if(i>180)
    {
      digitalWrite(led, HIGH);
    }
    if(i<180)
    {
      digitalWrite(led, LOW);
    }
    delay(5);
  }
  delay(500);
}
