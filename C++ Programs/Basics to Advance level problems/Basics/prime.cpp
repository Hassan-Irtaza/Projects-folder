#include <iostream>
using namespace std;
int main()
{
    for (int j = 1; j <= 4; j++)
    {
        for (int k = 1; k <= 3; k++)
        {
            if (j == 2 && k == 2)
            {
                break;
            }
            cout << j << " " << k << "\n";
        }
    }
}