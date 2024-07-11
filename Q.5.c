

// wright a program to interface led and buzzer with arduino bord keeping the condition that whenever led gloves there is a buzzer rining and when led is off then buzzer is also put on off


int ledpin=13;
int buzzpin=9;

void setup(){

    pinMode(ledpin,OUTPUT)
    pinMode(buzzpin,OUTPUT)
}

void loop(){

    int ledstate=digitalRead(ledpin)

    if(ledstate==HIGH){

        digitalWrite(buzzpin,HIGH);
    }
    else{

        digitalWrite(buzzpin,LOW)
    }
}