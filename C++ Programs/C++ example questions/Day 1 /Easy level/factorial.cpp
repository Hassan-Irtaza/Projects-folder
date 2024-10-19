#include <iostream>
using namespace std;

int main(){
// decleration,initailization and user input
    int n,i,factorial;
    cout<<"input a number: ";
    cin>>n;
    i = 1;
    factorial = 1;
// for loop
    for(;i <= n;){
       factorial *= i;
       i++; 
    }
// while loop
    while (i <= n)
    {
        factorial = factorial*i;
        i++;
    }
// output
    cout<<"The factorial of "<<n<<": "<<factorial<<endl;
}