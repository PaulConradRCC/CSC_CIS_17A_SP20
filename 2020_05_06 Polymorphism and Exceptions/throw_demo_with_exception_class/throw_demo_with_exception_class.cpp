// this project must be compiled with the C++11 standard enabled.
#include <iostream>
#include <string>
using namespace std;

#include "Exception.h"

int main(int argc, char** argv) {

    int x, y;
    int line_number;
    
    try {
        cout << "Enter your first positive integer: ";
        cin >> x; line_number = __LINE__;

        if ( x<0 ) throw Exception("Negative Integer","A negative integer was entered", __LINE__);
        if ( !cin.good() ) throw Exception("Invalid Data Type","An invalid input was detected", __LINE__);

        cout << "Enter your second positive integer: ";
        cin >> y; line_number = __LINE__;

        if ( y<0 ) throw Exception("Negative Integer","A negative integer was entered", __LINE__);
        if ( !cin.good() ) throw Exception("Invalid Data Type","An invalid input was detected", __LINE__);
    }
    catch (Exception exp)
    {
        cout << "Caught exception: " << exp.getException() << endl;
        return -1;
    }
    
    cout << "You have entered " << x << ", and " << y << endl;
    
    return 0;
}
