#include <iostream>
using namespace std;

int main(){
    int n,sum = 0;

    //user input
    cout <<"Input a Number: ";
    cin>>n;

    //for loop
    for(int i=1; i <= n; ++i){
    sum = sum+i;
    }

    //output
    cout << "Sum: " << sum;
    
    return 0;
}
