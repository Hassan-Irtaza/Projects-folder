#include <iostream>
using namespace std;

int main() {
    int marks[] = {97,57,26,45,35,44};
    int* p = marks;
    cout<<"value at mark[0] is "<<*p<<endl; 
    cout<<"value at mark[0] is "<<*(p+1)<<endl;
    cout<<"value at mark[0] is "<<*(p+2)<<endl;
    cout<<"value at mark[0] is "<<*(p+3)<<endl;
    cout<<"value at mark[0] is "<<*(p+4)<<endl;
    cout<<"value at mark[0] is "<<*(p+5)<<endl;

    return 0;
}