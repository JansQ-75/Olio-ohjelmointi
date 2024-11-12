#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal                   // perittävänä luokkana Animal. Pääsy Animal luokan public- ja protected -jäseniin.
{
public:
    Dog();
    virtual void callOut() override;        // ylikirjoittaa Animal luokan callOut -funktion
};

#endif // DOG_H
