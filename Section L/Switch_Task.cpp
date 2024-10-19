#include <iostream>
using namespace std;

int main() {
    int Marks,option;
    do
    {
        cout<<"Input your Marks: ";
        cin>>Marks;

        while (Marks <= 100 && Marks >= 0)
        {
            switch (Marks)
            {
            case 85 ... 100:
                cout<<"A"<<endl;
                break;
            case 80 ... 84:
                cout<<"A-"<<endl;
                break;
            case 75 ... 79:
                cout<<"B+"<<endl;
                break;
            case 70 ... 74:
                cout<<"B"<<endl;
                break;
            case 65 ... 69:
                cout<<"C+"<<endl;
                break;
            case 60 ... 64:
                cout<<"C"<<endl;
                break;
            case 55 ... 59:
                cout<<"D+"<<endl;
                break;
            case 50 ... 54:
                cout<<"D"<<endl;
                break;
            default:
                cout<<"F"<<endl;
                break;
            }
        cout<<"Press 0 to quit the program and 1 to try again?"<<endl;
        cin>>option;
        }
    }while (option != 0);
    return 0;
}