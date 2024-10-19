#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Finding an odd number" << endl;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }

    return 0;
}
