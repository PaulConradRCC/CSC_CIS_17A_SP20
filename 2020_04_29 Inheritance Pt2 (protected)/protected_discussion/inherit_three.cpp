
#include "inherit_three.h"
#include <iostream>
using namespace std;

inherit_three::inherit_three() {
    cout << "Inside inherit_three parameterless constructor" << endl;
    
    SetX(10.12345);
    SetY(5);
    SetZ(15);
}

inherit_three::inherit_three(const inherit_three& orig) {
    cout << "Inside inherit_three copy constructor" << endl;
    
    SetX( orig.GetX() );
    SetY( orig.GetY() );
    SetZ( orig.GetZ() );
}

inherit_three::~inherit_three() {
    cout << "Inside inherit_three deconstructor" << endl;
    
    cout << GetX() << endl;
    cout << GetY() << endl;
    cout << GetZ() << endl;
}

