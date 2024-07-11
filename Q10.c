

// wright a program to interface button and led so that led blinks/glow when button is pressed


int button=7;
int led=12;

void setup(){

    pinMode(button,INPUT);
    pinMode(led,OUTPUT)
}

void loop(){

    int buttondtate=digitalRead(button)

    if(buttondtate==HIGH){
        digitalWright(led,HIGH)
    }
    else{
        digitalWright(led,LOW)
    }
}