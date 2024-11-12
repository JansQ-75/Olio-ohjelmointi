#include "italianchef.h"

// konstruktori, parametrina kokin  nimi. Kutsutaan perittävän luokan konstruktoria
ItalianChef::ItalianChef(string n) : Chef(n) {
    cout<<"Olio italiaano luotiin"<<endl;           // tulostus debuggausta varten
}

// funktio, joka antaa palautusarvona kokin nimen
string ItalianChef::getName()
{
    string chefName = name;
    return chefName;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" tekee pastaa"<<endl;     // tulostus debuggausta varten
}



ItalianChef::~ItalianChef()
{
    cout<<"Olio italiaano tuhottiin"<<endl;         // tulostus debuggausta varten
}
