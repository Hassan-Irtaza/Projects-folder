#include <iostream>
using namespace std;

int main()
{
    int max;
    cout << "enter the size of the array: ";
    cin >> max;
    int arr[max];
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < max; i++)
    {
        cout << arr[i];
    }
    return 0;
}