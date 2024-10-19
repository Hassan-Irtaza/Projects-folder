#include <iostream>
using namespace std;

int main() {
    int r, choice;
    const double pi = 3.14159;  // Assuming pi is a constant value

    cout << "Finding area or circumference of a circle" << endl;
    cout << "What is the radius of the given circle? " << endl;
    cin >> r;

    cout << "What do you want to do? Enter 1 for area or 2 for circumference: " << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Area of the circle: " << pi * (r * r) << endl;
    } else {
        cout << "Circumference of the circle: " << 2 * pi * r << endl;
    }

    return 0;
}
