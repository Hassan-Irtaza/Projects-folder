#include <iostream> //preprocessor directive , header file
using namespace std; //standard namespace

int main() { // Main function
    int n; // decleration
    cout<<"Enter the number of iterations: "; //insertion operator
    cin>>n; // extraction operator
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}