#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 1; rows <= n; rows++)
    {
        for (int colmns = 1; colmns <= rows; colmns++)
        {
            cout << colmns;
        }
        cout << endl;
    }

    return 0;
}