#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int num1 = -99;
    float num2 = 3.14;
    
    int * my_variable_iptr = nullptr;
    float * my_float_variable_fptr = nullptr;
    
    cout << &num1 << endl; // output address of num1
    cout << &num2 << endl; // output num2 address
    
    return 0;
}

