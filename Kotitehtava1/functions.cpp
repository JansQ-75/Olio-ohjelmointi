#include "functions.h"

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "lukujen summa on " << sum << endl;
}

void calcDiv(int a, int b) {
    float div = (float)a / (float)b;
    if (b == 0) {
        cout << "jakajana ei voi olla 0" << endl;
    }
    else {
    cout << "lukujen osamaara on " << div << endl;
    }
}

int retSum(int a, int b) {
    int sum = a + b;
    return sum;
}

float retDiv(int a, int b) {
    float div = (float)a / (float)b;
    if (b == 0) {
        cout << "VIRHE: jakajana ei voi olla ";
        return 0;

    }
    else {
        return div;
    }
}
