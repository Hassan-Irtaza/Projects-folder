#include <iostream>
using namespace std;

int main() {
    int n;
    int next;
    int first = 0;
    int second = 1;
    cout<<"Enter the number of terms in the fibonacci series: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<first<<endl;

        next = first + second;
        first = second;
        second = next;
    }
    
    return 0;
}