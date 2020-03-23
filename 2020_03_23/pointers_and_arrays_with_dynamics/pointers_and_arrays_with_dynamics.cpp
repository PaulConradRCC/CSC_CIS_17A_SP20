#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int *my_int_ptr = new int;
    
    cout << "Enter size of the array: ";
    cin >> *my_int_ptr;
    
    short int * a_ptr = new short int[ *my_int_ptr ];
    
    for(int i=0; i< *my_int_ptr; i++)
    {
        cout << "Enter item for array[" << i << "]: ";
        cin >> *(a_ptr + i);
    }
    
    cout << "Address of array:" << a_ptr << " (this is the base address of the array)" << endl;
    
    for(int i=0;i< *my_int_ptr; i++)
    {
        cout << "Address of array[" << i << "]:" << (long int)(a_ptr+i) << " (in hex: ";
        cout << (a_ptr+i) << "), the data value is: " << *(a_ptr+i) << endl;
    }
    
    return 0;
}

