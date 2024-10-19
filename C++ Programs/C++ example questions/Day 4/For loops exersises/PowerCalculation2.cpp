#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    cout << "Enter the base (a): ";
    cin >> base;
    cout << "Enter the exponent (b): ";
    cin >> exponent;
    int result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result = result * base;
    }
    cout<<result<<endl;
    return 0;
}