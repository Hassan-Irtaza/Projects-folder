#include <iostream>
using namespace std;

int lcm(int, int);
int gcd(int, int);

int main()
{
    int a, b, temp;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << lcm(a, b);
    return 0;
}
int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
}
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}