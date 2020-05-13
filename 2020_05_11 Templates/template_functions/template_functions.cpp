#include <iostream>
#include <string>
#include "Fractions.h"
using namespace std;

#define DEBUG 1

// template functions
template <class T>
T minimum(T x, T y)
{
    if (DEBUG==1) cout << "Inside T minimum(T, T)..." << endl;
    T result = y;
    if ( x < y ) result = x;
    return result;
}

template <class T>
T minimum(T x, T y, T z)
{
    if (DEBUG==1) cout << "Inside T minimum(T, T, T)..." << endl;
    T result = z;
    if ( x < result ) result = x;
    if ( y < result ) result = y;
    return result;
}

int main(int argc, char** argv) {

    int a = 6, b = 5, c = 10;
    float w = 12.45, x = 11.45;
    string y = "Apple", z = "Pineapple";
    
    Fractions f1 = Fractions(1,3);
    Fractions f2 = Fractions(1,4);
    
    cout << "the minimum of a and b is " << minimum(a,b) << endl;
    cout << "the minimum of a, b, c is " << minimum(a,b,c) << endl;
    cout << "the minimum of w and x is " << minimum(w,x) << endl;
    cout << "the minimum of y and z is " << minimum(y,z) << endl;
    
    cout << "the minimum of f1 and f2 is " << minimum(f1,f2) << endl;
    return 0;
}

