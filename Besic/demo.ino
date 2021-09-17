#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,4,5,6,7);
int tmps=A0;
float c;
float f;
float value;
void setup() {
  lcd.begin(16,2);
 
  
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(A0);
  c=(5.0*value*100)/1024.0;
  f=((value*9)/5)+32;
  lcd.setCursor(0,0);
  lcd.print("TempC=");
   lcd.setCursor(0,1);
  lcd.print("TempF=");
  lcd.setCursor(7,0);
  lcd.print(c);
  lcd.print("'C");
  lcd.setCursor(7,1);
  lcd.print(f);
  lcd.print("'F");
  delay(1000);

}