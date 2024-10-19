#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 35, 42, 5};
    int target, size = sizeof(arr) / sizeof(int);
    bool val = false;
    cout << "Enter the number you want to find in the array: ";
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "The Element " << target << " was found in the array" << endl;
            val = true;
            break;
        }
    }
    if (!val)
    {
        cout << "The Element was not found in the array!";
    }

    return 0;
}