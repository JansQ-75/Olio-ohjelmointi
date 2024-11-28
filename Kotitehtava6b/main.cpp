#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass objEClass;     // luodaan luokan ExampleClass olio
    objEClass.startToWait();    // kutsutaan funktiota startToWait()

    return a.exec();

}
