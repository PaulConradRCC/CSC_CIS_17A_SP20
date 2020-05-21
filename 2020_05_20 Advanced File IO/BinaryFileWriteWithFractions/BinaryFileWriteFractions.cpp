#include <iostream>
#include <fstream>
#include <string>
#include "Fractions.h"
using namespace std;

int main(int argc, char** argv) {

    string filename;
    
    cout << "Enter name of file for output (include extension): ";
    getline(cin,filename,'\n'); // allow entry of filenames with spaces
    
    cout << "Enter a fraction: ";
    Fractions a;
    cin >> a;
    
    fstream myFile; // create an fstream object called myFile
    myFile.open(filename,ios::binary|ios::out); // open file as binary for output
    
    // write all the data out in binary
    // myFile.write( (char *)&a, sizeof(a) ); // old way
    a.writeData(myFile);
    
    myFile.close();
    cout << "Wrote data to " << filename << endl;
    
    return 0;
}

