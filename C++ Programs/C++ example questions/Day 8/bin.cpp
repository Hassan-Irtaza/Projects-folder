#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int target, l = 0, r = 4;
    cin >> target;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            cout << "found element";
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
    cout << "element not found";
    return 0;
}