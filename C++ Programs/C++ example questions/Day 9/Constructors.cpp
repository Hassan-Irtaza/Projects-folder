#include <iostream>
using namespace std;

// constructer used to shorten code

class employee
{
public:
    string name;
    float age;
    long int id;

    employee(string Name, float Age, long int Id)
    {
        // variable name MUST be different!!
        name = Name;
        age = Age;
        id = Id;
    }
    void print()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee age: " << age << endl;
        cout << "Employee id: " << id << endl;
    }
};

int main()
{
    employee emp1 = employee("hassan", 21, 70145652);
    emp1.print();
    return 0;
}