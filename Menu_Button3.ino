#include <LiquidCrystal.h>
int rs = 13, e = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
int button1=7, button2=6 , button3=5;
int state1=0, cntr=0,state2=0 , state3=0;


void setup() 
{
  pinMode (button1,INPUT_PULLUP);
  pinMode (button2,INPUT_PULLUP);
  pinMode (button3,INPUT_PULLUP);
  lcd.begin(16, 2);
  
  lcd.print(" Welcome ");
 
  delay(1000);
   lcd.clear();
 
}

void loop()
{
  state1= digitalRead(button1);
  state2= digitalRead(button2);
  state3= digitalRead(button3);
  lcd.setCursor(0,0);
  lcd.print(cntr);
 /*1*/ 
 if (state1==LOW )
  {
  
  delay(10);
  state1= digitalRead(button1);
  
       
    if (state1 == HIGH)   
       {
        cntr++;
          if (cntr>=9)
           {
            cntr=9;
            }
        delay(500);
        } 
  }
/*2*/
  state2=digitalRead(button2);

  if (state2==LOW)
  {
    if(cntr==0)
     {
      lcd.setCursor(2,1);
      lcd.print("WEEKEND");
      delay(100);
      }
     if(cntr==1)
     {
      lcd.setCursor(2,1);
      lcd.print("MONDAY");
      delay(100);
      }
      if(cntr==2)
     {
      lcd.setCursor(2,1);
      lcd.print("TUESDAY");
      delay(100);
      }
      if(cntr==3)
     {
      lcd.setCursor(2,1);
      lcd.print("WEDNESDAY");
      delay(100);
      }
      if(cntr==4)
     {
      lcd.setCursor(2,1);
      lcd.print("THURSDAY");
      delay(100);
      }
      if(cntr==5)
     {
      lcd.setCursor(2,1);
      lcd.print("FRIDAY");
      delay(100);
      }
      if(cntr==6)
     {
      lcd.setCursor(2,1);
      lcd.print("SATURDAY");
      delay(100);
      }
      if(cntr==7)
     {
      lcd.setCursor(2,1);
      lcd.print("SUNDAY");
      delay(100);
      }
  
  }
  

/*3*/
    if (state3==LOW )
  {
  
  delay(10);
  state3= digitalRead(button3);
  
       
    if (state3 == HIGH)   
       {
        cntr--;
          if (cntr<=0)
           {
            cntr=0;
            }
        delay(500);
        } 
  }
  
}

