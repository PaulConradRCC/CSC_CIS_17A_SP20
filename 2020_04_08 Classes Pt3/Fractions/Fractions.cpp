#include "Fractions.h"

Fractions::Fractions() {
    // default Fraction will be 0 or 0/1
    this->numerator=0;
    this->denominator=1;
    this->fraction_state=0;
}

Fractions::Fractions(const Fractions &original) {
    // copy constructor - it is a utility constructor to allow us to quickly
    // make new objects a copy of an existing object of our class.
    this->setNumerator( original.getNumerator() );
    this->setDenominator( original.getDenominator() );
    this->fraction_state = original.fraction_state;
}

Fractions::~Fractions() {
    // will not implement as we are not doing any dynamic memory allocation
}

void Fractions::reduce()
{
    // updated on 4/8/2020 with handling fraction_state
    if ( this->fraction_state==0 )
    {
        // implement on 4/1/2020
        int g = gcd ( this->numerator, this->denominator );
        if ( g != 1 )
        {
            this->setNumerator( this->numerator / g );
            this->setDenominator( this->denominator / g );
        }
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
int Fractions::getNumerator() const
{
    return this->numerator;
}

void Fractions::setNumerator(int num)
{
    this->numerator=num;
}
    
    // get/set for the private denominator member variable
int Fractions::getDenominator() const
{
    return this->denominator;
}

bool Fractions::setDenominator(int denom)
{
    if ( denom==0 )
    {
        this->denominator=0;
        if ( this->numerator==0 )
        {
            // handle 0/0
            this->fraction_state=2;
        }
        else
        {
            // handle numerator / 0, "infinity"
            this->fraction_state=1;
        }
        return false;
    }
    else
    {
        this->denominator=denom;
        this->fraction_state=0;
        return true;
    }
}

int Fractions::getState() const
{
    return this->fraction_state;
}

// remainder will be start of 4/1/2020 meeting
// public utility function for returning a double representing our fraction
double Fractions::getValue()
{
    if ( this->fraction_state==0 ) return (double)this->numerator / this->denominator;
    return 0;
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

    if ( bd != 0 ) this->fraction_state=0;
    else
    {
        if ( (ad+bc) == 0 ) this->fraction_state=2;
        else this->fraction_state=1;
    }
    
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
    
    if ( bc == 0 )
    {
    //////////////////////////////////////////////////////////////////////////////////////////    
        
        return result;
    }

    result.setNumerator( ad );
    result.setDenominator( bc );
    result.reduce();
        
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
ostream& operator<<(ostream& o, const Fractions & fract)
{
    o << fract.numerator << " / " << fract.denominator;
    return o;
}

istream& operator>>(istream& i, Fractions &f)
{
    // when using >> with Fractions, it will be expecting two values in the 
    // order of numerator (followed by whitespace) denominator
    cout << "Enter numerator: ";
    i >> f.numerator;
    
    cout << "Enter denominator: ";
    i >> f.denominator;
    // if our user entered 0 for denominator, we'll set denominator to 1 and setstate = failbit 
    // (users of this class should check this with a call to the good() function
    if ( f.denominator==0 )
    {
        i.setstate(ios_base::failbit); // set istream state to failbit if 0 denominator
        f.numerator = 0;
        f.denominator = 1; // will not allow denominator to be 0, so let's use something like 1        
    }
    f.reduce();
    return i;
}