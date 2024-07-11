
// wright a program to interface button ,buzzer and led whenever the button is pressed the button the buzzer gives beep of 100ms and led status is glow

int button=7;
int led=12;
int buzzer=8;

void setup(){

    pinMode(button,INPUT)
    pinMode(led,OUTPUT)
    pinMode(buzzer,OUTPUT)
}

void loop(){

    int buttonstate=digitalRead(button)

    if(buttondtate==1){
        digitalWright(led,HIGH)
        delay(100)
        digitalWright(buzzer,HIGH)
    }
    else{
        digitalWright(led,LOW)
        digitalWright(buzzer,LOW)
    }
}