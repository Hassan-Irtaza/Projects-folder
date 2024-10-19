#include <iostream>
using namespace std;
// For example, the GCD of 4 and 10 is 2 since it is the largest integer that can divide both 4 and 10.
// Find HCF/GCD using while loop:
int main(){
    int a,b,temp,hcf;
// user input:
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
// while loop:
    while(a != b) {
    if(a > b)
      a -= b;
    else
      b -= a;
  }
// output:
    cout<<"HCF: "<<a<<endl;

return 0;
}