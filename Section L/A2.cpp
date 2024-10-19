#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype> // For toupper function

using namespace std;

const int MAX_HOURS_30_DAYS = 720;
const int MAX_HOURS_31_DAYS = 744;
const int MAX_HOURS_FEB = 672;

int main() {

    float additionalCost, total, saving;
    string month;
    int minutes, maxAllowedMinutes;
    char pkg;

    cout << "Enter the month (e.g., January, February, etc.): ";
    getline(cin, month);
    transform(month.begin(), month.end(), month.begin(), ::toupper); 

    if (month == "JANUARY" || month == "MARCH" || month == "MAY" ||
        month == "JULY" || month == "AUGUST" || month == "OCTOBER" ||
        month == "DECEMBER") {
        maxAllowedMinutes = MAX_HOURS_30_DAYS * 60;
    } else if (month == "APRIL" || month == "JUNE" || month == "SEPTEMBER" ||
               month == "NOVEMBER") {
        maxAllowedMinutes = MAX_HOURS_31_DAYS * 60;
    } else if (month == "FEBRUARY") {
        maxAllowedMinutes = MAX_HOURS_FEB * 60;
    } else {
        cout << "Invalid month entered!" << endl;
        return 1; // Exit program with an error code (1)
    }

    cout << "Input your chosen package (A, B, or C): ";
    cin >> pkg;

    // Convert input to uppercase for case-insensitive comparison
    pkg = toupper(pkg);

    cout << "\nInput the number of minutes used: ";
    cin >> minutes;

    if (minutes <= maxAllowedMinutes && minutes >=0) // checks for correct input of minutes
	{
        if (pkg == 'A') {
            additionalCost = minutes * 0.45;
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
            additionalCost = minutes * 0.40;
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
            cout << "Invalid package selection!";
        }
    } else {
        cout << "Invalid amount of minutes entered. Maximum minutes for " << month << " is " << maxAllowedMinutes << "." << endl;
    }

    return 0;
}