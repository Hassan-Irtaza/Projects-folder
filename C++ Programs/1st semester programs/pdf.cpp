#include<iostream> 
using namespace std; 

int main(){
    int a,b,c;
    
    cout << "Enter first no. ?"; 
    cin >>a;
    cout <<"Enter Second no. ?"; 
    cin >>b;
    cout <<"Enter third no. ?"; 
    cin >>c;
    
    if(a>b) 
        if(a>c)
        cout<< "1St number is greater"<< endl; 
        else
        cout<<" Third number is greater"<<endl; 
    else
        if(b>c)
        cout<<“2nd number is greater“<<endl;
        else
        cout<<“ 3rd number is greater”<<endl;
    return 0;
    
    }