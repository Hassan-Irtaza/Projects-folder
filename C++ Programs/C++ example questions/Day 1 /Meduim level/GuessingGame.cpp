#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n;
// Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    int secretnumber = rand() %100 + 1;
    cout<<"Guess the Secret Number: ";
    cin>>n;

    while(n != secretnumber)
        if (n > secretnumber) {
            cout<<n<<" is greater then secret number"<<endl;
            cout<<"try again"<<endl;
            cin>>n;
        }
        else {
            cout<<n<<" is less then secret number"<<endl;
            cout<<"try again"<<endl;
            cin>>n;
        }

            cout<<"Congrat!!!!"<<endl;
            cout<<n<<" is the Secret number"<<endl;   
    return 0;
}