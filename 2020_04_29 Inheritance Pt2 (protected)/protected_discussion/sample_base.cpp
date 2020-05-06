#include "sample_base.h"

#include <iostream>
using namespace std;

sample_base::sample_base() {
    cout << "Hello from sample_base parameterless constructor" << endl;
}

sample_base::sample_base(const sample_base& orig) {
    
}

sample_base::~sample_base() {
    cout << "Hello from sample_base destructor" << endl;
}

void sample_base::SetZ(long int z) {
    this->z = z;
}

long int sample_base::GetZ() const {
    return z;
}

void sample_base::SetY(int y) {
    this->y = y;
}

int sample_base::GetY() const {
    return y;
}

void sample_base::SetX(float x) {
    this->x = x;
}

float sample_base::GetX() const {
    return x;
}

