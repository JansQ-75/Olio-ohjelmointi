#include "rectangle.h"

// Setter suorakulmion leveydelle
void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

// Setter suorakulmion korkeudelle
void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

// muodostin (constructor) oliolle Rectangle
Rectangle::Rectangle() {}

// toinen muodostin oliolle Rectangle
// leveys ja korkeus annetaan valmiiksi parametreissa
Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

// funktio joka laskee suorakulmion pinta-alan kaavalla leveys*korkeus
// palauttaa lasketun pinta-alan
double Rectangle::getArea()
{
    double area = width*height;
    return area;

}

// funktio joka laskee suorakulmion ympärysmitan kaavalla 2*(leveys+korkeus)
// palauttaa lasketun ympärysmitan
double Rectangle::getCircum()
{
    double circum = 2*(width + height);
    return circum;

}
