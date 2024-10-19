#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the first number: ";
    cin >> a;
    while (a < 0)
    {
        cout << "Enter the first number: ";
        cin >> a;
    }
    cout << "Enter the second number: ";
    cin >> b;
    while (b < 0)
    {
        cout << "Enter the second number: ";
        cin >> b;
    }
    int a2 = a;
    int b2 = b;
    while (a % b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = b;
    cout << "GCD: " << gcd << endl;
    int lcm = a2 * b2 / gcd;
    cout << "LCM: " << lcm << endl;
    return 0;
}
