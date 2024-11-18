#include "car.h"

// Getterit ja Setterit auton mallille ja merkille
string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

//konstruktori
Car::Car() {}

// konstruktori, parametreina merkki ja malli
Car::Car(string m, string b)
{
    model=m;    // konstruktorin m -arvo asetetaan auton malliksi
    brand=b;    // konstruktorin m -arvo asetetaan auton merkiksi
}

// funktio moottorin tietojen asettamiseen
void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

// funktio renkaiden tietojen asettamiseen
void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

// funktio, jolla tulostetaan auton tiedot
void Car::printDetails()
{
    cout<<"Auton tiedot:"<<endl;
    cout<<endl;
    cout<<"Merkki: "<<brand<<", Malli: "<<model<<endl;
    cout<<endl;
    cout<<"Moottori"<<endl;
    cout<<"Hevosvoimat: "<<objEngine.getHorsepower()<<" hp, Moottorintilavuus: "<<objEngine.getDisplacement()<<" L"<<endl;
    cout<<endl;
    cout<<"Renkaat"<<endl;
    cout<<"Rengas 1: Koko "<<objWheel1.getSize()<<" tuumaa, Tyyppi "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2: Koko "<<objWheel2.getSize()<<" tuumaa, Tyyppi "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3: Koko "<<objWheel3.getSize()<<" tuumaa, Tyyppi "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4: Koko "<<objWheel4.getSize()<<" tuumaa, Tyyppi "<<objWheel4.getType()<<endl;
}

