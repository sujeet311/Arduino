#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 5, 4, 3, 2);
int pin= A0;
float sum = 0;
float r = 2*3.1416*3;
 void setup ()
 {
  Serial.begin(9600);
 lcd.begin(2, 20);
  
  
 }
void loop()
{
   int count = digitalRead(A0);
  lcd.setCursor(0,0);
lcd.print(" Distance (cm)");
lcd.setCursor(0,1);

  

  if (count == HIGH)
  {
  
    
   lcd.print(sum );
   sum = sum + r;
delay(1000);



    
  }
}

