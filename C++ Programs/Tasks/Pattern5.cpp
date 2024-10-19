#include <iostream>
using namespace std;

/*
Enter the number of rows: 5
    X
   X X
  X X X
 X X X X
X X X X X
*/

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << "X "; // whitespace after X
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}