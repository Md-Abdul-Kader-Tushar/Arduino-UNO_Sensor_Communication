#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 8, 2);
void setup() {
 
  
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
 
  
}

void loop() {
  
  //int i,j;

  //for(i=0;i<5;i++)
//{  
 

int x = analogRead(A1);
int y = analogRead(A2);
int z = analogRead(A0);

Serial.println("1st:    ");
Serial.println(x);
Serial.println("2nd:   ");
Serial.println(y);
Serial.println("\n");
Serial.println(z);


lcd.setCursor(0, 1);

  if( 35 > x && 20 >y && 300 < z )
  {
    
  lcd.print("Normal");
  digitalWrite(13,LOW);
  
  //lcd.clear();
  }
  else if(x >35 && 20 > y && 300 < z)
{
  lcd.print("Calling Service");
  
 
  //lcd.clear(); 
  digitalWrite(13,LOW);
  tone(3,500,100);
  
  lcd.clear();
}
  else if(x <35 && 20 < y && 300 < z)
{
  lcd.print("Come Fast");
  
  
  //lcd.clear();
  tone(3,500,100);
  
  lcd.clear();
  
}

  
  else if ( 35 < x && 20 < y && 300 < z)
  {
    //tone(7,800,10);
    //delay(100);
 
    //tone(7,800,10);
    //delay(100);
    //tone(7,800,10);
  
  digitalWrite(13,HIGH);
  
 
 
  lcd.print("EMERGENCY");
    tone(3,500,100);
    //tone(3,770,100);
    //delay(150);
    //tone(3,960,100);
  
 
 // lcd.clear();
  
  }
  else if (35 > x && 20 >y && 300 > z)
  {
    lcd.print("Clear");
    
    //lcd.clear();
    tone(3,500,100);
    digitalWrite(13,LOW);
    
  //lcd.clear();
  }
  
 delay(1000);
  
}
