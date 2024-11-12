#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef     // perii luokan Chef
{
public:
    ItalianChef(string);        // konstruktori, parametrina kokin nimi
    string getName();           // public funktio
    void makePasta();           // public funktio
    ~ItalianChef();             // dekonstruktori
};

#endif // ITALIANCHEF_H
