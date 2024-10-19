#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int res = a + b;
    cout << res << endl;
}
void sub(int a, int b)
{
    int res = a - b;
    cout << res << endl;
}
void divide(int a, int b)
{
    int res = a / b;
    cout << res << endl;
}
void multiply(int a, int b)
{
    int res = a * b;
    cout << res << endl;
}

int main()
{
    int a, b;
    char op;
    int quit;
    do
    {
        cout << "enter the first number: ";
        cin >> a;
        cout << "enter the first number: ";
        cin >> b;
        cout << "enter you operator: ";
        cin >> op;
        switch (op)
        {
        case '+':
            sum(a, b);
            break;
        case '-':
            sub(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        case '*':
            multiply(a, b);
            break;
        }
        cout << "press any key to continue and 0 to quit: ";
        cin >> quit;
    } while (quit != 0);
    cout << "the program has ended" << endl;
    return 0;
}
