#include <iostream>
using namespace std;

// single character hex to binary

int main() {
    int n;
    cin>>n;
    while (n != 0)
    {
        cout<< n % 2;
        n = n / 2;
    }
    
    return 0;
}