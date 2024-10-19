#include <iostream>
using namespace std;
// Using Do While loop:
int main() {
    int marks[] = {96,45,45,65,57};
    int n = 0;
    do{
        cout<<"the marks are: "<<marks[n]<<endl;
        n++;
    }while (n <= 4);
    return 0;
}