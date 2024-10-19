#include <iostream>
using namespace std;

void swap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter a num: ";
    cin >> a;
    cout << "Enter a num: ";
    cin >> b;
    cout << "Before Swap" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    swap2(a, b);
    cout << "After Swap" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}