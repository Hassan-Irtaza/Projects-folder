#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3;
    cout<<"Enter side no 1: ";
    cin>>s1;
    cout<<"Enter side no 2: ";
    cin>>s2;
    cout<<"Enter side no 3: ";
    cin>>s3;
    if(s1 * s1 == s2 * s2 + s3 * s3){
        cout<<"this is a right angle triangle ";
    }
    else{
        cout<<"this is not a right angle triangle ";
    }
    return 0;
}