#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char package;
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

        if (package != 'a' && package != 'A' && package != 'B' && package != 'b' && package != 'c' && package != 'C')
        {
            cout << "Invalid package selection." << endl;
            continue;
        }

        cout << "Enter the number of minutes used: ";
        cin >> minutesUsed;

        while (minutesUsed < 0)
        {
            cout << "Invalid number of minutes. Please enter a non-negative integer: ";
            cin >> minutesUsed;
        }

        switch (package)
        {
        case 'A':
        case 'a':
            totalBill = 39.99;
            if (minutesUsed > 450)
                totalBill = totalBill + (minutesUsed - 450) * 0.45;
            break;
        case 'B':
        case 'b':
            totalBill = 59.99;
            if (minutesUsed > 900)
                totalBill = totalBill + (minutesUsed - 900) * 0.40;
            break;
        case 'C':
        case 'c':
            totalBill = 69.99;
            break;
        }

        cout << "TOTAL BILL: " << totalBill << "$" << endl;

        cout << "Press 0 to quit and any other key to try again?" << endl;
        cin >> package;

    } while (package != 0);
    return 0;
}
