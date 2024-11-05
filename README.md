# Olio-ohjelmoinnin harjoitustehtäviä

## Kotitehtävä1

Tehtävässä harjoitellaan muuttujien, funktioiden ja ehtorakenteiden käyttöä.
Tehtävää varten luotiin neljä funktiota:

**calcSum**

- parametreinä kaksi kokonaislukua
- tulostaa näiden summan

**calcDiv**

- parametreinä kaksi kokonaislukua
- tulostaa näiden osamäärän

**retSum**

- parametreinä kaksi kokonaislukua
- palauttaa näiden summan
    
**retDiv**

- parametreinä kaksi kokonaislukua
- palauttaa näiden osamäärän

Main -koodissa kysytään käyttäjältä 2 kokonaislukua ja sijoitetaan ne muuttujiin.
Kutsutaan edellä mainittuja funktioita ja jälkimmäisten funktioiden kohdalla myös tulostetaan funktioiden palautusarvot.

## Kotitehtävä2a

Tehtävässä harjoitellaan luokkien ja olioiden käyttöä.

Ensimmäisessä vaiheessa luodaan Car -luokka ja Car -olio tehdään pinomuistiin.
Jäsenmuuttujat:
    Merkki, malli, vuosimalli.
Metodit:
    Setterit jäsenmuuttujille
    Funktio "printData", jolla voidaan tulostaa auton tiedot.

Toisessa vaiheessa luodaan Rectangle -luokka ja Rectangle -olio tehdään kekomuistiin pointter-oliona
Jäsenmuuttujat:
    leveys, korkeus
Metodit:
    Setterit jäsenmuuttujille
    Funktio suorakulmion pinta-alaa varten, palautusarvona pinta-ala
    Funktio suorakulmion ympärysmittaa varten, palautusarvona ympärysmitta

Kolmannessa vaiheessa luodaan Student -luokka ja Student -olio tehdään kekomuistiin smartpointter-oliona
Jäsenmuuttujat:
    nimi, opiskelijanumero, keskiarvo
Metodit:
    Setterit jäsenmuuttujille
    Getterit jäsenmuuttujille

Main -koodissa luodaan neljä oliota

Car -olio pinomuistiin.
    Settereiden avulla annetaan tiedot autolle
    Tulostetaan auton tiedot luokan metodeissa olevalla funktiolla
    Olio poistuu automaattisesti
Rectangle -olio kekomuistiin, pointter-oliona
    Settereiden avulla annetaan suorakulmion leveys ja korkeus
    Tulostetaan suorakulmion pinta-ala ja ympärysmitta metodeissa olevien funktioita hyödyntäen
    Poistetaan olio koodissa
Rectangle -olio kekomuistiin, pointter-oliona
    Oliolle annetaan muodostimen parametreina valmiiksi suorakulmion leveys ja korkeus
    Tulostetaan suorakulmion pinta-ala ja ympärysmitta metodeissa olevien funktioita hyödyntäen
    Poistetaan olio koodissa
Student -olio kekomuistiin, smartpointter -oliona
    Settereiden avulla annetaan opiskelijalle nimi, opiskelijanumero ja keskiarvo
    Tulostetaan opiskelijan tiedot Gettereiden avulla
    Olio poistuu tuhoajan avulla



