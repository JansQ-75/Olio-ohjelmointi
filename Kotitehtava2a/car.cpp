#include "car.h"

// Setter auton merkkiä varten
void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

// Setter auton mallia varten
void Car::setModel(const string &newModel)
{
    model = newModel;
}

// Setter auton vuosimallia varten
void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

// muodostin (constructor) oliolle Car
Car::Car() {}

// Tulostaa auton tiedot
Car::Car(string, string, string)
{

}

void Car::printData()
{
    cout<<"Information about the Car"<<endl;
    cout<<"Brand: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year model: "<<yearModel<<endl;

}
