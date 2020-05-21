#ifndef MYARRAYCLASS_H
#define MYARRAYCLASS_H

#include <iostream>
#include <fstream>
using namespace std;

template<class T>
class MyArrayClass;

template<class T>
ostream& operator<<(ostream& o, const MyArrayClass<T>& a);

template<class T>
class MyArrayClass {
public:
    MyArrayClass();
    MyArrayClass(int n);
    MyArrayClass(T arr[], int sz);
    MyArrayClass(const MyArrayClass<T>& orig);
    
    int GetSize() const;
    T GetItem(int n) const;
    
    T & operator[](int n);
    
    void display();
    
    // overloaded operators (I/O)
    friend ostream& operator<< <>(ostream& o, const MyArrayClass<T>& a);
    
    virtual ~MyArrayClass();
private:
    T *a;   // ptr of T to hold array
    int size; // size to hold the number of items in array
};

#endif /* MYARRAYCLASS_H */

