#include <iostream>
using namespace std;

void cgpacalc(int Marks)
{
    if (Marks > 85)
    {
        cout << "A" << endl;
    }
    else if (Marks < 85 && Marks >= 80)
    {
        cout << "A-" << endl;
    }
    else if (Marks <= 80 && Marks >= 75)
    {
        cout << "B+" << endl;
    }
    else if (Marks < 75 && Marks >= 70)
    {
        cout << "B" << endl;
    }
    else if (Marks <= 70 && Marks >= 65)
    {
        cout << "C+" << endl;
    }
    else if (Marks < 65 && Marks >= 60)
    {
        cout << "C" << endl;
    }
    else if (Marks <= 60 && Marks >= 55)
    {
        cout << "D+" << endl;
    }
    else if (Marks < 55 && Marks >= 50)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}

int main()
{
    int Marks, option;
    do
    {
        cout << "Input your Marks: " << endl;
        cin >> Marks;
        if (Marks < 0 || Marks > 100)
        {
            cout << "invalid input Please stay in range of 100 to 0: " << endl;
            cin >> Marks;
        }
        
        cgpacalc(Marks);
        
        cout << "Press 0 to quit the program and 1 to try again?" << endl;
        cin >> option;

    } while (option != 0);
    return 0;
}