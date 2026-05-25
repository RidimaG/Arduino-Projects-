#include <LiquidCrystal.h>
int rs = 13, e = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
int bulb0=6, b1=5,s1=0,s2=0, prev;
void setup()
{
pinMode(bulb0,OUTPUT);
pinMode(b1, INPUT_PULLUP);
lcd.begin(16,2);
lcd.print(" Welcome ");
  delay(1000);
   lcd.clear();
  
}

void loop() 
{
 s1=digitalRead(b1);
  if (s1== HIGH)
  {
    if(prev==LOW)
     {
      prev=1;
      digitalWrite(bulb0,HIGH);
      }
     else
     {
      prev=0;
      digitalWrite(bulb0,LOW);
      }  
  delay(10);
  }
    /*lcd.clear();
    lcd.print("CASE1");
    lcd.setCursor(1,1);
   lcd.print("GLOW");
   digitalWrite(bulb0, HIGH);
   delay(500);
   }*/
   
   /*if (s== HIGH)
  {
    
    lcd.print("CASE2");
    lcd.setCursor(1,1);
   lcd.print("DARK");
   digitalWrite(bulb0, LOW);
   delay(500);
   }
   */
  
    
}
