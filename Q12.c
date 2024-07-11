
// wright a program to interface light dependent resistor and display the valus read on the serial monitor after delay of 2 sec each


int idrpin=A0

void setup(){

    serial.begin(9600)
}

void loop(){

int serialvalue=analogRead(idrpin)

    serial.printin(idrpin)
    delay(2000)
}