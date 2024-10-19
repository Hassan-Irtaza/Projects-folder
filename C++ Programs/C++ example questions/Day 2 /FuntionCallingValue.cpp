#include <iostream>
using namespace std; 
void swap(int& ,int&);
int main() {
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before swapping the value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"After swapping the value of a is "<<a<<" and the value of b is "<<b<<endl;


    return 0;
}

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}