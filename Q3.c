

// wright a program to sense obstacles closer than meter in an ir sensor interfaced with arduino uno

const int irsensor= A0;

const float voltsPerCentimeter=0.0049

void setup(){

    serial.begin(9600);

}

void loop(){

    int sensorvalue= analogRead(irsensor)

    float distanceincentimeters=1.0/(sensorvalue*voltsPerCentimeter);

    if(distanceincentimeters <100){

        serial.printin("obstacle detected at")
        serial.printin(distanceincentimeters)
        serial.printin("cm")
    }
    else{
        serial.printin("no obstacle detected ")
    }

    delay(1000)
}