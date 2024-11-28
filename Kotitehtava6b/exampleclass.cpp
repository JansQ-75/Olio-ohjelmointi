#include "exampleclass.h"

#include <QCoreApplication>

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug("Start");
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));        // yhdistetään signaali 'readyToSay' slottiin 'sayHelloSlot'
    connect(this, SIGNAL(readyToStop()), this, SLOT(sayGoodbyeSlot()));     // yhdistetään signaali 'readyToStop' slottiin 'sayGoodbyeSlot'

    qDebug("End");
}

// funktio signaalin 'readyToSay' sytyttämistä varten
void ExampleClass::startToWait()
{
    QThread::msleep(1000);      // sleep toiminto, joka viivästyttää suoritusta 1s
    emit readyToSay();          // sytyttää signaalin 'readyToSay'
    QThread::msleep(2000);      // sleep toiminto, joka viivästyttää suoritusta 1s
    emit readyToStop();         // sytyttää signaalin 'readyToStop'
}

// slotti kytkettynä signaaliin 'readyToSay'
void ExampleClass::sayHelloSlot()
{
    qDebug("Terve");            // debuggaus tuloste
}

// slotti kytkettynä signaaliin 'readyToStop'
void ExampleClass::sayGoodbyeSlot()
{
    qDebug("ja heipparallaa!");     // debuggaus tuloste
}
