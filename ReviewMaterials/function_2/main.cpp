#include <iostream>
using namespace std;

void b()
{
    cout << "Inside function b()..." << endl;
}

void a()
{
    cout << "Inside function a()..." << endl;
    b();
}

int main() {
    a();
    return 0;
}

