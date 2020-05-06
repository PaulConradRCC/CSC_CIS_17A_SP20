#include "Dog.h"
#include "Pet.h"
#include "Vaccination.h"

#include <iostream>
using namespace std;

Dog::Dog(string name, int age, bool hasRabiesShot, bool hasParvoShot) {
    setName(name);
    setAge(age);
    setRabiesShot(hasRabiesShot);
    setParvoShot(hasParvoShot);
}

Dog::Dog(const Dog& orig) {
    setName( orig.getName() );
    setAge( orig.getAge() );
    setRabiesShot( orig.getRabiesShot() );
    setParvoShot( orig.getParvoShot() );
}

Dog::~Dog() {
}

void Dog::outputDogNameAge()
{
    cout << "Name: "  << getName() << ", Age: " << getAge();
}

bool Dog::getRabiesShot() const
{
    return rabies.getVaccinationStatus();
}

void Dog::setRabiesShot(bool hasShot)
{
    rabies.setVaccinationStatus(hasShot);
}
    
bool Dog::getParvoShot() const
{
    return parvo.getVaccinationStatus();
}

void Dog::setParvoShot(bool hasShot)
{
    parvo.setVaccinationStatus(hasShot);
}