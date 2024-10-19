#include <iostream>
using namespace std;

int main()
{
    int a, prime = 0;
    cout << "Enter your number: ";
    cin >> a;
    while (a < 0)
    {
        cout << "Enter the first number: ";
        cin >> a;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            prime++;
            break;
        }
    }
    if (prime == 0)
    {
        cout << a << " is a prime number!";
    }
    else
    {
        cout << a << " is not a prime number!";
    }
    return 0;
}