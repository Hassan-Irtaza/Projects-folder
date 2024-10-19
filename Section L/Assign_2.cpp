#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char package, choice;
    int minutesUsed;
    double totalBill;

    do
    {
        cout << "|---------------------HI!Welcome to my COMPANY---------------------------------------------|" << endl;
        cout << setw(13) << "Package_ID" << setw(20) << "Package_Name" << setw(20) << "Package_Price" << setw(33) << "Additional_minutes_Price" << endl;
        cout << setw(12) << "Package 1" << setw(20) << "A" << setw(23) << "$39.99 per month" << setw(23) << "$0.45 each" << endl;
        cout << setw(12) << "Package 2" << setw(20) << "B" << setw(23) << "$59.99 per month" << setw(23) << "$0.40 each" << endl;
        cout << setw(12) << "Package 3" << setw(20) << "C" << setw(23) << "$69.99 per month" << setw(23) << "No cost" << endl;
        cout << "|------------------------------------------------------------------------------------------|" << endl;
        cin >> package;

        switch (package)
        {
        case 'A':
        case 'a':
            cout << "Enter the number of minutes used: ";
            cin >> minutesUsed;

            while (minutesUsed < 0)
            {
                cout << "Invalid number of minutes. Please enter a non-negative integer: ";
                cin >> minutesUsed;
            }

            totalBill = 39.99;
            if (minutesUsed > 450)
                totalBill = totalBill + (minutesUsed - 450) * 0.45;

            cout << "You can save " << totalBill - (59.99 + ((minutesUsed - 900) * 0.40)) << " opting for package B" << endl;
            cout << "You can save " << totalBill - 69.99 << " opting for package C" << endl;
            cout << "There are potential savings in this package do you still want to continue Press 'N' to select another package" << endl;
            cin >> choice;

            if (choice == 'N' || choice == 'n')
            {
                continue;
            }
            break;
        case 'B':
        case 'b':
            cout << "Enter the number of minutes used: ";
            cin >> minutesUsed;

            while (minutesUsed < 0)
            {
                cout << "Invalid number of minutes. Please enter a non-negative integer: ";
                cin >> minutesUsed;
            }

            totalBill = 59.99;
            if (minutesUsed > 900)
                totalBill = totalBill + (minutesUsed - 900) * 0.40;

            cout << "You can save " << totalBill - 69.99 << " opting for package c" << endl;
            cout << "There are potential savings in this package do you still want to continue Press 'N' to select another package" << endl;
            cin >> choice;

            if (choice == 'N' || choice == 'n')
            {
                continue;
            }
            break;
        case 'C':
        case 'c':
            cout << "Enter the number of minutes used: ";
            cin >> minutesUsed;

            while (minutesUsed < 0)
            {
                cout << "Invalid number of minutes. Please enter a non-negative integer: ";
                cin >> minutesUsed;
            }

            totalBill = 69.99;

            cout << "There are no potential savings in this package do you still want to continue Press 'N' to select another package" << endl;
            cin >> choice;

            if (choice == 'N' || choice == 'n')
            {
                continue;
            }
            break;
        default:
            cout << "Invalid package selection. Please choose A, B, or C: " << endl;
            continue;
        }

        cout << "TOTAL BILL: " << totalBill << "$" << endl;

        cout << "Press 0 to quit and any other key to try again?" << endl;
        cin >> package;

    } while (package != 0);
    return 0;
}
