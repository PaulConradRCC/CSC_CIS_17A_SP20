#include <iostream>
#include <string>
using namespace std;

enum Days { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

string DayName[] = { "", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", 
                   "FRIDAY", "SATURDAY", "SUNDAY" };

int main(int argc, char** argv) {

    cout << SUNDAY << " is the integer representation of ";
    cout << DayName[SUNDAY] << endl;
    
    // TUESDAY = 12345;  // this will not compile.
    
    for(int i=MONDAY; i<=SUNDAY; i++)
    {
        cout << i << " is the integer representation of ";
        cout << DayName[i] << endl;
    }
    return 0;
}

