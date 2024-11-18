#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

using namespace std;

class Engine
{
private:
    int horsepower;         // muuttuja hevosvoimille
    double displacement;    // muuttuja moottorintilavuudelle
public:
    Engine();                                       // konstruktori
    Engine(int, double);                            // konstruktori, parametreina hevosvoimat ja m.tilavuus
    int getHorsepower() const;                      // Getter hevosvoimille
    void setHorsepower(int newHorsepower);          // setter hevosvoimille
    double getDisplacement() const;                 // Getter m.tilavuudelle
    void setDisplacement(double newDisplacement);   // setter m.tilavuudelle
};

#endif // ENGINE_H
