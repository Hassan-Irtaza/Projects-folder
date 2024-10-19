#include <iostream>
using namespace std;

int main() {
    int a,b;
    char calculate;

do
{
    cout << "enter first integer:";
    cin >> a ;

    cout << "enter second integer:";
    cin >> b ;
    
    cout << "what do you want to calculate press 0 to exit"<<endl;
    cin >>  calculate;

    int c = a + b;
    int d = a * b;
    int e = a / b;
    int f = a - b;

switch (calculate)
{
case '+':
    cout << c <<endl;
    break;
case '-':
    cout << f <<endl;
    break;
case '*':
    cout << e <<endl;
    break;
case '/':
    cout << d <<endl;
    break;
default:
    cout<<"Enter the proper operation! "<<endl;
    break;
}

} while (calculate != 0);
    cout<<"The program has been terminated! "<<endl;
    return 0;
}
