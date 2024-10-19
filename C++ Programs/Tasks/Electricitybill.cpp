#include <iostream>
using namespace std;

double calculateBill(double units, double electricitybill)
{

    if (units <= 100)
    {
        electricitybill = 0.10 * units;
        return electricitybill;
    }

    else if (units >= 101 && units <= 300)
    {
        electricitybill = 0.15 * units;
        return electricitybill;
    }

    else if (units >= 300)
    {
        electricitybill = 0.20 * units;
        return electricitybill;
    }

    return 0;
}

int main()
{

    double units, electricitybill, option, charge;

    cout << "------Welcome to Electricity bill calculator------" << endl;

    do
    {

        cout << "Please enter the units used by you: ";
        cin >> units;

        while (units <= 0)
        {
            cout << "Please enter valid units: ";
            cin >> units;
        }

        cout << "Your Electricity bill is: $" << calculateBill(units, electricitybill) << endl;

        cout << "As there is an additional monthly service charge of 10$" << endl;
        charge = calculateBill(units, electricitybill) + 10;
        cout << "Your total Electricity Bill is: $" << charge << endl;

        cout << "Do you want to try again?. Press any number to continue or 0 to quit the program" << endl;
        cin >> option;

    } while (option != 0);

    return 0;
}