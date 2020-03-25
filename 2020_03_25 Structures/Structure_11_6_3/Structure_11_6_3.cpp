// demonstrate pointer of structures and accessing members

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// good programming practice with named constants 
const int LABEL_WIDTH = 15;
const int FIELD_WIDTH = 10;
const int DEC_DIGITS = 2;

struct Student  // Student is the name of the structure, also called structure tag
{
    int studentID;      // member or field called studentID
    string studentName; // member or field called studentName
    short yearInSchool;  // member or field called yearInSchool;
    double studentGPA;         // member or field called studentGPA
};

int main(int argc, char** argv) {

    // initializing structures
    // can be done like a set notation
    Student student1 = { 1234, "John", 1, 3.75 };
    
    // A student pointer
    Student * student1_ptr = &student1;
    // can also be done, one field or member at a time
    // use the dot (.) operator to access the individual fields or members
    Student student2;
    student2.studentID = 2345;
    student2.studentName = "Bill";
    student2.yearInSchool = 3;
    student2.studentGPA = 3.85;
    
    // Another student pointer
    Student * student2_ptr = &student2;
    
    // output student info - in a nice clean formatted manner
    cout << setprecision(DEC_DIGITS) << fixed;
    
    cout << left << setw(LABEL_WIDTH) << "Student ID: ";
    cout << right << setw(FIELD_WIDTH) << (*student1_ptr).studentID << endl;    // using indirection operator, note: must be inside ( )
    cout << left << setw(LABEL_WIDTH) << "Student Name: ";
    cout << right << setw(FIELD_WIDTH) << student1_ptr->studentName << endl;    // using the arrow operator, does same as (*student1_ptr)
    cout << left << setw(LABEL_WIDTH) << "Student Year: ";
    cout << right << setw(FIELD_WIDTH) << student1_ptr->yearInSchool << endl;
    cout << left << setw(LABEL_WIDTH) << "Student GPA: ";
    cout << right << setw(FIELD_WIDTH) << (*student1_ptr).studentGPA << endl;
    
    return 0;
}

