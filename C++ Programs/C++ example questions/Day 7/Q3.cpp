#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {12, 32, 3, 1};
    int sum = 0, count = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
        count++;
    }
    cout << sum << endl;
    cout << sum / count << endl;
    return 0;
}