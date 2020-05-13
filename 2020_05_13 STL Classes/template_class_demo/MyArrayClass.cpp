#include "MyArrayClass.h"
#include <iostream>
#include <string>

#include <typeinfo>
using namespace std;

template<class T> 
MyArrayClass<T>::MyArrayClass(int n) {
    a = new T[n]; // create new array of n elements
    size = n;
    cout << "Creating a " << n << " element array of " << typeid(T).name() << endl;
}

template<class T>
MyArrayClass<T>::MyArrayClass(const MyArrayClass<T>& orig) {
    size = orig->size;
    a = new T[ size ];
    for(int i=0;i < size; i++)
        a[i] = orig->a[i];
}

template<class T>
MyArrayClass<T>::~MyArrayClass() {
    // we allocated space, so we must deallocate the space with the destructor
    delete [] a;
}

template<class T>
int MyArrayClass<T>::GetSize() const
{
    return size;
}

template<class T>
T & MyArrayClass<T>::operator [](int n)
{
    if (n<0)
        throw runtime_error("Negative subscript encountered");
    
    if (n>=size)
        throw runtime_error("Subscript out of range encountered");
    
    return a[n];
}

template<class T>
void MyArrayClass<T>::display()
{
    for(int i=0;i< size;i++)
        cout << a[i] << " ";
}
