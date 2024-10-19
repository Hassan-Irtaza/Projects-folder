#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {13, 7, 7, 23};
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 7)
        {
            if (count == 0)
            {
                cout << "7 is in the array!";
            }
            count++;
        }
    }
    cout << count;
    return 0;
}