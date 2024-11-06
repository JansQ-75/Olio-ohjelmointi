#include "car.h"

// muodostin, jossa auton tiedot parametreissa
Car::Car(string b, string m, int ym) {
    brand = b;
    model = m;
    yearModel = ym;
}

// Tulostaa auton tiedot
void Car::printData()
{
    cout<<"Brand: "<<brand<<endl;           // tulostaa auton merkin
    cout<<"Model: "<<model<<endl;           // tulostaa auton mallin
    cout<<"Year model: "<<yearModel<<endl;  // tulostaa auton vuosimallin

}
