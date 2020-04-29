#include "Pet.h"

Pet::Pet()
{
    name = "";
    age = 0;
}

Pet::Pet(string n, int a) {
    setName(n);
    setAge(a);
}

Pet::Pet(const Pet& orig) {
    name = orig.name;
    age = orig.age;
}

Pet::~Pet() {
}

string Pet::getName() const
{
    return name;
}

bool Pet::setName(string newName)
{
    bool success = false;
    
    if ( newName.length() <= 20 )
    {
        name = newName;
        success = true;
    }
    return success;
}
    
int Pet::getAge() const
{
    return age;
}
    
bool Pet::setAge(int newAge)
{
    bool success = false;
    
    if ( newAge >= 0 )
    {
        age = newAge;
        success = true;
    }
    
    return success;
}