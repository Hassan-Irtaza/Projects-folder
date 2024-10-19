#include <iostream>
using namespace std;

int main() {
    int count = 0, waste = 0, std1 = 0, std2 = 0, vote;

    // For loop
    for (int maxstudents = 0; maxstudents < 15; maxstudents++) {
        cout << "Enter your vote: 1 for std1, 2 for std2, or 0 to waste your vote: ";
        cin >> vote;

        if (vote == 1) {
            std1++;
            count++;
        } else if (vote == 2) {
            std2++;
            count++;
        } else if (vote == 0) {
            waste++;
            count++;
        } else {
            cout << "Invalid vote. Your vote has been wasted." << endl;
            waste++;
            count++;
        }

        // Outputs within the loop
        cout << "Votes for std1: " << std1 << endl;
        cout << "Votes for std2: " << std2 << endl;
        cout << "Wasted votes: " << waste << endl;
        cout << "Total votes: " << count << endl;
    }

    // Winner selection outside the loop
    if (std1 < std2) {
        cout << "The winner is Ahmed." << endl;
    } else if (std2 > std1) {
        cout << "The winner is Amna." << endl;
    } else {
        cout << "The result is a tie between Ahmed and Amna." << endl;
    }

    return 0;
}
