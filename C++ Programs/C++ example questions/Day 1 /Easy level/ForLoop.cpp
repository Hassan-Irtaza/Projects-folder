#include <iostream>
using namespace std;

int main(){
// sum of n natural numbers:
// declarationand initialization:
    int sum,n,i;
    cout<<"Input a Number: ";
    cin>>n;
    sum = 0;
    i = 0;
// using for loop:
    for (;i <= n;)
    {
    sum=sum+i;
    i++;
    }
// using while loop:
    while(i<=n){
        sum += i;
        i++;
    }
    cout<<"sum of the natural numbers of "<<n<< ": " <<sum<<endl;
}