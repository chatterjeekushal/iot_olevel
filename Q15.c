

// wright a program to interface lcd with arduino board and display congratulation on it

#includ <LiquidCristal.h>

LiquidCristal lcd(12,11,10,8)

void setup(){

lcd.begin(16,2)
lcd.print("hello")

}