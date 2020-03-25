#include <iostream>
#include <string>
using namespace std;

struct Pet 
{
    string name;
    int age;
    double weight;
};

Pet copyPet(Pet p)
{
    Pet temp;
    
    temp.name = p.name;
    temp.age = p.age;
    temp.weight = p.weight;
    
    return temp;
}

int main(int argc, char** argv) {

    Pet meow = {"Meow", 10, 18.2 };
    
    Pet copy_of_meow = copyPet(meow);
    
    cout << copy_of_meow.name << endl;
    cout << copy_of_meow.age << endl;
    cout << copy_of_meow.weight << endl;
    
    return 0;
}

