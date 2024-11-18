#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>

using namespace std;

class Wheel
{
private:
    int size;           // muuttuja rengaskoolle
    string type;        // muuttuja rengastyypille
public:
    Wheel();                                // konstruktori
    Wheel(int, string);                     // konstruktori, parametreina rengaskoko ja -tyyppi
    int getSize() const;                    // Getter rengaskoolle
    void setSize(int newSize);              // Setter rengaskoolle
    string getType() const;                 // Getter rengastyypille
    void setType(const string &newType);    // Setter rengastyypille
};

#endif // WHEEL_H
