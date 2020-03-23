#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int array_size;
    
    cout << "Enter size of the array: ";
    cin >> array_size;
    
    short int array[array_size];
    
    for(int i=0; i<array_size; i++)
    {
        cout << "Enter item for array[" << i << "]: ";
        cin >> array[i];
    }
    
    cout << "Address of array:" << array << " (this is the base address of the array)" << endl;
    //cout << "Address of array[0]:" << (long int)&array[0] << endl;
    //cout << "Address of array[1]:" << (long int)&array[1] << endl;
    
    for(int i=0;i<array_size;i++)
    {
        cout << "Address of array[" << i << "]:" << (long int)&array[i] << " (in hex: ";
        cout << &array[i] << "), the data value is: " << array[i] << endl;
    }
    
    return 0;
}

