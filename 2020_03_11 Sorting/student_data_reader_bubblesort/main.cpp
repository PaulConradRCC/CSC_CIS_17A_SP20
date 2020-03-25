// learn how to read data from a text file called "students.txt" for
// learning how to work with parallel arrays, sorting and searching

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void output_records(int id[], string first[], string last[], double g[], int rows)
{
    cout << "Student ID        First Name       Last Name GPA " << endl;
    cout << "=================================================" << endl;
    
    for(int c=0;c<rows;c++)
    {
        cout << setw(10) << id[c];
        cout << "   " << setw(15) << first[c];
        cout << " " << setw(15) << last[c];
        cout << " " << setw(4) << fixed << setprecision(2) << g[c] << endl;
    }
}

int get_number_of_records()
{
    ifstream inFile;
    inFile.open("students.txt");
    
    if (inFile)
    {
        int count=0;
        string line;
        
        do
        {
            getline(inFile,line,'\n');
            count++;
        } while (line != "");
        
        inFile.close();
        
        return count-1;
    }
    else
    {
        return -1;  // -1 means we could not open the file, -1 records is an error        
    }

}

int main(int argc, char** argv) {

    int rows = get_number_of_records();
    
    if (rows==-1)
    {
        cout << "Could not open the file: students.txt" << endl;
        return 1;
    }
    
    // declare all of our parallel arrays
    int student_id[rows];
    string first_name[rows];
    string last_name[rows];
    double gpa[rows];
        
    // reopen the file students.txt to populate the arrays.
    ifstream inFile;
    inFile.open("students.txt");
    
    if(inFile)
    {
        // read in all the data
        for(int c=0;c<rows;c++)
        {
            inFile >> student_id[c];    // read in the student id
            
            string tb;
            
            getline(inFile, tb, '\t');
            getline(inFile, first_name[c], '\t'); // read in tab delimited first name            
            // inFile >> first_name[c];
            getline(inFile, last_name[c], '\t'); // read in tab delimited last name
            //inFile >> last_name[c];
            
            inFile >> gpa[c]; // read the gpa
        }
        
        inFile.close();
        
        output_records(student_id, first_name, last_name, gpa, rows);
    }
    else 
    {
        cout << "Could not open the file: students.txt" << endl;
        return 1;
    }
    return 0;
}

