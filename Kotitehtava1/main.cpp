#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int a, b;                                           // luodaan muuttujat lukuja varten
    cout << "Anna ensimmainen kokonaisluku:" << endl;   // kysytään käyttäjältä ensimmäistä lukua
    cin>>a;                                             // sijoitetaan käyttäjän syöttämä luku muuttujaan a
    cout << "Anna toinen kokonaisluku:" << endl;        // kysytään käyttäjältä toista lukua
    cin>>b;                                             // sijoitetaan käyttäjän syöttämä luku muuttujaan b

    cout << endl;                                       // luettavuuden vuoksi välilyönti

    calcSum(a, b);                                      // kutsutaan funtiota, joka tulostaa lukujen summan
    calcDiv(a, b);                                      // kutsutaan funtiota, joka tulostaa lukujen osamäärän

    cout << endl;                                       // luettavuuden vuoksi välilyönti

    cout << "palautettu lukujen summa: " << endl;
    cout << retSum(a,b) << endl;                        // kutsutaan funtiota, palautusarvona lukujen summa
    cout << "palautettu lukujen osamaara: " << endl;
    cout << retDiv(a,b) << endl;                        // kutsutaan funtiota, palautusarvona osamäärä tai virheilmoitus

    return 0;
}
