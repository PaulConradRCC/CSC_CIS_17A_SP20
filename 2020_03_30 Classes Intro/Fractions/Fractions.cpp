#include "Fractions.h"

Fractions::Fractions() {
    // default Fraction will be 0 or 0/1
    this->numerator=0;
    this->denominator=1;
}

Fractions::Fractions(const Fractions& orig) {
    // copy constructor - it is a utility contructor to allow us to quickly
    // make new objects a copy of an existing object of our class.
    std::cout << "NOT IMPLEMENTED YET!" << std::endl;
}

Fractions::~Fractions() {
    // will not implement as we are not doing any 
}

void Fractions::reduce()
{
    // implement on 4/1/2020
}              
    
int Fractions::gcd(int a, int b)
{
    // implement 4/1/2020
    return 1;
}
    
    // accessor and mutator functions for our private member variables
    // often called getters and setters
    // get/set for the private numerator member variable
int Fractions::getNumerator()
{
    return this->numerator;
}

void Fractions::setNumerator(int num)
{
    this->numerator=num;
}
    
    // get/set for the private denominator member variable
int Fractions::getDenominator()
{
    return this->denominator;
}

bool Fractions::setDenominator(int denom)
{
    if ( denom==0 )
    {
        this->denominator=1;
        return false;
    }
    else
    {
        this->denominator=denom;
        return true;
    }
}

// remainder will be start of 4/1/2020 meeting
// public utility function for returning a double representing our fraction
double Fractions::getValue()
{
    
}

    // public member functions for Adding, Subtracting, Multiplying, and Dividing two fractions
    Fractions add(Fractions fraction2);
    Fractions subtract(Fractions fraction2);
    Fractions multiply(Fractions fraction2);
    Fractions divide(Fractions fraction2);
    
    // public overloaded operators (C++ allows us to do this, not Java)
    Fractions operator+(const Fractions &rhs); // rhs = "right hand side"
    Fractions operator-(const Fractions &rhs); 
    Fractions operator*(const Fractions &rhs); 
    Fractions operator/(const Fractions &rhs); 
    
    // public overloaded << operator
    std::ostream& operator<<(std::ostream& o, Fractions& fract);
