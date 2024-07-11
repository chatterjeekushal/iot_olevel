

// wright a program to interface led on pin no 10,11,12,13 and blink alternative at the delay of 1 src


void setup(){

    pinMode(10,OUTPUT)
    pinMode(11,OUTPUT)
    pinMode(12,OUTPUT)
    pinMode(13,OUTPUT)
}


void loop(){

    int led;

    for(led=10; led<=13; led++){

        digitalWright(led,HIGH)
        delay(1000)
        digitalWright(led,LOW)
        delay(1000)
    }
}