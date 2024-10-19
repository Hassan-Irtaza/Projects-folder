#include <iostream>
using namespace std;
float bank(float principal, float interest = 1.04){
    int YearEndPay = principal * interest; 
    return YearEndPay;
}
int main() {
    int a,b;
    cout<<"Enter the amount of money you want to deposit: ";
    cin>>a;
    cout<<"the year end payment for this deposit is "<<bank(a)<<endl;
    cout<<"However if you are our premium custumor you will recieve "<<bank(a,1.08);
    return 0;
}