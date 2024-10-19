#include <iostream>
using namespace std;
int volume(double r , int h){
    return (3.14*r*r*h);
}
int volume(int l,int b , int h){
    return l*b*h;
}
int volume(int a){
    return a*a*a;
}
int main() {
        float x,y,z;
        string q;
        char choice;
        cout<<"Enter a number: ";
        cin>>x;
        cout<<"Enter a number: ";
        cin>>y;
        cout<<"Enter a shape you want volume of: ";
        cin>>q;
        if (q== "cube" ){
            cout<<"volume of cube is: "<<volume(x);
        }
        else if(q == "cyl"){
        cout<<"Enter a number: ";
        cin>>z;
        cout<<"the volume a cylinder is: "<<volume(x,y,z)<<endl;
        }
        else{
           cout<<"the volume trigon is: "<<volume(x,y)<<endl; 
        }
    return 0;
}