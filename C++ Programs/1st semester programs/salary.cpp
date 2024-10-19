#include <iostream>
using namespace std;

int main() {
    int salary, grade;
    
    cout << "Input salary: " << endl;
    cin >> salary;

    cout << "Input grade: " << endl;
    cin >> grade;

    if (grade > 15) {
        cout << "Updated salary: " << salary + (salary * 0.5) << endl;
    } else {
        cout << "Updated salary: " << salary + (salary * 0.25) << endl;
    }

    return 0;
}
