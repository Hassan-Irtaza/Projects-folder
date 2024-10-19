#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int Num1, Num2, i, num, digit, sum, count;

    cout << "Enter first number: ";
    cin >> Num1;

    cout << "Enter second number: ";
    cin >> Num2;

    if (Num1 > Num2)
    {
        Num1 = Num1 + Num2;
        Num2 = Num1 - Num2;
        Num1 = Num1 - Num2;
    }

    cout << "Armstrong numbers between " << Num1 << " and " << Num2 << " are: " << endl;

    for (i = Num1; i <= Num2; i++)
    {

        count = 0;

        num = i;

        while (num > 0)
        {
            ++count;
            num /= 10;
        }

        sum = 0;

        num = i;

        while (num > 0)
        {
            digit = num % 10;
            sum = sum + pow(digit, count);
            num /= 10;
        }

        if (sum == i)
        {
            cout << i << ", ";
        }
    }

    return 0;
}
