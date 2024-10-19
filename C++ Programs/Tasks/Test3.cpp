#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    do
    {
        for (i = a; i <= a; i++)
        {
            cout << "*|/////////\\\\\\\\|*" << endl;
        }

        for (i = b; i <= b; i++)
        {
            cout << "*|/////////\\\\\\\\|*" << endl;
        }
        while (i != a || i != b)
        {
            cout << "*|                  |*" << endl;
        }
    } while (i > b);
    return 0;
}