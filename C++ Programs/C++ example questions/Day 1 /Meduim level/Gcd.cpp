#include <iostream>
using namespace std;
// For example, the GCD of 4 and 10 is 2 since it is the largest integer that can divide both 4 and 10.
// Find HCF/GCD using for loop:
int main(){
    int a,b,temp,hcf;
// user input:
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
// swapping:
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
// for loop:
    for (int i = 1; i < b; ++i){
        if(b % i == 0 && a % i == 0)
        hcf = i;
    }
// output:
    cout<<"HCF: "<<hcf<<endl;

return 0;
}