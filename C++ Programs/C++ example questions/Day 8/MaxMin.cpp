#include <iostream>
using namespace std;

int main()
{

    // Finding minimum and maximum array

    int arr[100];
    int n;
    int max = 0;
    int min = 100;

    cout << "Enter the number of elements you want: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Element of the array: ";
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The Maximum Value in the array is: " << max << endl;
    cout << "The Minimum Value in the array is: " << min << endl;

    return 0;
}