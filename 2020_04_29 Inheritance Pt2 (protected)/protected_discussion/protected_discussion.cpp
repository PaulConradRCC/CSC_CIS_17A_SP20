#include <iostream>
using namespace std;

#include "inherit_one.h"
#include "inherit_two.h"
#include "inherit_three.h"

int main(int argc, char** argv) {

    inherit_three i3 = inherit_three();
    
    inherit_two i2 = inherit_two();
    
    inherit_one i1 = inherit_one();
    
    return 0;
}

