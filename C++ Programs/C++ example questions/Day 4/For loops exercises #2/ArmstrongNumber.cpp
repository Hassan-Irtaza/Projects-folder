#include <iostream>
#include <math.h>   
using namespace std;

int main() {
    int n,sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int originaln = n;
    while (n != 0)
    {
        int lastdigit = n % 10;
        cout<<lastdigit<<endl;
        sum = sum + pow(lastdigit,3);
        cout<<sum<<endl;
        n = n / 10;
        cout<<n<<endl;
    }
    if(sum == originaln){
        cout<<"The number "<<sum<<" is an armstrong number"<<endl;
    }
    else{
        cout<<"The number "<<sum<<" is not an armstrong number"<<endl;
    }
    return 0;
}