#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    int retCode = 0;
    
    string filename;
    short int v1 = -12345, v2 = 23456;
    int v3 = -12345678, v4 = 2345678;
    long int v5 = -1234567890, v6 = 234567890;
    
    float v7 = 3.14159265;
    double v8 = 2*v7; // 2PI
    long double v9 = v7/2; // PI/2
    
    bool v10 = true, v11 = false;
    
    cout << "Enter name of file for output (include extension): ";
    getline(cin,filename,'\n'); // allow entry of filenames with spaces
    
    fstream myFile; // create an fstream object called myFile
    myFile.open(filename,ios::binary|ios::out); // open file as binary for output
    
    if (myFile)
    {
        // write all the data out in binary
        myFile.write( (char *)&v1, sizeof(v1) );
        myFile.write( (char *)&v2, sizeof(v2) );
        myFile.write( (char *)&v3, sizeof(v3) );
        myFile.write( (char *)&v4, sizeof(v4) );
        myFile.write( (char *)&v5, sizeof(v5) );
        myFile.write( (char *)&v6, sizeof(v6) );
        myFile.write( (char *)&v7, sizeof(v7) );
        myFile.write( (char *)&v8, sizeof(v8) );
        myFile.write( (char *)&v9, sizeof(v9) );
        myFile.write( (char *)&v10, sizeof(v10) );
        myFile.write( (char *)&v11, sizeof(v11) );

        myFile.close();
        cout << "Wrote data to " << filename << endl;
    }
    else
    {
        cout << "Could not open " << filename << " for output." << endl;
        retCode = 1;
    }
    
    return retCode;
}

