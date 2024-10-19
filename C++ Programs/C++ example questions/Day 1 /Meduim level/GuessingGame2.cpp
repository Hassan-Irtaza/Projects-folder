#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int n,n2;
    srand(static_cast<unsigned int>(time(0)));
    int secretnumber = rand() % 100 + 1;
    cout<<"Enter the Amount of Guesses Allowed: ";
    cin>>n; 
    cout<<"Guess the Secret Number: ";
    cin>>n2; 
    for(int i=0; i <= n;i++)
        while (n2 != secretnumber){
            if (n2 > secretnumber) {
                cout<<n2<<" is greater then Secret number"<<endl;
                cout<<"Try again"<<endl;
                cin>>n2;
            }
            else {
                cout<<n2<<" is less then Secret number"<<endl;
                cout<<"Try again"<<endl;
                cin>>n2;
            }
                cout<<"Congratulations!!!!!"<<endl;
                cout<<n2<<" is the Secret number"<<endl;
        }
        return 0;
}