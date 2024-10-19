#include <iostream>
using namespace std;

// 1.	Write a C++ program that takes the age of a person as input and determines if they are eligible to vote. Eligibility typically begins at 18 years old.

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "you are not elligible for voting" << endl;
    }
    else
    {
        cout << "you are elligible to vote" << endl;
    }

    return 0;
}