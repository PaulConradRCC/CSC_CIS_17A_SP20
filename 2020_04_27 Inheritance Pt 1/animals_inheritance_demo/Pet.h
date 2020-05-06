#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
public:
    Pet();
    Pet(string n, int a);
    Pet(const Pet& orig);
    virtual ~Pet();

protected:    
    // get / set methods/member functions
    string getName() const;
    bool setName(string newName);
    
    int getAge() const;
    bool setAge(int newAge);
    
private:
    string name;
    int age;
};

#endif /* PET_H */

