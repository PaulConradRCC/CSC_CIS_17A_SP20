#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
    Employee();
    Employee(const Employee& orig);
    virtual ~Employee();
    void SetName(string name);
    string GetName() const;
    
    virtual double calculatePay() = 0;
    
private:
    string name;
};

#endif /* EMPLOYEE_H */
