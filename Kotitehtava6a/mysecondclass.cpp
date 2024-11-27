#include "mysecondclass.h"

MySecondClass::MySecondClass(QObject *parent)
{
    connect(this, SIGNAL(mySignal()), this, SLOT(mySecSlot()));

}
