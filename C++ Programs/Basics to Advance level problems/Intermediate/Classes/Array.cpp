// #include <stdio.h>
#include <iostream>
using namespace std;

void findElement(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position: " << i + 1 << endl;
            break;
        }
    }
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6};

    // int n = 6;
    // int key = 3;

    // findElement(arr, n, key);

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // int arr2[10];
    // string password[10] = {"ghania", "Hassan", "dunya"};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << password[i] << endl;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter your desired strings for index value: " << i << endl;
    //     cin >> password[i];
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << password[i] << endl;
    // }

    // char arr2[] = {'a', 'b', 'c', 'd'};
    // char a = 'c';

    // string password[10] = {"ghania", "Hassan", "dunya"};
    // for (int i = 0; i < 10; i++)
    // {
    //     if ("Hassan" == password[i])
    //     {
    //         cout << "yes hassan is in the array at idex: " << i << endl;
    //     }
    // }

    return 0;
}