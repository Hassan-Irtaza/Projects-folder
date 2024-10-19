#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int size)
{
    int newsize = 0;
    for (int i = 0; i < size; i++)
    {
        bool isduplicate = false;
        for (int j = 0; j < newsize; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = true;
                break;
            }
        }
        if (!isduplicate)
        {
            arr[newsize] = arr[i];
            newsize++;
        }
    }
    return newsize;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 6, 6};
    int size = sizeof(arr) / sizeof(int);
    int newsize = removeDuplicate(arr, size);
    for (int i = 0; i < newsize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}