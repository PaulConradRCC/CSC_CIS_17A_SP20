#include <iostream>
#include <fstream>
#include <string>
#include "Fractions.h"
using namespace std;

int main(int argc, char** argv) {

    string filename;
    Fractions a;
    
    cout << "Enter name of file for input (include extension): ";
    getline(cin,filename,'\n'); // allow entry of filenames with spaces
    
    fstream myFile; // create an fstream object called myFile
    myFile.open(filename.c_str(),ios::binary|ios::in); // open file as binary for input
    
    // read all the data in binary from the binary file
    //myFile.read( (char *)&a, sizeof(a) );
    a.readData(myFile);
    
    myFile.close();
    cout << "Read data from " << filename << endl;
        
    cout << "a=" << a << endl;
    
    return 0;
}

