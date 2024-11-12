#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
protected:
    string name;        // muuttuja kokin nimeä varten
public:
    Chef(string);       // konstruktori
    void makeSalad();   // public funktio
    void makeSoup();    // public funktio
    ~Chef();            // destruktori
};

#endif // CHEF_H
