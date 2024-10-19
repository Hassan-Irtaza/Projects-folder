#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please enter the number for which you would like to display the multiplication table: ";
    cin>>n;
    for (int i = 1; i <= 10 ; i++)
    {
        cout<<n<<" multiplied by "<<i<<" is: "<< n * i <<endl;
    }
    return 0;
}