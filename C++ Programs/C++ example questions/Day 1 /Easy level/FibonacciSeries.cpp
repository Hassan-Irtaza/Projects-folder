#include <iostream>
using namespace std;

// This is for printing the sequence to a specific term

int main(){
// Decleration,Initialization and User Input:
    int term1 = 0 ,term2 = 1,newterm,n;
    cout<<"How many terms do you want to print? ";
    cin>>n;
    for (int i = 1; i <= n; ++i){
// First two statements when we declare first two numbers:  
      if (i==1){
        cout<<term1<<" , ";
      }
      if(i==2){
        cout<<term2<<" , ";
      }
      else{
// Swapping:
        newterm=term1 + term2;
        term1 = term2;
        term2 = newterm;
// Printing Newterm
        cout<<newterm<<" , ";
      }   
    }    
}