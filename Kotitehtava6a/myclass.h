#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace std;

// MyClass luokka perii QObject luokan
class MyClass : public QObject
{
    Q_OBJECT    // suoritetaan Q_OBJECT makro ts. esikäsittelijä ohje

public:
    MyClass(QObject* parent = nullptr);     // konstruktori, jonka parametrissa mahdollistetaan QObject luokan parent olion käyttäminen
    void raiseMySignal();                   // funktio signaalin nostamista varten
    void raiseMySignal2();                  // funktio toisen signaalin nostamista varten

signals:
    void mySignal();        // signaali 'mySignal'
    void mySignal2();       // signaali 'mySignal2'


public slots:
    void mySlot();                          // slot funktio 'mySlot'
    void mySlot2();                         // slot funktio 'mySlot2'
    void mySlot3();                         // slot funktio 'mySlot3'
};

#endif // MYCLASS_H
