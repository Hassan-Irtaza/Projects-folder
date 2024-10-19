#include <iostream>
using namespace std;

int main()
{
    int del, size;
    // cout<<"enter the size of the array: ";
    // cin>>size;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size = sizeof(arr) / sizeof(int);
    cout << "enter the position of the number you want to delete: ";
    cin >> del;
    // for sorted array
    // for (int i = del - 1; i < size - 1; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }
    // size--;
    // for unsorted
    arr[del - 1] = arr[size - 1];
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << "at " << i << ": " << arr[i] << endl;
    }
    return 0;
}