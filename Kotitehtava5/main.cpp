#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    // luodaan muuttujat a ja b
    int a = 5;
    int b = 10;

    // tulostetaan muuttujien arvot ja osoitteet
    cout<<"a:n arvo on "<<a<<" ja osoite on "<<&a<<endl;
    cout<<"b:n arvo on "<<b<<" ja osoite on "<<&b<<endl;
    cout<<endl;

    // luodaan pointermuuttuja 'myPointer', johon asetetaan a muuttujan osoite
    int* myPointer = &a;

    // tulostetaan pointterin osoite ja arvo
    cout<<"Pointterin osoittama osoite on "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on "<<*myPointer<<endl;
    cout<<endl;

    // vaihdetaan pointerin osoitteeksi b muuttujan osoite
    myPointer = &b;

    // tulostetaan uudelleen pointterin osoite ja arvo
    cout<<"Pointterin osoittama osoite on "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on "<<*myPointer<<endl;
    cout<<endl;

    // luodaan referenssi refA, joka viittaa muuttujaan a
    int &refA = a;

    // tulostetaan referenssin osoite ja arvo
    cout<<"refA osoittaa osoitteeseen "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on "<<refA<<endl;
    cout<<endl;

    // vaihdetaan referenssin viittaus muuttujaan b
    refA = b;

    // tulostetaan uudelleen referenssin osoite ja arvo
    // osoite pysyy a muuttujan osoitteena
    // mutta arvo muuttuu b:n arvoksi
    cout<<"Annetaan referenssille muuttujan b arvo, jolloin:"<<endl;
    cout<<"refA osoittaa osoitteeseen "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on "<<refA<<endl;
    cout<<"a:n uusi arvo on myos "<<a<<" ja osoite on "<<&a<<endl;
    cout<<endl;

    //Assosiaation esimerkki
    // B-olion data ei muutu, vaikka A-olion dataa muokataan

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<endl;

    // Aggregaation esimerkki
    // myös B-olion data muuttuu, kun muutetaan A-olion dataa
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;



    return 0;
}
