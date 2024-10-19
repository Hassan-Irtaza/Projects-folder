#include <iostream>
using namespace std;

void check(int num)
{

    if (num % 2 == 0)
    {
        cout << "Number is even!" << endl;
    }
    else if (num % 3 == 0)
    {
        cout << "Number is Odd!" << endl;
    }
}

int main()
{
    int a;
    cout << "Enter a num: ";
    cin >> a;
    check(a);
    return 0;
}