#include <iostream>
using namespace std;

// 2.	Create a C++ program that calculates the grade of a student based on their marks. The program should take marks as input and assign a grade according to predefined criteria (e.g., A, B, C, D, F).

int main()
{
    int marks;
    cout << "Please enter your marks: ";
    cin >> marks;
    while (marks < 0 || marks > 100)
    {
        cout << "Please enter correct marks: ";
        cin >> marks;
    }

    if (marks <= 100 && marks > 85)
    {
        cout << "Your grade is A" << endl;
    }
    else if (marks <= 85 && marks > 75)
    {
        cout << "Your grade is B" << endl;
    }
    else if (marks <= 75 && marks > 65)
    {
        cout << "Your grade is C" << endl;
    }
    else
    {
        cout << "Your grade is F" << endl;
    }

    return 0;
}