#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;       // määrittää suorakulmion leveyden
    double height;      // määrittää suorakulmion korkeuden
public:
    Rectangle();                        // muodostin
    Rectangle(double, double);          // toinen muodostin, parametrien kanssa
    double getArea();                   // laskee suorakulmion pinta-alan
    double getCircum();                 // laskee suorakulmion ympärysmitan
    void setWidth(double newWidth);     // asettaa suorakulmion leveyden
    void setHeight(double newHeight);   // asettaa suorakulmion korkeuden
};

#endif // RECTANGLE_H
