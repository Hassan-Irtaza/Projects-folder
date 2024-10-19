#include <iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial= factorial * i;
    }
    return factorial;
}

int main() {
    int n; 
    cout<< "enter a number: ";
    cin>>n;
    int result  = factorial(n);
    cout<<"The factorial of "<<n<<" is: "<<result<<endl;
    return 0;
}