#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; ++i)
    {
        if (i == 1 || i == rows)
        {
            cout << "*";
            for (int j = 0; j < cols - 2; ++j)
            {
                cout << "/";
            }
            cout << "*";
        }
        else
        {
            cout << "|";
            for (int j = 0; j < cols - 2; ++j)
            {
                cout << " ";
            }
            cout << "|";
        }
        cout << endl;
    }

    return 0;
}
