#include <iostream>
using namespace std;

void cgpacalc(int Marks)
{
    switch (Marks)
    {
    case 85 ... 100:
        cout << "A" << endl;
        break;
    case 80 ... 84:
        cout << "A-" << endl;
        break;
    case 75 ... 79:
        cout << "B+" << endl;
        break;
    case 70 ... 74:
        cout << "B" << endl;
        break;
    case 65 ... 69:
        cout << "C+" << endl;
        break;
    case 60 ... 64:
        cout << "C" << endl;
        break;
    case 55 ... 59:
        cout << "D+" << endl;
        break;
    case 50 ... 54:
        cout << "D" << endl;
        break;
    default:
        cout << "F" << endl;
        break;
    }
}

int main()
{
    int Marks, option;
    do
    {
        cout << "Input your Marks: ";
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