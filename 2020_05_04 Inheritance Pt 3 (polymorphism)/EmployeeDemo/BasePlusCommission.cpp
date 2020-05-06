// Assume that base salary is a monthly base salary

#include "BasePlusCommission.h"

const double COMMISSION_RATE = 0.10;  // 10%
const double MAX_COMMISSION_RATE = 0.50; // 50%

BasePlusCommission::BasePlusCommission() {
    baseSalary = 0.0;
    sales = 0.0;
    commissionRate = COMMISSION_RATE;
}

BasePlusCommission::BasePlusCommission(const BasePlusCommission& orig) {
    this->setBaseSalary( orig.getBaseSalary() );
    this->setCommissionRate( orig.getCommissionRate() );
    this->setSales( orig.getSales() );
}

BasePlusCommission::~BasePlusCommission() {
    // needed to do nothing for now...
}

void BasePlusCommission::setSales(double sales) {
    if ( sales >= 0.0 )
        this->sales = sales;
}

double BasePlusCommission::getSales() const {
    return sales;
}

void BasePlusCommission::setCommissionRate(double commissionRate) {
    if ( (commissionRate >= COMMISSION_RATE) && ( commissionRate <= MAX_COMMISSION_RATE ) )
        this->commissionRate = commissionRate;
}

double BasePlusCommission::getCommissionRate() const {
    return commissionRate;
}

void BasePlusCommission::setBaseSalary(double baseSalary) {
    if ( baseSalary >= 0.0 )
        this->baseSalary = baseSalary;
}

double BasePlusCommission::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommission::calculatePay()
{
    return baseSalary + sales * commissionRate;
}