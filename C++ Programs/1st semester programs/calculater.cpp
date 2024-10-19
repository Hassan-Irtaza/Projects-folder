#include <iostream>

int main() {
    int a, b;
    char calculate;  // Change 'calculate' to char for the operation choice

    std::cout << "Enter first integer: ";
    std::cin >> a;

    std::cout << "Enter second integer: ";
    std::cin >> b;

    std::cout << "What operation do you want to calculate (+, *, /, -): ";
    std::cin >> calculate;

    int result;

    // Perform the operation based on the user's choice
    switch (calculate) {
        case '+':
            result = a + b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '-':
            result = a - b;
            break;
        default:
            std::cout << "Incorrect command." << std::endl;
            return 1;  
    // Return a non-zero value to indicate an error
        }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
