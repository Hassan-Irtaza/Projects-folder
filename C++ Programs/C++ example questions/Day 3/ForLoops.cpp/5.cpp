#include <iostream>
using namespace std;

int main() {
    char n = '*';
    for (int i = 1; i < 7; i++)
    {
        for (int j = 5; j > 0 ; --j)
        {
            cout<< n * j;
            cout<<endl;
        }
       cout<<endl;
    }
    
    return 0;
}