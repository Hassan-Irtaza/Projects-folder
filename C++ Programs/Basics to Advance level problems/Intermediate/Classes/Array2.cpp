#include <iostream>
using namespace std;

int min(int arr[6])
{
    int min = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter your number: ";
        cin >> arr[i];
    }
    cout << "the minimum number in the array is: " << min(arr) << endl;

    return 0;
}