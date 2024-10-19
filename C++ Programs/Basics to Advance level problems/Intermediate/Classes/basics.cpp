#include <iostream>
using namespace std;

/*
set a password, then to change the pasword:
first enter old password, if not, then enter the hint,if not then sorry.
*/
/*
make a class with student info:
name and password.
store the password in the class; where we have made the passwprd private.
*/

class student
{
private:
    string password2 = "as";

public:
    string name;
    void getpassword(string password);
};
void student ::getpassword(string password)
{
    if (password == password2)
    {
        cout << "entering account....";
    }
}

int main()
{
    string password;
    student hassan;
    cout << "Enter your name: ";
    cin >> hassan.name;
    // cout << "Enter your Password: ";
    // cin >> hassan.password;
    cout << "Enter your Password: ";
    cin >> password;
    hassan.getpassword(password);
    return 0;
}