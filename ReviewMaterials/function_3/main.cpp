#include <iostream>
using namespace std;

// function prototypes
void a();
void b();
void c();

// function implementations
void c()
{
    cout << "Inside function c()..." << endl;
    a();
}

void b()
{
    cout << "Inside function b()..." << endl;
    c();
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

