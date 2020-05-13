#include <cstdlib>
#include <cmath>
#include <iostream>
#include "MyArrayClass.cpp"
#include "Fractions.h"
using namespace std;

template <typename T> 
T Max(T x, T y) 
{ 
   return (x > y)? x: y; 
}

template <typename T> 
T Min(T x, T y) 
{ 
   return (x < y)? x: y; 
}

int main(int argc, char** argv) {

    srand(time(0));
    
    MyArrayClass<int> a(10);
    MyArrayClass<float> fa(25);
    MyArrayClass<Fractions> fractions_array(5);
    
    cout << "Array a can hold " << a.GetSize() << " integers\n";
    
    try 
    {
    cout << "\nInserting a bunch of random integers...\n";
    for(int i=0;i<a.GetSize();i++)
        a[i]=rand() % a.GetSize();
    }
    catch(runtime_error e)
    {
        cout << e.what() << endl;
        return 1;
    }
    
    // output the array of integers...
    cout << "Contents of a:\n";
    a.display();
    cout << endl << endl;
    
    cout << "Array fa can hold " << fa.GetSize() << " floats\n";
    
    cout << "\nInserting a bunch of random float...\n";
    for(int i=0;i<fa.GetSize();i++)
    {
        float r1 = (float)rand();
        float r2 = (float)rand() ;
        fa[i] = Min(r1,r2) / Max(r1,r2);
    }
        
    // output the array of floats...
    cout << "Contents of fa:\n";
    fa.display();
    
    cout << "Array fractions_array can hold " << fractions_array.GetSize() << " fractions\n";
    
    cout << "\nInserting a bunch of random fractions...\n";
    for(int i=0;i<fractions_array.GetSize();i++)
    {
        int r1 = 1 + (rand() % 200);
        int r2 = 1 + (rand() % 200);
        
        fractions_array[i] = Fractions( Min(r1,r2), Max(r1,r2) );
    }
        
    // output the array of fractions...
    cout << "Contents of fractions_array:\n";
    fractions_array.display();
    
    return 0;
}
