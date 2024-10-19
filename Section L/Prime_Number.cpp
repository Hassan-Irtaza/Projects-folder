#include <iostream>
using namespace std;

void swap(int &Num1, int &Num2)
{
    if (Num1 > Num2)
    {
        Num1 = Num1 + Num2;
        Num2 = Num1 - Num2;
        Num1 = Num1 - Num2;
    }
}
int main()
{
    int Num1, Num2;

    cout << "Enter a number: ";
    cin >> Num1;
    cout << "Enter a number: ";
    cin >> Num2;

    swap(Num1, Num2);

    cout << "The prime numbers between " << Num1 << " to " << Num2 << " are: ";

    for (int i = Num1; i < Num2; i++)
    {
        if (Num2 == i)
        {
        }
    }

    return 0;
}