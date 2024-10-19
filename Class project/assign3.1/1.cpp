#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter the element to search for: ";
    cin >> target;

    int index = linearSearch(arr, n, target);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
