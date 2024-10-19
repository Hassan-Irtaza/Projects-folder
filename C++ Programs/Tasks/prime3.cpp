/*
Write a program to get the interger no from the user,and check weather the number is prime or not,if the no is prime then Turn ON the LED,and if the No is not prime then Turn OFF the LED, use SWITCH Statement to handle the both cases.
*/

#include <iostream>
#include <cmath>
using namespace std;
bool prime(int);

bool prime(int n)
{

    if (n == 2 || n == 3)
    {

        return true;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {

        return false;
    }
    else
    {

        return true;
    }
    return true;
}

int main()
{

    int n, j, isprime;

    cout << "Enter a positive integer" << endl;
    cin >> n;

    while (n <= 0)
    {

        cout << "Please enter a positive integer" << endl;
        cin >> n;
    }

    isprime = prime(n);

    switch (isprime)
    {

    case true:
        cout << n << " is a prime number." << endl;
        cout << "The Led is Turning On" << endl;
        break;

    case false:
        cout << n << " is not a prime number." << endl;
        cout << "The Led is Turning off" << endl;
        break;

    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}