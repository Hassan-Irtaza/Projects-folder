#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"enter a number: ";
    cin>>n;

    if (n == 2 || n == 3)
    {
       cout<<n<<" is a prime number\n";
    }

    else if ( n % 2 == 0 || n % 3 == 0)
    {
        cout<<n<<" is not a prime number\n";
    }
    else
    {
        cout<<n<<" is a prime number\n";
    }
    return 0;
}