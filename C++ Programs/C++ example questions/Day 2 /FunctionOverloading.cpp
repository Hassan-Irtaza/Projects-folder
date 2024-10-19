#include <iostream>
using namespace std;
float sum(float a,float b){
    float c = a+b;
}
float average(float a,float b){
    float c = a + b;
    float d = c / 2;
}
float product(float a,float b,float c){
    return a*b*c;
}
int area(int a,int b){
    return a*b;
}
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
    cout<<"what do you want to do: ";
    cin>>choice; 
    switch (choice)
    {
    case '+':
        cout<<"the sum is: "<<sum(x,y)<<endl;
        break;
    case 'a':
        cout<<"the average is: "<<average(x,y)<<endl;
        break;
    case '*':
        cout<<"Enter a number: ";
        cin>>z;
        cout<<"the product is: "<<product(x,y,z)<<endl;
        break;
    case 'v':
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
        break;
    }
return 0;
}

