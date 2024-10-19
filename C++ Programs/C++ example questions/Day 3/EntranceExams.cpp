#include <iostream>
using namespace std;

int main() {
    int Mm,Im,Em;
    cout<<"Enter your matric marks: ";
    cin>>Mm;
    cout<<"Enter your matric marks: ";
    cin>>Im;
    cout<<"Enter your matric marks: ";
    cin>>Em;
    if(Mm >= 60 && Im >= 65 && Em >= 65){
        cout<<"you have cleared the exam!! congrats";
    }else{
        cout<<"we apologize but you dont fit the criteria";
    }
    return 0;
}