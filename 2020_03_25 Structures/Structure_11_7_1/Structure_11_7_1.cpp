// demonstrate array of structures and accessing members with use of structure pointers

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
    Student students[5] = { { 1234, "John", 1, 3.75 },
                            { 2345, "Bill", 3, 3.85 },
                            { 6689, "Jane", 2, 3.67 },
                            { 4412, "Alice", 1, 3.95 } };
    
    
    Student * stu_ptr = students;
    
    // can also be done, one field or member at a time
    // use the dot (.) operator to access the individual fields or members
    (stu_ptr + 4)->studentID = 6345;   
    (stu_ptr + 4)->studentName = "Ben";
    (stu_ptr + 4)->yearInSchool = 2;
    (stu_ptr + 4)->studentGPA = 3.75;
    
    // output student info - in a nice clean formatted manner
    cout << setprecision(DEC_DIGITS) << fixed;
    
    for(int i=0; i<5; i++)
    {
        cout << left << setw(LABEL_WIDTH) << "Student ID: ";
        cout << right << setw(FIELD_WIDTH) << (stu_ptr + i)->studentID << endl;
        cout << left << setw(LABEL_WIDTH) << "Student Name: ";
        cout << right << setw(FIELD_WIDTH) << (stu_ptr + i)->studentName << endl;
        cout << left << setw(LABEL_WIDTH) << "Student Year: ";
        cout << right << setw(FIELD_WIDTH) << (stu_ptr + i)->yearInSchool << endl;
        cout << left << setw(LABEL_WIDTH) << "Student GPA: ";
        cout << right << setw(FIELD_WIDTH) << (stu_ptr + i)->studentGPA << endl;
        cout << "-----------------------------------------------------------" << endl;
    }
    
    return 0;
}

