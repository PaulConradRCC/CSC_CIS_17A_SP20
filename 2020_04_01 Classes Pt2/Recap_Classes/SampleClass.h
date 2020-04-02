/*
 *  10. Key point #1 - why use the private access specifier for member variables?
 *	a. Making data members private provides data protection.
 *	b. These data members can be accessed only through public functions of the class.
 *	c. Public functions define the class’s public interface.
 *  11. Key point #2 - separate specification from implementation:
 *	a. Q: Why do this? A: Intellectual property protection (anyone outside your 	
 *          organization does not see the interworkings of the class - they can have the binary 	
 *          machine code library for their programs and your intellectual property is still 	
 *          protected), flexibility (different architectures or platforms may have slightly different 	
 *          implementation requirements), and easier maintenance.
 */

#ifndef SAMPLECLASS_H  // #include guards - checks to see if our class has already been defined in the compilation process or not
#define SAMPLECLASS_H  // common standard naming covention for symbol name is to be in ALL CAPS for easy identification when reading code

class SampleClass {                 // define our class named SampleClass
public:                             // section for all public accessible members
    SampleClass();                          // a parameterless constructor
    SampleClass(const SampleClass& orig);   // a copy constructor
    virtual ~SampleClass();                 // a deconstructor or destructor
private:                            // section for all private accessible members - code outside of class cannot access

};                                  // end of class declaration, must have ; at the end!

#endif /* SAMPLECLASS_H */          // end of the SAMPLECLASS_H prepreprocessor block

