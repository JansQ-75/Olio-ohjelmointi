#include "myclass.h"


MyClass::MyClass(QObject *parent) : QObject(parent) {
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));    // kytketään mySignal mySlot:n
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot2()));   // kytketään mySignal mySlot2:n
    connect(this, SIGNAL(mySignal2()), this, SLOT(mySlot3()));  // kytketään mySignal2 mySlot3:n
}

void MyClass::raiseMySignal()
{
    emit mySignal();    // nostetaan mySignal niminen signaali
}

void MyClass::raiseMySignal2()
{
    emit mySignal2();   // nostetaan mySignal niminen signaali
}

// Slot kytketty mySignal:n
void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";       // debuggaus tuloste
}

// Slot kytketty mySignal:n
void MyClass::mySlot2()
{
    qDebug()<<"mySlot2 puuhastelee";        // debuggaus tuloste
}

// Slot kytketty mySignal2:n
void MyClass::mySlot3()
{
    qDebug()<<"mySlot3 askartelee taas";    // debuggaus tuloste
}
