#include <iostream>
using namespace std;

// reversing an array

int main()
{
    int arr[4] = {12, 3, 1, 2};
    int arr2[4];
    for (int i = 3, b = 0; b < 4, i >= 0; b++, i--)
    {
        arr2[i] = arr[b];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}