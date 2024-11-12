#include "chef.h"
#include "italianchef.h"

#include <iostream>
using namespace std;


int main()
{
    // Luodaan Chef luokan olio

    Chef objectChef("Gordon Ramsay");
    objectChef.makeSalad();             // kutsutaan luokan julkista funktiota
    objectChef.makeSoup();              // kutsutaan luokan julkista funktiota

    cout<<endl;                     // tyhjän rivin tulostus, luettavuuden vuoksi

    // Luodaan ItalianChef luokan olio

    ItalianChef objectItalianC("Anthony Bourdain");
    objectItalianC.makeSalad();                         // kutsutaan Chef luokan julkista funktiota
    objectItalianC.makeSoup();                          // kutsutaan Chef luokan julkista funktiota
    objectItalianC.makePasta();                         // kutsutaan luokan omaa julkista funktiota
    cout<<"Taman kokin nimi on "<<objectItalianC.getName()<<endl;   // käytetään 'getName' funktiota nimen tulostuksessa

    return 0;
}
