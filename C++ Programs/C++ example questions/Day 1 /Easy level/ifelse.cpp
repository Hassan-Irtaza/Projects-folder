#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    char choice;
    cout<<"please input first number"<<endl;
    cin>>a;
    cout<<"please input second number"<<endl;
    cin>>b;
    cout<<"please input the operator"<<endl;
    cin>>choice;

    if(choice == '+'){
        c= a+b;
        cout<<c;
    }
    else if(choice == '-'){
        c= a-b;
        cout<<c;
    }
    else if(choice == '*'){
        c= a*b;
        cout<<c;
    }
    else{
        c= a/b;
        cout<<c;
    }
    
return 0;
    
}