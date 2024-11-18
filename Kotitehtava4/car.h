#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"


class Car
{
private:
    Engine objEngine;       // Engine luokan olio moottorin tietoja varten
    Wheel objWheel1;        // Wheel luokan olio renkaan tietoja varten
    Wheel objWheel2;        // Wheel luokan olio renkaan tietoja varten
    Wheel objWheel3;        // Wheel luokan olio renkaan tietoja varten
    Wheel objWheel4;        // Wheel luokan olio renkaan tietoja varten
    string model;           // muuttuja auton mallia varten
    string brand;           // muuttuja auton mallia varten
public:
    Car();                                  //konstruktori
    Car(string, string);                    // konstruktori, parametreina merkki ja malli
    void setEngine();                       // funktio moottorin tietojen asettamiseen
    void setWheels();                       // funktio renkaiden tietojen asettamiseen
    void printDetails();                    // funktio, jolla tulostetaan auton tiedot
    string getModel() const;                // Getter auton mallille
    void setModel(const string &newModel);  // Setter auton mallille
    string getBrand() const;                // Getter auton merkille
    void setBrand(const string &newBrand);  // Setter auton merkille
};

#endif // CAR_H
