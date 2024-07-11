

// wright an arduino program to interface a temperature monitoring system in a public environment which will sisplay information on 16*2 lcd the display should show "fever" if temp is greater than 60.6 deg and no fever if temp is below 60.6 deg

#include <LiquidCrystal.h>
#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT22

DHT dht(DHTPIN,DHT22)

LiquidCrystal lcd(12,11,5,4,3,2)

void setup(){

    lcd.begin(16,2);
    dht.begin();
}


void loop(){

    float temp= dht.readTemperature();

    lcd.setCursor(0,0)

    lcd.print("Temp");

    lcd.print(temp);

    lcd.print("c");

    lcd.setCursor(0,1);

    if(temp>60.6){

        lcd.print("fever")
    }
    else{
        lcd.print("no fever")
    }

    delay(500)
}


