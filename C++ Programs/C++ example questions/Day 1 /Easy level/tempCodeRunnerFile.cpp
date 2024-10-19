#include <iostream>
using namespace std;

int ami(){
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
            cout<<c;
            break;

        case '-':
            c = a-b;
            cout<<c;

        case '*':
            c = a-b;
            cout<<c;

        case '/':
            if (b != 0)
            {
                c = a-b;
                cout<<c;
            }
            else{
                cout<<"b is less then 0 try again";
            }
        default:
        cout<<"use the correct operator";
            break;
    }

return 0;

}