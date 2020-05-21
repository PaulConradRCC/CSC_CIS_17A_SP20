#include "MyArrayClass.h"
#include <iostream>
#include <fstream>
using namespace std;

template<class T> 
MyArrayClass<T>::MyArrayClass() {
    a = nullptr;
    size = 0;
}

template<class T> 
MyArrayClass<T>::MyArrayClass(int n) {
    a = new T[n]; // create new array of n elements
    size = n;
}

template<class T> 
MyArrayClass<T>::MyArrayClass(T arr[], int sz)
{
    size=sz;
    a = new T[sz];
    for(int i=0;i<sz;i++)
        a[i]=arr[i];
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
T MyArrayClass<T>::GetItem(int n) const
{
    return a[n];
}

template<class T>
T & MyArrayClass<T>::operator [](int n)
{
    if (n<0 || n>=size)
        throw runtime_error("Subscript out of range");
    
    return a[n];
}

template<class T>
void MyArrayClass<T>::display()
{
    for(int i=0;i< size;i++)
        cout << a[i] << " ";
}

// overloaded operators (I/O)
template<class T>
ostream& operator<<(ostream& o, const MyArrayClass<T>& a)
{
    for(int i=0;i< a.GetSize();i++)
        o << a.GetItem(i) << " ";
    return o;
}
