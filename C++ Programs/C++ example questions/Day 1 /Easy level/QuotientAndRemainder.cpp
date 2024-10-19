#include <iostream>
using namespace std;

int main(){
    int a,b,quotient,remainder;
    cout<<"please input first number"<<endl;
    cin>>a;
    cout<<"please input second number"<<endl;
    cin>>b;
    quotient = a / b;
    remainder = a % b;
    if(b != 0){
        cout<<"quotient is: "<<quotient<<endl;
        cout<<"remainder is: "<<remainder<<endl;
    }
    else{
        cout<<"the value of b is 0"<<endl;
    }
    
return 0;
    
}