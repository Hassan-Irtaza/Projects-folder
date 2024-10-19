#include <iostream>
#include <cctype>
using namespace std;

typedef struct bankaccount
{
    string name;
    string password;
    string dob;
    int balance;
    int credit;
}BA;

int main() {
string A,B;
    BA Account1;
    Account1.name = "Syed Hassan Irtaza";
    Account1.password = "ghano";
    Account1.dob = "26th June 2003";
    Account1.balance = 30000;
    Account1.credit = 0;

    BA Account2;
    Account2.name = "Ghania Ali";
    Account2.password = "ghania2040";
    Account2.dob = "28th May 2004";
    Account2.balance = 70000;
    Account2.credit = 0;

    BA Account3;
    Account3.name = "Syed Hussain Abdullah";
    Account3.password = "abd";
    Account3.dob = "21th May 2008";
    Account3.balance = 10000;
    Account3.credit = 0;
  
    do{
        cout<<"Press Q if you want to quit the program!!! "<<endl;
        cout<<"Enter your initials for your bank account: ";
        cin>>A;
        cout<<"Enter your Password for your bank account: ";
        cin>>B;
        if ((A == "shi" || A == "SHI") && B == Account1.password)
        {
        cout<<"Name: "<<Account1.name<<endl;
        cout<<"Balance: "<<Account1.balance<<endl;
        cout<<"credit: "<<Account1.credit<<endl;
        }
        else if ((A == "ga" || A == "Ga") && B == Account2.password)
        {
        cout<<"Name: "<<Account2.name<<endl;
        cout<<"Balance: "<<Account2.balance<<endl;
        cout<<"credit: "<<Account2.credit<<endl;
        }
        else if ((A == "sha" || A == "SHA") && B == Account3.password)
        {
        cout<<"Name: "<<Account3.name<<endl;
        cout<<"Balance: "<<Account3.balance<<endl;
        cout<<"credit: "<<Account3.credit<<endl;  
        }   
        else{
        cout << "Invalid initials or password. Please try again." << endl;
        }
    } while (A != "Q" && A != "q");
    return 0;
}