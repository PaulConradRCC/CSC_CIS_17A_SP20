
#include "inherit_two.h"

#include <iostream>
using namespace std;

inherit_two::inherit_two() {
    cout << "Inside inherit_two parameterless constructor" << endl;
    
    SetX(11.12345);
    SetY(51);
    SetZ(151);
}

inherit_two::inherit_two(const inherit_two& orig) {
    cout << "Inside inherit_two copy constructor" << endl;
    
    SetX( orig.GetX() );
    SetY( orig.GetY() );
    SetZ( orig.GetZ() );
}

inherit_two::~inherit_two() {
    cout << "Inside inherit_two deconstructor" << endl;
    
    cout << GetX() << endl;
    cout << GetY() << endl;
    cout << GetZ() << endl;
}