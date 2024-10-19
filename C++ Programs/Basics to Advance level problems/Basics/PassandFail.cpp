#include <iostream>
using namespace std;

int main()
{

    int passes = 0, failed = 0, studentcounter = 1, result, student;

    cout << "How many students are there: ";
    cin >> student;

    while (studentcounter <= student)
    {

        cout << "Enter result: (Press 1 FOR PASS, Press 2 FOR FAIL)" << endl;
        cin >> result;

        while (result <= 0 || result > 2)
        {
            cout << "Invalid Input, please input 1 or 2" << endl;
            cin >> result;
        }

        if (result == 1)
        {
            passes = passes + 1;
        }
        else if (result == 2)
        {
            failed = failed + 1;
        }

        studentcounter = studentcounter + 1;
    }

    cout << "Passed: " << passes << endl;
    cout << "Failed: " << failed << endl;

    if (passes > 8)
    {
        cout << "Bonus to Instructor" << endl;
    }

    return 0;
}