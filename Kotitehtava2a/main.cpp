#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // Vaihe 1: Car-luokka, pinomuisti, automaattinen olio

    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Avensis");
    objCar.setYearModel(2008);
    objCar.printData();


    // Vaihe 2: Rectangle-luokka, kekomuisti, pointer -olio

    Rectangle *objRectangle = new Rectangle;

    objRectangle->setWidth(6.3);
    objRectangle->setHeight(5.5);

    // tulostetaan suorakulmion tiedot
    cout<<"--------------------------"<<endl;
    cout<<"Information about the Rectangle"<<endl;
    cout<<"Area: "<<objRectangle->getArea()<<endl;      // tulostaa pinta-alan
    cout<<"Circum: "<<objRectangle->getCircum()<<endl;  // tulostaa ympärysmitan
    cout<<"--------------------------"<<endl;

    // poistetaan olio kekomuistista
    delete objRectangle;
    objRectangle=nullptr;


    // luodaan uusi olio toisella constructorilla

    Rectangle *objRectangle1 = new Rectangle(7.5, 8.3); // syötetään oliolle leveys ja korkeus valmiiksi parametreissa

    // tulostetaan suorakulmion tiedot
    cout<<"--------------------------"<<endl;
    cout<<"Information about the Rectangle"<<endl;
    cout<<"Area: "<<objRectangle1->getArea()<<endl;      // tulostaa pinta-alan
    cout<<"Circum: "<<objRectangle1->getCircum()<<endl;  // tulostaa ympärysmitan
    cout<<"--------------------------"<<endl;

    // poistetaan olio kekomuistista
    delete objRectangle1;
    objRectangle1=nullptr;


    // Vaihe 3: Student-luokka, kekomuisti, smartpointer -olio

    unique_ptr<Student> objStudent = make_unique<Student>();

    // Settereiden avulla annetaan opiskelijalle nimi, opiskelijanumero ja keskiarvo
    objStudent->setName("Tiina Tivoli");
    objStudent->setStudentNumber(121314);
    objStudent->setAverage(3.5);

    // tulostetaan opiskelijan tiedot Gettereiden avulla
    cout<<"--------------------------"<<endl;
    cout<<"Information about the Student"<<endl;
    cout<<"Name: "<<objStudent->getName()<<endl;
    cout<<"Student number: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Average: "<<objStudent->getAverage()<<endl;
    cout<<"--------------------------"<<endl;

    return 0;
}
