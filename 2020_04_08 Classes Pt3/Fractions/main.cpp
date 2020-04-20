// driver source file for Fractions class, interactive
#include <iostream>

#include "Fractions.h"

using namespace std;

int main(int argc, char** argv) {

    Fractions a = Fractions();
    a.setNumerator(7);
    a.setDenominator(8);
    
    Fractions b = Fractions();
    b.setNumerator(1);
    b.setDenominator(4);
    
    Fractions c =  a + b;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    Fractions d = Fractions();
    cout << "Entering fractions" << endl;
    
    cin >> d;
    
    if ( cin.fail() )
    {
        cout << "You cannot have the denominator be zero!!!!! A default fraction 0/1 used instead." << endl;
    }
    
    cout << "Your input fraction is: " << d << endl;
    
    cout << a << " + " << d << " = " << a+d << endl;
    cout << a << " - " << d << " = " << a-d << endl;
    cout << a << " * " << d << " = " << a*d << endl;
    cout << a << " / " << d << " = " << a/d << endl;
    
    return 0;
}

