#include <iostream>
using namespace std;

// assending

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    if (arr[0] > arr[1])
        swap(arr[0], arr[1]);
    if (arr[1] > arr[2])
        swap(arr[1], arr[2]);
    if (arr[2] > arr[3])
        swap(arr[2], arr[3]);
    if (arr[3] > arr[4])
        swap(arr[3], arr[4]);
    if (arr[0] > arr[1])
        swap(arr[0], arr[1]);
    if (arr[1] > arr[2])
        swap(arr[1], arr[2]);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}