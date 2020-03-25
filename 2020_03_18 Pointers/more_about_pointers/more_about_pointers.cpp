#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {

    int num1 = -99;
    float num2 = 3.14;
    
    //int * my_variable_iptr = nullptr;
    //float * my_float_variable_fptr = nullptr;
    
    int * my_variable_iptr = &num1;
    float * my_float_variable_fptr = &num2;
    
    cout << "Address of num1=" << &num1 << endl; // output address of num1
    cout << "Address of num2=" << &num2 << endl; // output num2 address
    
    cout << "Address of num1 (as stored in my_variable_iptr)=" << my_variable_iptr << endl; // output address of num1
    cout << "Address of num2 (as stored in my_float_variable_fptr)=" << my_float_variable_fptr << endl; // output num2 address
    
    // demonstrating indirection operator
    cout << "Data stored at num1 (as dereferenced from my_variable_iptr)=" << *my_variable_iptr << endl; // dereference ptr, get us the data at address used by num1
    cout << "Data stored at num2 (as dereferenced from my_float_variable_fptr)=" << *my_float_variable_fptr << endl; // dereference ptr, get us the data at address used by num2 
    
    // what happens when we mix up different variable data types and pointer types
    int another_var = 12345;
    float * my_float_fptr = (float *)&another_var;
    
    cout << "Address of another_var=" << my_float_fptr << endl;
    cout << "Data at the address stored in my_float_fptr=" << *((int *)my_float_fptr) << endl;
    
    return 0;
}

