// This implementation assumes 40 hour work week.

#include "HourlyEmployee.h"

const int FULLTIME_HOURS = 40;

const double MIN_PAY = 12.50;
const double OVERTIME_FACTOR = 1.5;
const double MAX_HOURS = 100.0;

HourlyEmployee::HourlyEmployee() {
    hours = 0.0;
    payrate = MIN_PAY;
}

HourlyEmployee::HourlyEmployee(const HourlyEmployee& orig) {
    SetHours( orig.GetHours() );
    SetPayrate( orig.GetPayrate() );
}

HourlyEmployee::~HourlyEmployee() {
    // nothing needed to be done
}

void HourlyEmployee::SetPayrate(double payrate) {
    if ( payrate >= MIN_PAY )
        this->payrate = payrate;
}

double HourlyEmployee::GetPayrate() const {
    return payrate;
}

void HourlyEmployee::SetHours(double hours) {
    if ( (hours >= 0.0) && (hours <= MAX_HOURS) )
        this->hours = hours;
}

double HourlyEmployee::GetHours() const {
    return hours;
}

double HourlyEmployee::calculatePay()
{
    double pay;
    
    if ( hours > FULLTIME_HOURS )
        pay = FULLTIME_HOURS * payrate + (( hours - FULLTIME_HOURS ) * payrate * OVERTIME_FACTOR);
    else
        pay = hours * payrate;
    
    return pay;
}