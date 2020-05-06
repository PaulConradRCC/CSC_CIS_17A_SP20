
#include "inherit_one.h"

#include <iostream>
using namespace std;

inherit_one::inherit_one() {
    cout << "Inside inherit_one parameterless constructor" << endl;
    
    SetX(0.12345);
    SetY(1);
    SetZ(2);
}

inherit_one::inherit_one(const inherit_one& orig) {
    cout << "Inside inherit_one copy constructor" << endl;
    
    SetX( orig.GetX() );
    SetY( orig.GetY() );
    SetZ( orig.GetZ() );
}

inherit_one::~inherit_one() {
    cout << "Inside inherit_one deconstructor" << endl;
    
    cout << GetX() << endl;
    cout << GetY() << endl;
    cout << GetZ() << endl;
}

