#include <iostream>
using namespace std;

int main()
{
    // pattern 1
    int n;
    cout << "Set the upper limit: ";
    cin >> n;
    int i = 1;
    cout << "The series (1,3,9,27,81....n) is: ";
    while (i <= n)
    {
        cout << i << " ";
        i *= 3;
    }
    cout << "\n";
    // pattern 2
    int j = 1;
    cout << "The series (1,2,3,0,5,5,6,7,0,9....n) is: ";
    while (j <= n)
    {
        if (j % 4 == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << j << " ";
        }
        j++;
    }

    return 0;
}