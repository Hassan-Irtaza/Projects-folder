#include <iostream>
using namespace std;

// int mathmarks(int a){
//     for (int i = 0; i <= 3; i++){
//         int marks[] = {10, 20, 30, 40};
//         return marks[i];
//     }
// }

int main() {
    int marks[] = {10, 20, 30, 40};
    cout<<"this is marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"these are the changed marks"<<endl;
    marks[0] = 97;
    marks[1] = 67;
    marks[2] = 55;
    marks[3] = 34;
    cout <<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
//    for loop for printing out all the statements at once
    cout<<"Using for loop"<<endl;
    for (int i = 0; i <= 3; i++){
            cout<<marks[i]<<endl;
    }
    

    return 0;
}