#include <iostream>
using namespace std;

int main() {
    int a,b,rem;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"enter a number: ";
    cin>>b;
    while(b > 0){
    rem = a%b;
    a = b;
    b = rem;
    }
    cout<<"the gcd is :"<<a;
    return 0;
}