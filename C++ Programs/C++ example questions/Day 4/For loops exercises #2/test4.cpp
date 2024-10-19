#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"How many repititions do you want to display: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j <= n; j--)
        {
            cout<<" ";
        }
        for (int x = 1; x >= n; x++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}