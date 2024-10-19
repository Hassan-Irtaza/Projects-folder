#include <iostream>
using namespace std;

// This is for printing the sequence to a number.

int main(){
// Decleration,Initialization and User Input:
    int term1 = 0 ,term2 = 1,newterm,n;
    cout<<" Till which number do you want to print? ";
    cin>>n;
// First two statements when we declare first two numbers:  
    cout<<term1<<" , "<<term2;
    newterm = term1 + term2;
// set the loop to be less then n variable
    for (; newterm <= n; ){
// Printing Newterm
        cout<<" , "<<newterm;
// Swapping:
        term1 = term2;
        term2 = newterm;
        newterm = term1 + term2;

    }   
}    