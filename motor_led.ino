int LED1=7;
int LED2=8;
int m1=13;
int m2=4;
int b1=11;
int b2=5;

void setup() 
{
 
  

  
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);

}

void loop()
{

  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, HIGH);   
  digitalWrite(m1, HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(b2,LOW);
  delay(4000); 
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW);   
  digitalWrite(m1, LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(m2, HIGH);
  digitalWrite(b2,LOW);
  delay(4000);
  digitalWrite(LED1, HIGH);
  digitalWrite(m1,HIGH);
  digitalWrite(b1,HIGH);
  delay(4000);
  digitalWrite(LED1, LOW);
  digitalWrite(m1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(LED1, HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(b2,HIGH);

}

