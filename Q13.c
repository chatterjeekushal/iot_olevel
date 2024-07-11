
// wright a program to interface light dependent resistor ldr and led with arduino boad whenever there is sufficient light falls on ldr the led is off and when there is dark around ldr the led is put on


int lderpin=A0;

int led=12;

void setup(){

    serial.begin(9600)
    pinMode(led,OUTPUT)
}

void loop(){

    int lderpinstate=analogRead(lderpin)

    if(lderpinstate>100){

        digitalWright(led,LOW)
        serial.print("light fales")
    }
    else{
        digitalWright(led,HIGH)
        serial.print("dark")
    }
}
