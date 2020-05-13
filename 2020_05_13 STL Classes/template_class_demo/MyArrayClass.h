#ifndef MYARRAYCLASS_H
#define MYARRAYCLASS_H

#include <iostream>
using namespace std;

template<class T>
class MyArrayClass {
public:
    MyArrayClass(int n);
    MyArrayClass(const MyArrayClass<T>& orig);
    
    int GetSize() const;
    
    T & operator[](int n);
    
    void display();
    
    virtual ~MyArrayClass();
    
private:
    T *a;   // ptr of T to hold array
    int size; // size to hold the number of items in array
};

#endif /* MYARRAYCLASS_H */
