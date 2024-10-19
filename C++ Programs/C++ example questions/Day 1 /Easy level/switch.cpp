#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    char choice;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"enter an operator"<<endl;
    cin>>choice;

    switch (choice)
    {
        case '+':
            c = a+b;
            cout<<c<<endl;
            break;

        case '-':
            c = a-b;
            cout<<c<<endl;

        case '*':
            c = a*b;
            cout<<c<<endl;

        case '/':
            if (b != 0)
            {
                c = a/b;
                cout<<c<<endl;
            }
            else{
                cout<<"b is less then 0 try again";
            }
    }



}