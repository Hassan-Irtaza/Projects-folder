#include <iostream>
using namespace std;

int main()
{
    int n = -5;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            n = n + 5;
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}