
// 


const int ledpin=12;
const int idrpin=A0;

void setup(){

    serial.begin(9600)
    pinMode(ledpin,OUTPUT);
    pinMode(ledpin,INPUT);
}

void loop(){

    int idrstatus=analogRead(idrpin)

    if(idrstatus<100){

        digitalWright(ledpin,HIGH);
        serial.print("its dark")
        serial.printin(idrstatus)
    }
    else if(idrstatus>=100 && idrstatus<600){

        digitalWright(ledpin,LOW);
        serial.print("it is average light")
        serial.printin(idrstatus)
    }
    else{
        digitalWright(ledpin,LOW)
        serial.print("its is a pretty good light");
        serial.printin(idrstatus)
    }
}