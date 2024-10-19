#include <iostream>

using namespace std;

int main(){
    int a,b;
    float rem;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    // while(b > 0)
    // {
    //     rem = a%b;
    //     a = b;
    //     b = rem;
    //     cout<<b;
    // }
    while( b > 0 )
    {
    rem = a%b;
    cout<<"the gcd of "<<a<<" and "<<b<< " is :"<<rem<<endl;
    }
    if (b == 0 || a == 0)
    {
        cout<<"the number should be greater then 0";
    }
    
    return 0;
}