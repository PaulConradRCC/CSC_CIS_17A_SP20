#ifndef BASEPLUSCOMMISSION_H
#define BASEPLUSCOMMISSION_H

#include "Employee.h"

class BasePlusCommission : public Employee {
public:
    BasePlusCommission();
    BasePlusCommission(const BasePlusCommission& orig);
    virtual ~BasePlusCommission();
    
    virtual double calculatePay();
    
    void setSales(double sales);
    double getSales() const;
    void setCommissionRate(double commissionRate);
    double getCommissionRate() const;
    void setBaseSalary(double baseSalary);
    double getBaseSalary() const;
    
private:
    double baseSalary, commissionRate, sales;
};

#endif /* BASEPLUSCOMMISSION_H */
