#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char choice;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> choice;

    switch (choice) {
        case '+':
            c = a + b;
            cout << "Result: " << c;
            break;
        case '-':
            c = a - b;
            cout << "Result: " << c;
            break;
        case '*':
            c = a * b;
            cout << "Result: " << c;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                cout << "Result: " << c;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Invalid operator. Please enter +, -, *, or /.";
    }

    return 0;
}
