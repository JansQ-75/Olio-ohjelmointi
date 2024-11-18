#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    // luodaan Car luokan objekti
    Car objCar("Toyota", "Corolla");
    objCar.setEngine();                 // kutsutaan setEngine funktiota asettamaan moottorin tiedot
    objCar.setWheels();                 // kutsutaan setWheels funktiota asettamaan renkaiden tiedot
    objCar.printDetails();              // tulostetaan auton tiedot printDetails funktiolla

    return 0;
}
