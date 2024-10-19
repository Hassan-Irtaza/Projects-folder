#include <iostream>
using namespace std;
// function for sum
int sum(int a, int b){
    int c  = a + b;
    return c;
}
// function to multiply
int mul(int a, int b){
    int c  = a + b;
    return c;
}
// function to subtract
int sub(int a, int b){
    int c  = a + b;
    return c;
}
// function to divide
int divide(int a, int b){
    int c  = a + b;
    return c;
}
// function to get remainder
int rem(int a, int b){
    int c  = a + b;
    return c;
}

int main() {
    int x,y;
    char choice;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter a second number: ";
    cin>>y;
    cout<<"what do you want to calculate, type in the operator: ";
    cin>>choice;
    switch (choice)
    {
    case '+':
        cout<<"sum: "<<sum(x,y);
        break;
    case '-':
        cout<<"sub: "<<sub(x,y);
        break;
    case '*':
        cout<<"mul: "<<mul(x,y);
        break;
    case '/':
        cout<<"div: "<<divide(x,y);
        break;
    case '%':
        cout<<"rem: "<<rem(x,y);
        break;
    }
    return 0;
}