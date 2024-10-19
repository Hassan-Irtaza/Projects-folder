#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 34, 54, 100};
    int target, size = sizeof(arr) / sizeof(int);
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "element found!!";
            return 0;
        }
    }
    cout << "element not found!!";
    return 0;
}