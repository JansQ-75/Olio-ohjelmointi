#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace std;

class MySecondClass : public QObject
{
    Q_OBJECT
public:
    MySecondClass(QObject* parent = nullptr);
    void raiseSecSignal();

signals:
    void mySecSignal();                        // signaali 'mySecSignal'

public slots:
    void mySecSlot();                          // slot funktio 'mySecSlot'. Toteuttaa viestinkäsittelijän

};

#endif // MYSECONDCLASS_H
