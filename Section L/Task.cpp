#include <iostream>
using namespace std;

int main() {
    int Marks,option;
    do
    {
        cout<<"Input your Marks: "<<endl;
        cin>>Marks;

        while (Marks <= 100 && Marks >= 0)
        {
            if (Marks > 85)
            {
                cout<<"A"<<endl;
                break;
            }
            else if (Marks < 85 && Marks >= 80)
            {
                cout<<"A-"<<endl;
                break;
            }
            else if (Marks <= 80 && Marks >= 75)
            {
                cout<<"B+"<<endl;
                break;
            }
            else if (Marks < 75 && Marks >= 70 )
            {
                cout<<"B"<<endl;
                break;
            }
            else if (Marks <= 70 && Marks >= 65)
            {
                cout<<"C+"<<endl;
                break;
            }
            else if (Marks < 65 && Marks >= 60)
            {
                cout<<"C"<<endl;
                break;
            }
            else if (Marks <= 60 && Marks >= 55)
            {
                cout<<"D+"<<endl;
                break;
            }
            else if (Marks < 55 && Marks >= 50)
            {
                cout<<"D"<<endl;
                break;
            }
            else
            {
                cout<<"F"<<endl;
                break;
            }
        cout<<"Press 0 to quit the program and 1 to try again?"<<endl;
        cin>>option;
        }
    }while (option != 0);
    return 0;
}