#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int rollnumber;
} st[10];

int main()
{

    for (int i = 1; i <= 10; ++i)
    {
        st[i].rollnumber = i + 1;
        cout << "For roll number " << st[i].rollnumber << ":" << endl;

        cout << "Enter name: ";
        cin >> st[i].name;

        cout << "Enter age: ";
        cin >> st[i].age;
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << i << ".Rollnumber: " << st[i].rollnumber << endl;
        cout << i << ".Name: " << st[i].name << endl;
        cout << i << ".Age: " << st[i].age << endl;
    }

    return 0;
}