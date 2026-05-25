#include <LiquidCrystal.h>
int rs = 13, e = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
int led1=7,led2=6,led3=5,state;
int buz=2,temp=A0;

void setup()
{
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(buz, OUTPUT);
  lcd.begin(20,4);
  lcd.print(" Welcome "); 
  delay(1000);
}

void loop() 
{
  state=analogRead(temp)/2;
  lcd.setCursor(0,0);
  lcd.print("Temperature is:");
  lcd.setCursor(5,1);
  lcd.print(state);

  if(state<=15)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    
    lcd.setCursor(3,3);
    lcd.print("SAFE   ");
    delay(1000);
    }
  if (state>15 && state<=25)
  {
    digitalWrite(led3,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    
    lcd.setCursor(3,3);
    lcd.print("CAUTION   ");
    delay(1000);
    }
  if(state>25)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    
    lcd.setCursor(3,3);
    lcd.print("RED ZONE");
    delay(1000);
    digitalWrite(buz,HIGH);
    delay(1000);
    }
  
}
