//
// private: only code inside the class can access, no one outside class can access
// public: code inside AND outside of our class can access
//

#ifndef FRACTIONS_H
#define FRACTIONS_H

#include <iostream>
using namespace std;

class Fractions {
private:
    int numerator, denominator;
    int fraction_state;         // 0=normal fraction, 1=infinity, 2=undefined                  
                                // some private utility functions for sole use of our Fractions class
    void reduce();              // private member function to reduce our Fraction
    int gcd(int a, int b);      // private member function for computing greatest common divisor

public:
    Fractions();
    Fractions(const Fractions &orig);
    virtual ~Fractions();
    
    // accessor and mutator functions for our private member variables
    // often called getters and setters
    // get/set for the private numerator member variable
    int getNumerator() const;
    void setNumerator(int num);
    
    // get/set for the private denominator member variable
    int getDenominator() const;
    bool setDenominator(int denom);
    
    // get member function for fraction_state, no setter since internal class code logic determines the state
    int getState() const;
    
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
    friend ostream& operator<<(ostream& o, const Fractions& fract);
    friend istream& operator>>(istream& i, Fractions& f);
};

#endif /* FRACTIONS_H */

