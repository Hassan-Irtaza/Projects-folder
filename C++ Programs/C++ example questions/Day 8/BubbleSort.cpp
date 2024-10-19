#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 18, 1, 5, 9, 0, 2, 7, 3, 6};
    int size = sizeof(arr) / sizeof(int);
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}