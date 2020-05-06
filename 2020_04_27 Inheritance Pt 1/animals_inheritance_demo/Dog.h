#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include "Vaccination.h"

#include <string>
using namespace std;

class Dog : public Pet { // Dog "is a" pet relationship
public:
    Dog(string name, int age, bool hasRabiesShot, bool hasParvoShot);
    Dog(const Dog& orig);
    virtual ~Dog();
    
    // get/set methods
    bool getRabiesShot() const;
    void setRabiesShot(bool hasShot);
    
    bool getParvoShot() const;
    void setParvoShot(bool hasShot);
    
    void outputDogNameAge();
private:
    Vaccination rabies; // demonstrate "has a" relationship
    Vaccination parvo;
};

#endif /* DOG_H */

