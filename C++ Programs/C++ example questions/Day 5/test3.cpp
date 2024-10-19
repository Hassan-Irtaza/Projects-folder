#include <iostream>
using namespace std;

int main() {
    int n; // decleration
    cout<<"Enter the number of iterations: "; //insertion operator
    cin>>n; // extraction operator
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}