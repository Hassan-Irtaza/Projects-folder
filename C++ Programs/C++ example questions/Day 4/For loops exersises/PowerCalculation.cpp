#include <iostream>
using namespace std;

int power(int base, int exponent) 
{
    int result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}

int main() 
{
    int base, exponent;
    cout << "Enter the base (a): ";
    cin >> base;
    cout << "Enter the exponent (b): ";
    cin >> exponent;
    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    return 0;
}
