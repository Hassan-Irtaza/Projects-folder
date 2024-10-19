#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to sum to: ";
    cin >> n;

    int sum = 0; 

    for (int i = 1; i <= n; i++) 
    {
        sum += i; 
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
