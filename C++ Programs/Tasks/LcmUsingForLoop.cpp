#include <iostream>
using namespace std;

int main()
{
    int a, b, hcf;
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
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF: " << hcf << endl;
    int lcm = a * b / hcf;
    cout << "LCM: " << lcm;

    return 0;
}