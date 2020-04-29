#include <iostream>
#include "Dog.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {

    Dog dog1 = Dog("Fido", 3, false, false);
    
    cout << "       Dog1 name: " << dog1.getName() << endl;
    cout << "        Dog1 age: " << dog1.getAge() << endl;
    cout << "Dog1 rabies shot: " << dog1.getRabiesShot() << endl;
    cout << " Dog1 parvo shot: " << dog1.getParvoShot() << endl;
    
    // set dog1's rabies shot to true, and output results
    dog1.setRabiesShot(true);
    cout << "       Dog1 name: " << dog1.getName() << endl;
    cout << "        Dog1 age: " << dog1.getAge() << endl;
    cout << "Dog1 rabies shot: " << dog1.getRabiesShot() << endl;
    cout << " Dog1 parvo shot: " << dog1.getParvoShot() << endl;
        
    return 0;
}

