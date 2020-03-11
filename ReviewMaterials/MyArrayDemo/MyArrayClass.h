#ifndef MYARRAYCLASS_H
#define MYARRAYCLASS_H

#include <iostream>
using namespace std;

template<class T>
class MyArrayClass;

template<class T>
ostream& operator<<(ostream& o, const MyArrayClass<T> &a);

template<class T>
class MyArrayClass {
public:
    MyArrayClass(int n);
    MyArrayClass(const MyArrayClass<T>& orig);
    
    int GetSize() const;
    T GetItem(int n) const;
    
    T & operator [](int n);
    
    void display();
    
    // overloaded operators (I/O)    
    friend ostream& operator<< <>(ostream& o, const MyArrayClass& a);
    
    virtual ~MyArrayClass();
private:
    T *a;   // ptr of T to hold array
    int size; // size to hold the number of items in array
};


template<class T>
ostream& operator<<(ostream& o, const MyArrayClass<T>& a);

#endif /* MYARRAYCLASS_H */

