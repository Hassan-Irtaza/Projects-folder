#include <iostream>
using namespace std;

int main() {
    float op,sp,dif,dif2;
    
    cout<<"Enter your original price: ";
    cin>>op;
    cout<<"Enter your selling price: ";
    cin>>sp;

    dif = op - sp;
    dif2 = sp - op;

    if(op > sp){
    cout<<"Your profit is: "<<dif<<"$"<<endl;
    cout<<"Your profit percentage is: "<<(dif/op) * 100<<"%"<<endl;
    }

    else if(sp > op){
    cout<<"Your loss is: "<<dif2<<"$"<<endl;
    cout<<"Your loss percentage is: "<<(dif2/op) * 100<<"%"<<endl; 
    }
    
    return 0;
}