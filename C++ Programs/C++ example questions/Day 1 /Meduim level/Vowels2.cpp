#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    char n;
    cout << "Enter a letter: ";
    cin >> n;

    if (isalpha(n)) {
        // Check if the input is a letter
        switch (n)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << n << " is a vowel";
            break;
        default:
            cout << n << " is a consonant";
            break;
        }
    } else {
        // Input is not a letter
        cout << "Error: Please enter a letter, not a number or special character.";
    }

    return 0;
}
