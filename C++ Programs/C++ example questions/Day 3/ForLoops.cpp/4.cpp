#include <iostream>
using namespace std;

int main() {
    char rows,col,n;
    // cout<<"Enter the number of rows: ";
    // cin>>rows;
    // cout<<"Enter the number of rows: ";
    // cin>>col;
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
       cout<<endl; 
        
    }
    
    return 0;
}