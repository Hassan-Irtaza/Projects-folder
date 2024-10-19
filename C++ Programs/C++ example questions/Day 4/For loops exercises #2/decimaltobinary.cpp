#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int deci,bin;
    cout<<"Enter a Decimal number: ";
    cin>>deci;
    while (deci != 0)
    {
        bin = deci % 2;
        deci = deci / 2;
        cout<<bin<<endl;  
    }
   
    return 0;
}