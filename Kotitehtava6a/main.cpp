#include "myclass.h"

#include <iostream>

using namespace std;

int main()
{
    MyClass objMyClass;             // luodaan MyClass luokan olio
    MyClass objMyClass2;            // luodaan MyClass luokan olio
    objMyClass.raiseMySignal();     // kutsutaan raiseMySignal funktiota
    objMyClass2.raiseMySignal2();   // kutsutaan raiseMySignal2 funktiota
    return 0;
}
