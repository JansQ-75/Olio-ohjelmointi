#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace std;
#include <QThread>

using namespace std;

// ExampleClass luokka perii QObject luokan
class ExampleClass : public QObject
{
    Q_OBJECT    // suoritetaan Q_OBJECT makro
public:
    explicit ExampleClass(QObject *parent = nullptr);   // konstruktori, jonka parametrissa mahdollistetaan QObject luokan parent olion käyttäminen
    void startToWait();                     // funktio signaalin 'readyToSay' sytyttämistä varten
signals:
    void readyToSay();
    void readyToStop();
public slots:
    void sayHelloSlot();            // slotti kytkettynä signaaliin 'readyToSay'
    void sayGoodbyeSlot();          // slotti kytkettynä signaaliin 'readyToStop'
};

#endif // EXAMPLECLASS_H
