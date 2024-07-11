
// wright a program to interface led at nay two pwm pins and exhibit led fading

int bright=0

void setup(){

    pinMode(10,OUTPUT)
    pinMode(6,OUTPUT)
}

void loop(){

    analogwright(10,bright)
    analogwright(6,bright)

    bright=bright+5

    if((bright==0)|| (bright==255)){

        bright=-bright
    }

    delay(50)
}