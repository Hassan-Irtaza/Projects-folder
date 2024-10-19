#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size);

int main()
{
    int arr[] = {4, 18, 1, 5, 9, 0, 2, 7, 3, 6};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
void bubbleSort(int arr[], int size)
{
    bool swapped;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        i++;
    } while (swapped);
}