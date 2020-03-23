#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int array_size;
    
    cout << "Enter size of the array: ";
    cin >> array_size;
    
    short int array[array_size];
    short int * a_ptr = array;
    
    for(int i=0; i<array_size; i++)
    {
        cout << "Enter item for array[" << i << "]: ";
        cin >> a_ptr[i];
    }
    
    cout << "Address of array:" << a_ptr << " (this is the base address of the array)" << endl;
    
    for(int i=0;i<array_size;i++)
    {
        cout << "Address of array[" << i << "]:" << (long int)&a_ptr[i] << " (in hex: ";
        cout << &a_ptr[i] << "), the data value is: " << a_ptr[i] << endl;
    }
    
    return 0;
}

