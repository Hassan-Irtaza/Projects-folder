#include <iostream>
using namespace std;

inline int product(int, int);
int main() {
    int a,b;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    cout<<"product: "<<product(a,b)<<endl;
    return 0;
}

inline int product(int a , int b){
    return a*b;
}