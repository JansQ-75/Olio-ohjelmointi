#include "car.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    // luodaan vektori, lista luodaan pinomuistiin
    vector<Car> carList;

    // luodaan kolme oliota
    Car objCar0("Toyota", "Avensis", 2010);
    Car objCar1("Volvo", "V70", 2018);
    Car objCar2("Skoda", "Octavia", 2008);

    // lisätään oliot listaan carList
    carList.push_back(objCar0);
    carList.push_back(objCar1);
    carList.push_back(objCar2);

    // tulostetaan toisen alkion tiedot
    cout<<"Information about the 2nd car"<<endl;
    carList[1].printData();
    cout<<"****************************************"<<endl;

    // tulostetaan autojen tiedot
    for(int i=0; i<3; i++) {
        cout<<"Information about the car "<<i<<endl;
        carList[i].printData();
    }

    // Halusin testata smart-pointterin käyttöä
    // Tässä siis versio 2, jossa lista tulee kekomuistiin


    // luodaan vektori, lista luodaan kekomuisiin smartpointterina
    unique_ptr<vector<Car>> carList2 = make_unique<vector<Car>>();

    // luodaan kolme oliota
    Car objCar4("Toyota", "Corolla", 2020);
    Car objCar5("Volvo", "V60", 2009);
    Car objCar6("Opel", "Astra", 2015);

    // lisätään oliot listaan carList2
    carList2->push_back(objCar4);
    carList2->push_back(objCar5);
    carList2->push_back(objCar6);

    // Haetaan lista carList2-osoittimesta
    vector<Car>& cars = *carList2;

    // Tulostetaan kekomuistissa olevien autojen tiedot
    for(int j=0; j<3; j++) {
        cout<<"Information about the HEAP car "<<j<<endl;
        // käytetään autolistan elementtiä 'cars' ja kutsutaan 'printData()' -funktiota
        cars[j].printData();
    }


    return 0;
}
