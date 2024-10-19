#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"How many repititions you want to display: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}