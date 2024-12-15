#include <iostream>
using namespace std;

int main() {
    int n;
    string a;
    
    cout<<"enter a number: ";
    cin>>n;

    a = ( n % 2 == 0) ? "even": "odd";
    cout<<a;

    return 0;
}