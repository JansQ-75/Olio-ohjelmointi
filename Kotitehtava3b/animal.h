#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
public:
    Animal();
    virtual ~Animal();          // destruktori, joka mahdollistaa olioiden kunnollisen poiston myös aliluokan osalta
    virtual void callOut();
};

#endif // ANIMAL_H
