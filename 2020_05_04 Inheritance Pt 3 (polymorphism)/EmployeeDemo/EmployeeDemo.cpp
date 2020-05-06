#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "BasePlusCommission.h"
using namespace std;

int main(int argc, char** argv) {

    //Employee x; // this cannot compile because Employee is an abstract class due to its virtual function
    
    // x.SetName("Mr. Jones");
    // cout << "Name: " << x.GetName() << endl;
    // cout << "Pay: " << x.calculatePay() << endl;
    
    HourlyEmployee a, b;
    
    a.SetName("John Doe");
    a.SetHours(23.5);
    a.SetPayrate(16.50);
    
    b.SetName("Jane Doe");
    b.SetHours(53.75);
    b.SetPayrate(19.25);
    
    cout << "Name: " << a.GetName() << endl;
    cout << "Pay: " << a.calculatePay() << endl;
    
    cout << "Name: " << b.GetName() << endl;
    cout << "Pay: " << b.calculatePay() << endl;
    
    BasePlusCommission c, d;
    
    c.SetName("Bill Smith");
    c.setBaseSalary(20000);
    c.setCommissionRate(0.15);
    c.setSales(500000);
    
    d.SetName("Danny Smith");
    d.setBaseSalary(0);
    d.setCommissionRate(0.45);
    d.setSales(350000);
    
    cout << "Name: " << c.GetName() << endl;
    cout << "Pay: " << c.calculatePay() << endl;
    
    cout << "Name: " << d.GetName() << endl;
    cout << "Pay: " << d.calculatePay() << endl;
    
    return 0;
}
