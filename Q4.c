

// wright a program to display scrolling text nilit hq scrolling from left to right and then right to left on 16*2 lcd display


#include <LiquidCrystal.h>

#define del 200

LiquidCrystal lcd(12,11,10,9,8,7)

int i=0,j=0;

void setup(){
    lcd.begin(16,2)
}

void loop(){

    for (j=-9; j<=16; j++){

        lcd.setCursor(j,i)
        lcd.print("nilit hq");
        delay(del);
        lcd.clear();
    }


    for(j=16; j>=-9;j--){

        lcd.setCursor(j,i)
        lcd.print("nilie hq")
        delay(del)
        lcd.clear()
    }
}