#include <iostream>
using namespace std;

int main() {
    int marks;
    string name;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "Input your marks: " << endl;
    cin >> marks;

    if (marks > 90) {
        cout << "Grade: A" << endl;
    } else if (marks <= 90 && marks > 80) {
        cout << "Grade: B" << endl;
    } else if (marks <= 80 && marks > 70) {
        cout << "Grade: C" << endl;
    } else if (marks <= 70 && marks > 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "You are a failure" << endl;
    }

    return 0;
}
