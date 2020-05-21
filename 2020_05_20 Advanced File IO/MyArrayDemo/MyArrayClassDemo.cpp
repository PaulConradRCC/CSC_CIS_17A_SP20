#include <cstdlib>
#include <ctime>
#include <iostream>
#include "MyArrayClass.cpp"
#include "Fractions.h"
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    srand(time(0));
    
    MyArrayClass<int> a(25);
    cout << "Array a can hold " << a.GetSize() << " integers\n";
    
    cout << "\nInserting a bunch of random integers...\n";
    for(int i=0;i<a.GetSize();i++)
        a[i]=rand() % a.GetSize();
    
    // output the array of integers...
    cout << "Contents of a:\n";
    cout << a;
    cout << endl;
    
    fstream outfile;
    outfile.open("data.bin",ios::binary|ios::out);
    int sz = a.GetSize();
    outfile.write( (char *)&sz, sizeof(sz) );
    for(int i = 0; i<sz; i++)
    {
        int ele = a[i];
        outfile.write( (char *)&ele, sizeof(ele) );
    }
    outfile.close();
    
    cout << "Wrote data to data.bin\n";

    fstream infile;
    infile.open("data.bin",ios::binary|ios::in);    
    infile.read( (char *)&sz, sizeof(sz) );
    MyArrayClass<int> b(sz);    
    for(int i = 0; i<sz; i++)
    {
        int ele;
        infile.read( (char *)&ele, sizeof(ele) );
        b[i]=ele;
    }
    infile.close();
    
    cout << "Contents of b:\n";
    cout << b;
    cout << endl;
    
    ////////// test with floats
    MyArrayClass<float> fa(25);
    cout << "Array fa can hold " << fa.GetSize() << " floats\n";
    
    cout << "\nInserting a bunch of random floats...\n";
    for(int i=0;i<fa.GetSize();i++)
        fa[i]= (float)rand() / (float)rand();
    
    // output the array of floats...
    cout << "Contents of fa:\n";
    cout << fa;
    cout << endl;
    
    fstream foutfile;
    foutfile.open("float_data.bin",ios::binary|ios::out);
    sz = fa.GetSize();
    foutfile.write( (char *)&sz, sizeof(sz) );
    for(int i = 0; i<sz; i++)
    {
        float ele = fa[i];
        foutfile.write( (char *)&ele, sizeof(ele) );
    }
    foutfile.close();
    
    cout << "Wrote data to float_data.bin\n";

    fstream finfile;
    finfile.open("float_data.bin",ios::binary|ios::in);    
    finfile.read( (char *)&sz, sizeof(sz) );
    MyArrayClass<float> fb(sz);
    for(int i = 0; i<sz; i++)
    {
        float ele;
        finfile.read( (char *)&ele, sizeof(ele) );
        fb[i]=ele;
    }
    finfile.close();
    
    cout << "Contents of fb:\n";
    cout << fb;
    cout << endl;
    
    ////////// test with fractions
    MyArrayClass<Fractions> fra(15);
    cout << "Array fra can hold " << fra.GetSize() << " fractions\n";
    
    cout << "\nInserting a bunch of random fractions...\n";
    for(int i=0;i<fra.GetSize();i++)
        fra[i]= Fractions( rand() %fra.GetSize(), rand() %fra.GetSize());
    
    // output the array of fractions...
    cout << "Contents of fra:\n";
    cout << fra;
    cout << endl;
    
    fstream froutfile;
    froutfile.open("fractions_data.bin",ios::binary|ios::out);
    sz = fra.GetSize();
    froutfile.write( (char *)&sz, sizeof(sz) );
    for(int i = 0; i<sz; i++)
    {
        Fractions ele = fra[i];
        ele.writeData(froutfile); // <- major change here for objects
    }
    froutfile.close();
    
    cout << "Wrote data to fractions_data.bin\n";

    fstream frinfile;
    frinfile.open("fractions_data.bin",ios::binary|ios::in);    
    frinfile.read( (char *)&sz, sizeof(sz) );
    MyArrayClass<Fractions> frb(sz);
    for(int i = 0; i<sz; i++)
    {
        Fractions ele;
        ele.readData(frinfile);
        frb[i]=ele;
    }
    frinfile.close();
    
    cout << "Contents of frb:\n";
    cout << frb;
    cout << endl;
    
    return 0;
}

