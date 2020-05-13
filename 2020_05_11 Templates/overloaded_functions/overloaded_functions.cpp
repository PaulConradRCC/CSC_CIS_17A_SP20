#include <iostream>
#include <string>
using namespace std;

#define DEBUG 1

int min(int x, int y)
{
    if (DEBUG==1) cout << "Inside int min(int, int)..." << endl;
    int result = y;
    if ( x < y ) result = x;
    return result;
}

int min(int x, int y, int z)
{
    if (DEBUG==1) cout << "Inside int min(int, int, int)..." << endl;
    int result = z;
    if ( x < result ) result = x;
    if ( y < result ) result = y;
    return result;
}

float min(float x, float y)
{
    if (DEBUG==1) cout << "Inside float min(float, float)..." << endl;
    float result = y;
    if ( x < y ) result = x;
    return result;    
}

float min(float x, float y, float z)
{
    if (DEBUG==1) cout << "Inside float min(float, float, float)..." << endl;
    float result = z;
    if ( x < result ) result = x;
    if ( y < result ) result = y;
    return result;
}

string min(string x, string y)
{
    if (DEBUG==1) cout << "Inside string min(string, string)..." << endl;
    string result = y;
    if ( x < y ) result = x;
    return result;    
}

string min(string x, string y, string z)
{
    if (DEBUG==1) cout << "Inside string min(string, string, string)..." << endl;
    string result = z;
    if ( x < result ) result = x;
    if ( y < result ) result = y;
    return result;
}

int main(int argc, char** argv) {

    int a = 6, b = 5, c = 10;
    float w = 12.45, x = 11.45;
    string y = "Apple", z = "Pineapple";
    
    cout << "the minimum of a and b is " << min(a,b) << endl;
    cout << "the minimum of a, b, c is " << min(a,b,c) << endl;
    cout << "the minimum of w and x is " << min(w,x) << endl;
    cout << "the minimum of y and z is " << min(y,z) << endl;
    
    return 0;
}

