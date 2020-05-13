#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>
using namespace std;

// our Fractions class
#include "Fractions.h"

// our template functions
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

template <typename T>
void Swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

// our main test driver
int main(int argc, char** argv) {

    srand(time(0));
    
    vector<Fractions> vf;
    
    int num_fractions;
    cout << "How many random fractions shall I generate? ";
    cin >> num_fractions;
    
    bool insertBeginning;
    bool randomFun;
    char choice;
    cout << "Would you like to insert random fractions at the beginning of vector (Y for Yes, ";
    cout << "R for random insertion (beginning or end chosen randomly by program), any other char for No)? ";
    cin >> choice;
    insertBeginning = ( choice == 'Y' || choice == 'y' );
    randomFun = ( choice == 'R' || choice == 'r' );
    
    cout << "\nInserting a bunch of random fractions into the vector...\n";
    for(int i=0;i<num_fractions;i++)
    {
        int r1 = 1 + (rand() % 20);
        int r2 = 1 + (rand() % 20);
        
        Fractions frac = Fractions( Min(r1,r2), Max(r1,r2) );
        cout << "Inserting the fraction " << frac << " at the ";       
        
        if (randomFun)
        {
            insertBeginning = ( rand() % 2 ) == 0; // if random number is even, insert at beginning, otherwise at end
            
            if (insertBeginning) 
            {
                    vf.insert( vf.begin(), frac );
                    cout << "beginning." << endl;
            }
            else
            {
                vf.insert( vf.end(), frac );
                cout << "end." << endl;
            }
        }
        else
        {
            if (insertBeginning) 
            {
                    vf.insert( vf.begin(), frac );
                    cout << "beginning." << endl;
            }
            else
            {
                vf.insert( vf.end(), frac );
                cout << "end." << endl;
            }
        }
    }
    
    // pick a spot in "between" and insert another fraction...
    vector<Fractions>::iterator it = vf.begin();
    int midpoint = num_fractions / 2;
    for(int i=0; i<midpoint; i++) it++;
    vf.insert(it, Fractions(1001, 1000) );
    
    cout << "Here is the vector of random fractions..." << endl;
    cout << "Using a regular for loop..." << endl;
    for(int i=0;i<num_fractions;i++)
    {
        cout << vf[i] << endl;
    }
    
    cout << endl << "Using a range based for loop..." << endl;
    for(Fractions f : vf)
    {
        cout << f << endl;
    }
    
    cout << endl << "Using a regular for loop utilizing iterators..." << endl;
    for(it = vf.begin(); it < vf.end(); it++)
        cout << *it << endl;
    
    return 0;
}

