#include <iostream>
#include <cctype> // For toupper function

using namespace std;

int main() {

    float additionalCost, total, saving;
    char pkg;

    cout << "Input your chosen package (A, B, or C): ";
    cin >> pkg;

    // Convert input to uppercase for case-insensitive comparison
    pkg = toupper(pkg);

    if (pkg == 'A') {
        cout << "\nInput the number of minutes used: ";
        cin >> additionalCost;
        additionalCost *= 0.45;
        total = 39.99 + additionalCost;
        cout << "\nAmount due is $" << total;

        saving = total - 69.99; // compare with Package C
        if (saving > 0) {
            cout << "\nYou would save $" << saving << " if you switched to Package C.";
        }

        saving = total - 59.99; // compare with Package B
        if (saving > 0) {
            cout << "\nYou would save $" << saving << " if you switched to Package B.";
        }
    } else if (pkg == 'B') {
        cout << "\nInput the number of minutes used: ";
        cin >> additionalCost;
        additionalCost *= 0.40;
        total = 59.99 + additionalCost;
        cout << "\nAmount due is $" << total;

        saving = total - 69.99; // compare with Package C
        if (saving > 0) {
            cout << "\nYou would save $" << saving << " if you switched to Package C.";
        }
    } else if (pkg == 'C') {
        total = 69.99;
        cout << "\nAmount due is $" << total;
    } else {
        cout << "Invalid Input!";
    }

    return 0;
}