// demonstrate nested structures and accessing members, and functions

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// good programming practice with named constants 
const int LABEL_WIDTH = 15;
const int FIELD_WIDTH = 10;
const int DEC_DIGITS = 2;

struct Address
{
    int streetNumber;
    string streetName, cityName, stateName, country, zipCode;
};

struct PersonInfo // PersonInfo is the name of the structure
{
    string name;
    int age;
    Address MailingAddress, BillingAddress;
};

struct Student  // Student is the name of the structure, also called structure tag
{
    int studentID;                  // member or field called studentID
    PersonInfo studentPersonInfo;   // member or field called studentPersonInfo of the type: PersonInfo
    short yearInSchool;             // member or field called yearInSchool;
    double studentGPA;              // member or field called studentGPA
};

void outputPersonInfo(PersonInfo pi)
{
    cout << "Name: " << pi.name << ", age: " << pi.age << endl;
}

PersonInfo getPersonInfo()
{
    PersonInfo input;
    cout << "Enter name: ";
    cin >> input.name;
    cout << "Enter age: ";
    cin >> input.age;
    
    return input;
}

void outputStudent(Student s)
{
    // output student info - in a nice clean formatted manner
    cout << setprecision(DEC_DIGITS) << fixed;
    
    cout << left << setw(LABEL_WIDTH) << "Student ID: ";
    cout << right << setw(FIELD_WIDTH) << s.studentID << endl;
    cout << left << setw(LABEL_WIDTH) << "Student Name: ";
    cout << right << setw(FIELD_WIDTH) << s.studentPersonInfo.name << endl;
    cout << left << setw(LABEL_WIDTH) << "Student Age: ";
    cout << right << setw(FIELD_WIDTH) << s.studentPersonInfo.age << endl;
    cout << left << setw(LABEL_WIDTH) << "Student Year: ";
    cout << right << setw(FIELD_WIDTH) << s.yearInSchool << endl;
    cout << left << setw(LABEL_WIDTH) << "Student GPA: ";
    cout << right << setw(FIELD_WIDTH) << s.studentGPA << endl;
}

Student getStudent()
{
    Student input;
    
    cout << "Enter student ID: ";
    cin >> input.studentID;
    
    // call getPersonInfo function to get name and age
    input.studentPersonInfo = getPersonInfo();
    
    cout << "Enter student year in school: ";
    cin >> input.yearInSchool;
    
    cout << "Enter student GPA: ";
    cin >> input.studentGPA;
    
    return input;
}

int main(int argc, char** argv) {

    // initializing structures
    // can be done like a set notation, with a set within the set for the
    // nested structure
    Student student1 = { 1234, {"John", 27}, 1, 3.75 };
    
    // can also be done, one field or member at a time
    // use the dot (.) operator to access the individual fields or members
    Student student2;
    student2.studentID = 2345;
    student2.studentPersonInfo.name = "Bill";
    student2.studentPersonInfo.age = 31;
    student2.yearInSchool = 3;
    student2.studentGPA = 3.85;
    
    outputStudent(student1);
    cout << "-------------------------------------------------------------" << endl;
    outputStudent(student2);
    cout << "-------------------------------------------------------------" << endl;
    
    // user inputted student
    Student new_student = getStudent();
    outputStudent(new_student);
    
    return 0;
}

