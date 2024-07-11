
// wright a program to word "hello" in arduino using lcd 16x2

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,9,8,7)

void setup(){

    lcd.begin(16,2)

    lcd.print("hello world");
}

void loop(){
    
}