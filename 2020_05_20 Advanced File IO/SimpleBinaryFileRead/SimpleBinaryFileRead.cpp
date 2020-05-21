#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    int retCode = 0;
    
    string filename;
    short int v1, v2;
    int v3, v4;
    long int v5, v6;
    
    float v7;
    double v8; // 2PI
    long double v9; // PI/2
    
    bool v10, v11;
    
    cout << "Enter name of file for input (include extension): ";
    getline(cin,filename,'\n'); // allow entry of filenames with spaces
    
    fstream myFile; // create an fstream object called myFile
    myFile.open(filename.c_str(),ios::binary|ios::in); // open file as binary for input
    
    if (myFile)
    {
        // read all the data in binary from the binary file
        myFile.read( (char *)&v1, sizeof(v1) );
        myFile.read( (char *)&v2, sizeof(v2) );
        myFile.read( (char *)&v3, sizeof(v3) );
        myFile.read( (char *)&v4, sizeof(v4) );
        myFile.read( (char *)&v5, sizeof(v5) );
        myFile.read( (char *)&v6, sizeof(v6) );
        myFile.read( (char *)&v7, sizeof(v7) );
        myFile.read( (char *)&v8, sizeof(v8) );
        myFile.read( (char *)&v9, sizeof(v9) );
        myFile.read( (char *)&v10, sizeof(v10) );
        myFile.read( (char *)&v11, sizeof(v11) );

        myFile.close();
        cout << "Read data from " << filename << endl;

        cout << "v1=" << v1 << ", v2=" << v2 << endl;
        cout << "v3=" << v3 << ", v4=" << v4 << endl;
        cout << "v5=" << v5 << ", v6=" << v6 << endl;
        cout << "v7=" << v7 << ", v8=" << v8 << endl;
        cout << "v9=" << v9 << endl;
        cout << "v10=" << v10 << ", v11=" << v11 << endl;
    }
    else
    {
        cout << "Could not open " << filename << " for input." << endl;
        retCode = 1;
    }
    
    return retCode;
}

