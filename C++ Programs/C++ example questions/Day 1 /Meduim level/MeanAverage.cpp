#include <iostream>
using namespace std;

int main(){
    int n;
    float average,sum = 0.0 ,num[100];

    cout<<"Enter the amount of Numbers to take Average: ";
    cin>>n;
    while (n > 100 || n <= 0)
    {
        cout<<"Error enter a Number between 1 and 100";
        cout<<"enter the number again";
        cin>>n;
    }
    for (int i = 0; i < n; i++)
    {
        cout<< i+1 <<".Enter the Number";
        cin>>num[i];
        sum = sum+num[i];
    }
    average = sum/n;
    cout<<"average is: "<<average;
}