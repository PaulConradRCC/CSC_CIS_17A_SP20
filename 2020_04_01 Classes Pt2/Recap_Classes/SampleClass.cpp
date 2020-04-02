/*
 *  6. Two very important concept to keep in mind:
 *	a. data hiding: restricting access to certain members of a class or object. A good idea
 *          is to have member variables not publicly accessible by code outside the class.
 *	b. public interface: members of an object that are available outside of the object.  	
 *          This allows the object to provide access to some data and functions without sharing
 *          its internal details and design, and provides some protection from data corruption.
 *  7. Access specifiers are used to control access to members of the class:
 *	a. public:  can be accessed by code and functions outside of the class
 *	b. private:  can only be called by or accessed by functions that are members of the class
 *	c. protected: similar to private but will be discussed later when we discuss inheritance.
 *	d. can be listed in any order in a class
 *	e. can appear multiple times in a class
 *	f. if not specified, the default is private
 *  8. The const keyword appearing after the parentheses in a member function declaration specifies 
 *      that the function will not change any data in the calling object, this is a good programming practice.
 *  9. When defining a member function:
 *	a. place prototype in class declaration
 *	b. define function using class name and scope resolution operator (::)
 *  10. Key point #1 - why use the private access specifier for member variables?
 *	a. Making data members private provides data protection.
 *	b. These data members can be accessed only through public functions of the class.
 *	c. Public functions define the class’s public interface.
 *  11. Key point #2 - separate specification from implementation: (this is the purpose of SampleClass.h and SampleClass.cpp)
 *	a. Q: Why do this? A: Intellectual property protection (anyone outside your organization 
 *          does not see the interworkings of the class - they can have the binary
 *          machine code library for their programs and your intellectual property is still 	
 *          protected), flexibility (different architectures or platforms may have slightly different 	
 *          implementation requirements), and easier maintenance.
 *  12. Constructors: a member function that is called or invoked upon the creation of an instance of a class (known as objects).
 *	a. A default constructor is a constructor that takes no arguments.
 *	b. If you write a class with no constructor at all, C++ will generate a default 	
 *          constructor for you, one that does nothing.
 */

#include "SampleClass.h"

// the implementation of all of the member functions of the class go below:

SampleClass::SampleClass() {
}

SampleClass::SampleClass(const SampleClass& orig) {
}

SampleClass::~SampleClass() {
}

