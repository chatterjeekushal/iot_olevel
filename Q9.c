

// wright a program to interface buzzer with arduino boad to buzz on/off with the delay of 1 sec

void setup(){

    pinMode(8,OUTPUT)
}

void loop(){

    digitalWright(8,HIGH)
    delay(1000)
    digitalWright(8,LOW)
    delay(1000)
}