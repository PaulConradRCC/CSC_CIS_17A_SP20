#include "Employee.h"

Employee::Employee() {
    name = "";
}

Employee::Employee(const Employee& orig) {
    SetName( orig.GetName() );
}

Employee::~Employee() {
    // nothing for the destructor needed
}

void Employee::SetName(string name) {
    if ( name.length() <= 30 ) // allow only names of 0 to 30 characters
        this->name = name;
}

string Employee::GetName() const {
    return name;
}