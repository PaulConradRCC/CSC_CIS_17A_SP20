#include "Exception.h"

Exception::Exception(string name, string message, int line)
{
    this->exception_name = name;
    this->exception_message = message;
    this->exception_line_number = line;
}

string Exception::getExceptionName() const
{
    return this->exception_name;
}

string Exception::getExceptionMessage() const
{
    return this->exception_message;
}

int Exception::getExceptionLineNumber() const
{
    return this->exception_line_number;
}

string Exception::getException() const
{
    return this->exception_name + ": \n\t" + this->exception_message + 
            "\n\tthrown on line: " + std::to_string(this->exception_line_number);
}