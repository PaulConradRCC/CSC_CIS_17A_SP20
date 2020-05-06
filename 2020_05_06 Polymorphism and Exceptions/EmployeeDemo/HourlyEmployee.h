#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    HourlyEmployee();
    HourlyEmployee(const HourlyEmployee& orig);
    virtual ~HourlyEmployee();
    void SetPayrate(double payrate);
    double GetPayrate() const;
    void SetHours(double hours);
    double GetHours() const;
    
    double calculatePay();
private:
    double hours, payrate;
};

#endif /* HOURLYEMPLOYEE_H */

