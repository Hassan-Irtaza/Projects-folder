#include <iostream>
using namespace std;

// reversing an arry part 2

int main()
{
    int arr[5] = {12, 3, 1, 2, 5};

    for (int i = 0, e = 4; i < e; i++, e--)
    {
        swap(arr[i], arr[e]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}