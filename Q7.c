
// wright a program to blink defult light emitting diode on arduino board with the delay of 2 sec.


void setup(){
    pinMode(13,OUTPUT)
}

void loop(){

    digitalWright(13,HIGH);
    delay(2000)
    digitalWright(13,HIGH);
    delay(2000)
}