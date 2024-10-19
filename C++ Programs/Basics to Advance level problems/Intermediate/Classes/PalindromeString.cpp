#include <iostream>
using namespace std;

bool ispalidrome(string name)
{
    for (int i = 0, b = name.length() - 1; i < (name.length() / 2); i++, b--)
    {
        if (name.at(i) != name.at(b))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    if (ispalidrome(name))
    {
        cout << "your name is a pailindrome!" << endl;
    }
    else
    {
        cout << "your name is not a pailindrome!" << endl;
    }

    return 0;
}