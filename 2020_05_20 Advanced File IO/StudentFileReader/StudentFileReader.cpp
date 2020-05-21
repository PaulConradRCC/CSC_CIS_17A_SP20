#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>
using namespace std;

const int GPA_FIELD_WIDTH = 4;
const int GPA_PREC = 2;

struct PersonInfo {
    string name, address, city;
    
    void printInfo()
    {
        cout << "Name: " << name << ", ";
        cout << "Address: " << address << ", ";
        cout << "City: " << city;
    }
};

struct Student
{
    int id_number;
    PersonInfo personData;
    short yearInSchool;
    double gpa;
    
    void printInfo()
    {
        cout << "Id: " << id_number << ", ";
        personData.printInfo();
        cout << ", ";
        cout << "Year: " << yearInSchool << ", ";
        cout << "GPA: " << fixed << setprecision(GPA_PREC);
        cout << setw(GPA_FIELD_WIDTH) << gpa; 
    }
};

// utility functions
void output_student_data(Student s[], int n)
{
    for(int i=0;i<n;i++)
    {
        s[i].printInfo();
        cout << endl;
    }
}

int main() {

    int returnCode = 0; // 0=program run successful, 1=program had error
    
    // open the file named students.csv for reading
    ifstream inFile;
    inFile.open("students.csv");
    
    if (inFile)
    {
        int number_students;
        
        inFile >> number_students; // read in the number of students in the file.
        
        Student students[number_students]; // declare the array
        
        // read in the data from the file
        for(int i=0;i<number_students;i++)
        {
            string read_field;
            getline(inFile, read_field,',');
            students[i].id_number = stoi(read_field);
            getline(inFile, students[i].personData.name,',');
            getline(inFile, students[i].personData.address,',');
            getline(inFile, students[i].personData.city,',');
            getline(inFile, read_field,',');
            students[i].yearInSchool = stoi(read_field);
            getline(inFile, read_field,'\n');
            students[i].gpa = stod(read_field);
        }
        inFile.close();
        
        // output the array
        output_student_data(students, number_students);
    }
    else
    {
        cout << "Could not open students.csv for input..." << endl;
        returnCode = 1;
    }
    
    return returnCode;
}

