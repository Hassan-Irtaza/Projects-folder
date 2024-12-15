#include <iostream>
#include <fstream>
using namespace std;

class employee
{
private:
    int id;
    string name;
    string password;

public:
    void setId(int Id)
    {
        id = Id;
    }
    void setName(string Name)
    {
        name = Name;
    }
    void setPassword(string Password)
    {
        password = Password;
    }
    // void getPassword(string Password)
    // {
    //     if (password == Password)
    //     {
    //         cout << password << endl;
    //     }
    //     else
    //     {
    //         cout << "incorrect password";
    //     }
    // }
    void print()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee password: " << password << endl;
    }
};
int main()
{
    employee emp[3];
    string line;
    int i = 0;
    ifstream inputfile("EmployeeData.txt");
    if (inputfile)
    {
        cout << "File opened!" << endl;
        while (getline(cin, line) && i < 3)
        {
            // emp[i].id(line);
            emp[i].setName(line);
            emp[i].setPassword(line);
            i++;
        }
    }
    cout << "file closed!";
    inputfile.close();
    for (int i = 0; i < 3; i++)
    {
        emp[i].print();
    }
    return 0;
}