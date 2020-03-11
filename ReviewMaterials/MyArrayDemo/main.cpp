#include <cstdlib>
#include <iostream>
#include "MyArrayClass.cpp"
using namespace std;

int main(int argc, char** argv) {

    MyArrayClass<int> a(10);
    cout << "Array a can hold " << a.GetSize() << " integers\n";
    
    cout << "\nInserting a bunch of random integers...\n";
    for(int i=0;i<a.GetSize();i++)
        a[i]=rand() % a.GetSize();
    
    // output the array of integers...
    cout << "Contents of a:\n";
    //a.display();
    
    cout << a << endl;
    return 0;
}

