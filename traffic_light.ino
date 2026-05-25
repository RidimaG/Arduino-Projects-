int red = 12;
int yellow = 9;
int green = 8;

void setup()
{
  pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
  
}

void loop() 
{
  changeLights();
    delay(5000);
}
void changeLights(){
    
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);
     
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(2000);
    
    digitalWrite(yellow, HIGH);
    delay(2000);
    
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(2000);
}

