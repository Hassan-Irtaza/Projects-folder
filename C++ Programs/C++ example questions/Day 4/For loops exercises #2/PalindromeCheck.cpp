#include <iostream>
using namespace std;

int main() {
    int n,reverse = 0,digit;
    cout<<"Enter a number to check whether its a palindrome or not: ";
    cin>>n;
    while (n != 0)
    {
     digit = n % 10;
     reverse = reverse*10 + digit;
     n = n / 10;  
    }
    cout<<reverse;
    return 0;
}