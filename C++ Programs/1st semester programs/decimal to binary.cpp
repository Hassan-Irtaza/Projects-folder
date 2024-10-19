#include <iostream>
using namespace std;

int main() {
    int input, rem;

    // Get user input
    cout << "Enter a number: ";
    cin >> input;

    // Display the binary representation
    while (input / 2 != 0) {
        rem = input % 2; // Add the missing semicolon
        cout << rem;
        input /= 2;
    }

    // Display the last binary digit
    cout << input % 2 << endl;

    return 0;
}
