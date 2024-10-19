#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int l = 0, r = 4, target;
    cout << "Enter the number you want to find in the array: ";
    cin >> target;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == target)
        {
            cout << "Yes, the element " << target << " is in the array at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "No, the element " << target << " is not in the array." << endl;
    return 0;
}
