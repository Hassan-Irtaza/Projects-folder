#include <iostream>
using namespace std;
// prototype function
int sum(int,int);

int main() {
    int x,y;
    cout<<"enter a number: ";
    cin>>x;
    cout<<"enter second number: ";
    cin>>y;
    cout<<"Sum: "<<sum(x,y);
    return 0;
}

int sum(int a,int b){
    int c = a + b;
    return c;
}