#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int x, y;
    
    cout << "Enter your first positive integer: ";
    cin >> x;
    
    if ( x<0 ) throw "Negative Integer Exception!!!";
    if ( !cin.good() ) throw "Invalid Data Type Exception!!!";
    
    cout << "Enter your second positive integer: ";
    cin >> y;
    
    if ( y<0 ) throw "Negative Integer Exception!!!";
    if ( !cin.good() ) throw "Invalid Data Type Exception!!!";
    
    cout << "You have entered " << x << ", and " << y << endl;
    
    return 0;
}

