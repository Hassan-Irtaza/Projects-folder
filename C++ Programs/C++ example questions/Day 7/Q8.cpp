#include <iostream>
using namespace std;

/*
arr2[]  = {1,2,3}
*/

int main()
{
    int arr[] = {3, 1, 2, 3, 2};
    int arr2[10];
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int b = 1; b < size; b++)
        {
            if (arr[i] == arr2[b])
            {
                cout << arr[i] << " is in the array" << endl;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}