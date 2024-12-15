#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"enter a number: ";
    cin>>n;
    if (n % 1 == 0 && n % n == 0)
    {
        cout<<n<<" is a prime number\n";
    }
    else
    {
        cout<<n<<" is not a prime number\n";
    }
    
    return 0;
}