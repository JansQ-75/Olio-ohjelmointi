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
    Car(string, string, int);                // muodostin, jossa tiedot annetaan parametreissa
    void printData();                           // tulostaa auton tiedot

};

#endif // CAR_H
