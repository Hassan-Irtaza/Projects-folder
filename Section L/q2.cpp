#include <iostream>
using namespace std;

int main()
{
    // pattern 2
    int n;
    cout << "Set the upper limit: ";
    cin >> n;

    cout << "The series (1,3,9,27,81....n) is: ";
    for (int i = 1; i <= n;)
    {
        cout << i << " ";
        i *= 3;
    }
    cout << "\n";
    // pattern 2

    cout << "The series (1,2,3,0,5,5,6,7,0,9....n) is: ";
    for (int j = 1; j <= n; j++)
    {
        if (j % 4 == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << j << " ";
        }
    }
    return 0;
}