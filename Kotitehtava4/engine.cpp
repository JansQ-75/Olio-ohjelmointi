#include "engine.h"

// Getterit ja Setterit hevosvoimille ja m.tilavuudelle
int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

// konstruktori
Engine::Engine() {}

// konstruktori, parametreina hevosvoimat ja m.tilavuus
Engine::Engine(int hp, double d)
{
    horsepower=hp;      // konstruktorin hp -arvo asetetaan hevosvoimiksi
    displacement=d;     // konstruktorin d -arvo asetetaan m.tilavuudeksi
}
