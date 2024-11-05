#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;       // muuttuja auton merkille
    string model;       // muuttuja auton mallille
    int yearModel;      // muuttuja auton vuosimallille
public:
    Car();
    void printData();                           // tulostaa auton tiedot
    void setBrand(const string &newBrand);      // asettaa auton merkin
    void setModel(const string &newModel);      // asettaa auton mallin
    void setYearModel(int newYearModel);        // asettaa auton vuosimallin
};

#endif // CAR_H
