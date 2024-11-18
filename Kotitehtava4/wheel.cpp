#include "wheel.h"

// Getterit ja Setterit rengaskoolle ja -tyypille
int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

// konstruktori
Wheel::Wheel() {}

// konstruktori, parametreina rengaskoko ja -tyyppi
Wheel::Wheel(int s, string t)
{
    size=s;     // konstruktorin s -arvo asetetaan rengaskooksi
    type=t;     // konstruktorin t -arvo asetetaan rengastyypiksi
}
