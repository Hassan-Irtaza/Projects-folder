#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    cout << "Enter the first angle of the triangle: ";
    cin >> a;
    cout << "Enter the second angle of the triangle: ";
    cin >> b;
    res = 180 - (a + b);
    cout << "The third angle of the triangle is: " << res << endl;
    return 0;
}