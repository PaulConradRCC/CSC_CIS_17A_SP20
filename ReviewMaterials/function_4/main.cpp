#include <iostream>
#include <string>
using namespace std;

/*
string tf(int x, bool s)
{
    if(s) return x==0 ? "FALSE" : "TRUE ";
    else return (string)tf(x);
}
 * 
 */

char tf(int x)
{
    return x==0 ? 'F' : 'T';
}

int main(int argc, char** argv) {

    for(int x=0; x<=1; x++)
        for(int y=0; y<=1; y++)
        {
            cout << tf(x,true) << "  " << tf(y,true) << "  ";
            cout << tf(x&y,true) << endl;
        }
    
    return 0;
}

