#include <LiquidCrystal.h>

LiquidCrystal lcd(12,10,6,7,8,9);

void setup() {
  Serial.begin(9600) ;
  lcd.begin(16, 2);
  lcd.setCursor(0,0) ;
  lcd.print("Please put in:");
  delay(10000);
}

void loop() {

  if(Serial.available ()>0)
  {
    lcd.clear();
    lcd.setCursor(0,1) ;
    lcd.print (Serial.readString()) ;
  }
}
