#include <iostream>
using namespace std;

int main(){
    cout<<"this is a program to check if the number is even or odd using turneries or if statements"<<endl;
    int n;
    cout<<"input a number: ";
    cin>>n;
    (n % 2 == 0)? cout<<"even" : cout<<"odd";

    return 0;

}