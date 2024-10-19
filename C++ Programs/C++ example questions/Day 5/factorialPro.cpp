#include <iostream>
using namespace std;

int main() {
    int n; 
    cout<<"Enter the number of factorials: ";
    cin>>n;
    int factorial = 1;
    for (int j = 1; j <= n ; j++)
    {
        int factorial = 1;
        for (int i = 1; i <= j; i++)
        {
            factorial *= i;
        }
        cout<<factorial<<endl;
    }        
    return 0;
}