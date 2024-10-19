#include <iostream>
using namespace std;

int main() {
    int rows,col;
    cout<<"enter the number of rows: ";
    cin>>rows;
    cout<<"enter the number of rows: ";
    cin>>col;
    for(int i = 1; i <= col; i++)
    {
        for(int j = 1 ; j <= rows ; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}