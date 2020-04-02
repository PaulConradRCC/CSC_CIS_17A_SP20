// driver source file for Fractions class, interactive
#include <iostream>

#include "Fractions.h"

using namespace std;

int main(int argc, char** argv) {

    Fractions a = Fractions();
    a.setNumerator(1);
    a.setDenominator(3);
    
    Fractions b = Fractions();
    b.setNumerator(1);
    b.setDenominator(4);
    
    Fractions c =  a + b;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    return 0;
}

