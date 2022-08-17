#include <LiqudCrystal.h>
int cs;
int ls;
int rs;
int lmt1 = 5;
int lmt2 = 3;
int rmt1 = 6;
int rmt2 = 11;

void setup() {
  lcd.begin(16, 2);
  pinMode (7, INPUT);
  pinMode (8, INPUT);
  pinMode (9, INPUT);
  pinMode (lmt1,OUTPUT);
  pinMode (lmt2,OUTPUT);
  pinMode (rmt1,OUPUT);
  pinMode (rmt2,OUTPUT);

}

void loop() {
  ls = digitalRead(7);
  cs = digitalRead(8);
  rs = digitalRead(9);




if(ls == "HIGH" && cs == "LOW" && rs == "HIGH")
{ 
  right();
  lcd.setCursor(0,0);
  lcd.print("Going to park");
}
else if(ls == "LOW"  && cs == "HIGH" && rs == "LOW")
{
   left();
}

else if(ls == "HIGH" && cs == "HIGH" && rs == "HIGH")
{
  forward();
}
else if(ls == "LOW" && cs == "LOW" && rs == "LOW")
{
  stop();
}
else if(ls == "HIGH" && cs == "LOW" && rs == "LOW")
{
  reverse();
}
else if(ls == "LOW" && cs == "LOW" && rs == "HIGH")
{
  reverse();
}
else if(ls == "HIGH" && cs == "HIGH" && rs == "LOW")
{
  reverse();
  delay(200);
  left();
  delay(200);
}
else if(ls == "LOW" && cs == "HIGH" && rs == "HIGH")
{
  reverse();
  delay(200);
  right();
  delay(200);
  lcd.setCursor(0,1);
  lcd.print("Reached spot");

}
