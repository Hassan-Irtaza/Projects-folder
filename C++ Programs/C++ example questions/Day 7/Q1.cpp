#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {14, 15, 12, 1};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max;
    cout << min;
    return 0;
}