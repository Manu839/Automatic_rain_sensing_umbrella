# include<Servo.h>
int rain_sensor =A0,servo =3;
const int buzzer = 9;
int gg=0;

Servo myServo;
void setup ()
{
Serial.begin (9600);
myServo.attach(servo);
myServo.write(0);
pinMode(buzzer, OUTPUT);
}
void loop()
{
int sensorvalue=analogRead(rain_sensor);


if(sensorvalue>750){
myServo.write(180);
  
if(gg==0){
  tone(buzzer, 10000); // Send 1KHz sound signal...
  delay(100);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
   noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
   noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
   noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
  gg=1;
}
}else
{
  gg=0;
  myServo.write(0);
}

}