#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int n = 5; n >= 1; n--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}