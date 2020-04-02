#include "Fractions.h"

Fractions::Fractions() {
    // default Fraction will be 0 or 0/1
    this->numerator=0;
    this->denominator=1;
}

Fractions::Fractions(const Fractions& original) {
    // copy constructor - it is a utility constructor to allow us to quickly
    // make new objects a copy of an existing object of our class.
    this->setNumerator( original.getNumerator() );
    this->setDenominator( original.getDenominator() );
}

Fractions::~Fractions() {
    // will not implement as we are not doing any dynamic memory allocation
}

void Fractions::reduce()
{
    // implement on 4/1/2020
    int g = gcd ( this->numerator, this->denominator );
    if ( g != 1 )
    {
        this->setNumerator( this->numerator / g );
        this->setDenominator( this->denominator / g );
    }
}              
    
int Fractions::gcd(int a, int b)
{
    if ( a==0 ) return b;   // exit condition (base case) for recursive gcd function
    return gcd( b%a, a);    // return calling gcd again, with new a=b%a, and new b=old a
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
    return (double)this->numerator / this->denominator;
}

// public member functions for Adding, Subtracting, Multiplying, and Dividing two fractions
Fractions Fractions::add(Fractions fraction2)
{
    // a   c   ad   bc
    // - + - = -- + --
    // b   d   bd   bd
    
    int ad = this->numerator * fraction2.denominator;
    int bc = this->denominator * fraction2.numerator;
    int bd = this->denominator * fraction2.denominator;
    
    Fractions result = Fractions();
    result.setNumerator( ad + bc );
    result.setDenominator( bd );
    result.reduce();
    
    return result;
}

Fractions Fractions::subtract(Fractions fraction2)
{
    // a   c   ad   bc
    // - - - = -- - --
    // b   d   bd   bd
    
    int ad = this->numerator * fraction2.denominator;
    int bc = this->denominator * fraction2.numerator;
    int bd = this->denominator * fraction2.denominator;
    
    Fractions result = Fractions();
    result.setNumerator( ad - bc );
    result.setDenominator( bd);
    result.reduce();
    
    return result;
}
    
Fractions Fractions::multiply(Fractions fraction2)
{
    // a   c   ac
    // - * - = --
    // b   d   bd
    
    int ac = this->numerator * fraction2.numerator;
    int bd = this->denominator * fraction2.denominator;
    
    Fractions result = Fractions();
    result.setNumerator( ac );
    result.setDenominator( bd);
    result.reduce();
    
    return result;    
}

Fractions Fractions::divide(Fractions fraction2)
{
    // a   c   ad
    // - / - = --
    // b   d   bc
    
    int ad = this->numerator * fraction2.denominator;
    int bc = this->denominator * fraction2.numerator;
    
    Fractions result = Fractions();
    
    if ( bc != 0 )
    {
        result.setNumerator( ad );
        result.setDenominator( bc );
        result.reduce();
        
        return result;
    }

    return result;
}
    
    // public overloaded operators (C++ allows us to do this, not Java)
Fractions Fractions::operator+(const Fractions &rhs)
{
    return this->add(rhs);
}// rhs = "right hand side"
Fractions Fractions::operator-(const Fractions &rhs)
{
    return this->subtract((rhs));
}
Fractions Fractions::operator*(const Fractions &rhs)
{
    return this->multiply(rhs);
}
Fractions Fractions::operator/(const Fractions &rhs)
{
    return this->divide(rhs);
}
    
    // public overloaded << operator
std::ostream& Fractions::operator<<(std::ostream& o, Fractions& fract)
{
    return o << fract->numerator << " / " << fract->denominator;
}
