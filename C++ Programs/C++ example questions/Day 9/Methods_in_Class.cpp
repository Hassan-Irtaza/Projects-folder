#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int age;
    long int id;

    void print()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee age: " << age << endl;
        cout << "Employee id: " << id << endl;
    }
};

int main()
{
    employee emp1;
    emp1.name = "hassan";
    emp1.age = 21;
    emp1.id = 70145652;
    emp1.print();
    return 0;
}