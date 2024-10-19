#include <iostream>
using namespace std;

int main(){
// declare and initialize:
    int year;
// user input:
    cout<<"Enter a year: ";
    cin>>year;
// using ifelse statements:
    if (year % 400 == 0){
        cout<<year<<" is a leap year!"<<endl;
    }
    else if (year % 100 == 0){
        cout<<year<<" is not a leap year!"<<endl;
    }
    if (year % 4 == 0){
        cout<<year<<" is a leap year!"<<endl;
    }
    else{
        cout<<year<<" is not a leap year!"<<endl;
    }
// using switch statments:{{{ ERROR as switch only uses constant values so is not applicable in a variable situation  }}}
    // switch (year)
    // {
    // case year % 400 == 0:
    //     cout<<year<<" is a leap year";
    //     break;
    // case year % 100 == 0:
    //     cout<<year<<" is not a leap year";
    //     break;
    // case year % 4 == 0:
    //     cout<<year<<" is a leap year";
    //     break;
    // default:
    //     cout<<year<<" is not a leap year";
    //     break;
    // }
    
return 0;
}