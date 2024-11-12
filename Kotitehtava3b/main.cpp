#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    // luodaan Animal luokan olio
    Animal *objAnimal=new Animal;
    objAnimal->callOut();           // kutsutaan callOut -funktiota

    // luodaan Dog luokan olio
    Dog *objDog=new Dog;
    objDog->callOut();              // kutsutaan callOut -funktiota, joka on ylikirjoitettu Animal luokasta

    // poistetaan Animal ja Dog luokkien oliot
    delete objAnimal;
    objAnimal=nullptr;
    delete objDog;
    objDog=nullptr;



    return 0;
}
