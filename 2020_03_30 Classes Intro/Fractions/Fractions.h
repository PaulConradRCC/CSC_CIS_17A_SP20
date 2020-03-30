//
// private: only code inside the class can access, no one outside class can access
// public: code inside AND outside of our class can access
//

#ifndef FRACTIONS_H
#define FRACTIONS_H

#include <iostream>

class Fractions {
private:
    int numerator, denominator;
                                // some private utility functions for sole use of our Fractions class
    void reduce();              // private member function to reduce our Fraction
    int gcd(int a, int b);      // private member function for computing greatest common divisor

public:
    Fractions();
    Fractions(const Fractions& orig);
    virtual ~Fractions();
    
    // accessor and mutator functions for our private member variables
    // often called getters and setters
    // get/set for the private numerator member variable
    int getNumerator();
    void setNumerator(int num);
    
    // get/set for the private denominator member variable
    int getDenominator();
    bool setDenominator(int denom);
    
    // public utility function for returning a double representing our fraction
    double getValue();  // returns the value representing the fraction, ie. 1/4 would return 0.25
    
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
};

#endif /* FRACTIONS_H */

