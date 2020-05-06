#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;

class Exception {
public:
    Exception(string name, string message, int line);
    string getExceptionName() const;
    string getExceptionMessage() const;
    int getExceptionLineNumber() const;
    
    string getException() const;
private:
    string exception_name;
    string exception_message;
    int exception_line_number;
};

#endif /* EXCEPTION_H */

