#include <iostream>
#include <iomanip>
using namespace std;

const int FIELD_WIDTH = 6;

int main(int argc, char** argv) {

    float x = 1.2345;
    
    // demonstrate significant digits
    cout << "Demonstrate significant digits" << endl;
    cout << setprecision(1) << x << endl;
    cout << setprecision(2) << x << endl;
    cout << setprecision(3) << x << endl;
    cout << setprecision(4) << x << endl;
    cout << setprecision(5) << x << endl;
    
    // demonstrate significant digits with setw
    cout << "Demonstrate significant digits with setw" << endl;
    cout << setw(FIELD_WIDTH) << setprecision(1) << x << endl;
    cout << setw(FIELD_WIDTH) << setprecision(2) << x << endl;
    cout << setw(FIELD_WIDTH) << setprecision(3) << x << endl;
    cout << setw(FIELD_WIDTH) << setprecision(4) << x << endl;
    cout << setw(FIELD_WIDTH) << setprecision(5) << x << endl;
    
    // demonstrate significant digits with setw and left just.
    cout << "Demonstrate significant digits with setw and left just." << endl;
    cout << left << setw(FIELD_WIDTH) << setprecision(1) << x << endl;
    cout << left << setw(FIELD_WIDTH) << setprecision(2) << x << endl;
    cout << left << setw(FIELD_WIDTH) << setprecision(3) << x << endl;
    cout << left << setw(FIELD_WIDTH) << setprecision(4) << x << endl;
    cout << left << setw(FIELD_WIDTH) << setprecision(5) << x << endl;
    
    // demonstrate decimal digits of precision
    cout << "Demonstrate decimal digits of precision" << endl;
    cout << fixed << setprecision(1) << x << endl;
    cout << fixed << setprecision(2) << x << endl;
    cout << fixed << setprecision(3) << x << endl;
    cout << fixed << setprecision(4) << x << endl;
    cout << fixed << setprecision(5) << x << endl;
    
    // demonstrate decimal digits of precision setw
    cout << "Demonstrate significant digits with setw" << endl;
    cout << fixed << setw(FIELD_WIDTH) << setprecision(1) << x << endl;
    cout << fixed << setw(FIELD_WIDTH) << setprecision(2) << x << endl;
    cout << fixed << setw(FIELD_WIDTH) << setprecision(3) << x << endl;
    cout << fixed << setw(FIELD_WIDTH) << setprecision(4) << x << endl;
    cout << fixed << setw(FIELD_WIDTH) << setprecision(5) << x << endl;
    
    return 0;
}

