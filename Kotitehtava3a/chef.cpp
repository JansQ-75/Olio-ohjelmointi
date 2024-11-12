#include "chef.h"

// konstruktori, jossa parametrina kokin nimi
Chef::Chef(string n) {
    name = n;                                       // sijoitetaan konstruktorille annettu parametri muuttujaan 'name'
    cout<<"Olio nimelta "<<name<<" luotiin"<<endl;  // tulostus debuggausta varten
}

//
void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" tekee salaattia"<<endl;  // tulostus debuggausta varten

}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" tekee keittoa"<<endl;    // tulostus debuggausta varten
}

Chef::~Chef()
{
    cout<<"Olio "<<name<<" tuhottiin"<<endl;        // tulostus debuggausta varten
}
