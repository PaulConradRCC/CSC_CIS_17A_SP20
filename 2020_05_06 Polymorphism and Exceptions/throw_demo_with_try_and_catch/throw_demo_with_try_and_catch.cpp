#include <iostream>
#include <string>
using namespace std;

const string NEGATIVE_INTEGER_EXCEPTION = "Negative Integer Exception!!!";
const string INVALID_DATA_TYPE_EXCEPTION = "Invalid Data Type Exception!!!";

int main(int argc, char** argv) {

    int x, y;
    
    try {
        cout << "Enter your first positive integer: ";
        cin >> x;

        if ( x<0 ) throw NEGATIVE_INTEGER_EXCEPTION;
        if ( !cin.good() ) throw INVALID_DATA_TYPE_EXCEPTION;

        cout << "Enter your second positive integer: ";
        cin >> y;

        if ( y<0 ) throw NEGATIVE_INTEGER_EXCEPTION;
        if ( !cin.good() ) throw INVALID_DATA_TYPE_EXCEPTION;
    }
    catch (string exp)
    {
        cout << "Caught exception: " << exp << endl;
        return -1;
    }
    
    cout << "You have entered " << x << ", and " << y << endl;
    
    return 0;
}
