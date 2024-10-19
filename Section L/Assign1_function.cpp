#include <iostream>
#include <iomanip>

using namespace std;

void ShowPackage();
char GetPackage();
int GetMinutesUsed();
string GetMonth();
bool ValidatePackage(char package);
bool ValidateMinutes(int minutesUsed);
bool ValidateMonth(const string &month, int minutesUsed);
double CalculateTotalBill(char package, int minutesUsed);
void DisplayPotentialSavings(double totalBill, int minutesUsed);

int main()
{
    char package;
    int minutesUsed;
    double totalBill;
    string month;

    ShowPackage();

    do
    {
        package = GetPackage();

        while (!ValidatePackage(package))
        {
            cout << "Invalid package selection." << endl;
            cin >> package;
        }

        minutesUsed = GetMinutesUsed();
        while (!ValidateMinutes(minutesUsed))
        {
            cout << "Invalid number of minutes. Please enter a non-negative integer." << endl;
            cin >> minutesUsed;
        }

        month = GetMonth();
        while (!ValidateMonth(month, minutesUsed))
        {
            cout << "Invalid month or exceeded the limit for this month." << endl;
            month = GetMonth();
            minutesUsed = GetMinutesUsed();
        }

        totalBill = CalculateTotalBill(package, minutesUsed);
        cout << "TOTAL BILL: " << totalBill << "$" << endl;

        DisplayPotentialSavings(totalBill, minutesUsed);

        char choice;

        cout << "Do you want to select another package? (Y/N): ";
        cin >> choice;

        if (choice == 'N' || choice == 'n')
        {
            break;
        }

    } while (true);

    return 0;
}

void ShowPackage()
{
    cout << "|---------------------HI!Welcome to my COMPANY---------------------------------------------|" << endl;
    cout << setw(13) << "Package_ID" << setw(20) << "Package_Name" << setw(20) << "Package_Price" << setw(33) << "Additional_minutes_Price" << endl;
    cout << setw(12) << "Package 1" << setw(20) << "A" << setw(23) << "$39.99 per month" << setw(23) << "$0.45 each" << endl;
    cout << setw(12) << "Package 2" << setw(20) << "B" << setw(23) << "$59.99 per month" << setw(23) << "$0.40 each" << endl;
    cout << setw(12) << "Package 3" << setw(20) << "C" << setw(23) << "$69.99 per month" << setw(23) << "No cost" << endl;
    cout << "|------------------------------------------------------------------------------------------|" << endl;
}

char GetPackage()
{
    char package;
    cout << "Enter your Package (A, B, or C): ";
    cin >> package;
    return package;
}

int GetMinutesUsed()
{
    int minutesUsed;
    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;
    return minutesUsed;
}

string GetMonth()
{
    string month;
    cout << "Enter the first three initials of the month (in lower case): ";
    cin >> month;
    return month;
}

bool ValidatePackage(char package)
{
    return (package == 'A' || package == 'a' || package == 'B' || package == 'b' || package == 'C' || package == 'c');
}

bool ValidateMinutes(int minutesUsed)
{
    return (minutesUsed >= 0);
}

bool ValidateMonth(const string &month, int minutesUsed)
{
    if (month == "jan" || month == "mar" || month == "may" || month == "jul" || month == "aug" || month == "oct" || month == "dec")
        return (minutesUsed <= 44640);
    else if (month == "apr" || month == "jun" || month == "sep" || month == "nov")
        return (minutesUsed <= 43200);
    else if (month == "feb")
        return (minutesUsed <= 40320);
    else
        return false;
}

double CalculateTotalBill(char package, int minutesUsed)
{
    double totalBill = 0.0;
    switch (package)
    {
    case 'A':
    case 'a':
        totalBill = 39.99;
        if (minutesUsed > 450)
        {
            totalBill += (minutesUsed - 450) * 0.45;
        }
        break;
    case 'B':
    case 'b':
        totalBill = 59.99;
        if (minutesUsed > 900)
            totalBill += (minutesUsed - 900) * 0.40;
        break;
    case 'C':
    case 'c':
        totalBill = 69.99;
        break;
    }
    return totalBill;
}

void DisplayPotentialSavings(double totalBill, int minutesUsed)
{
    if (totalBill > 59.99)
    {
        if (minutesUsed > 900)
        {
            cout << "You can save " << totalBill - (59.99 + ((minutesUsed - 900) * 0.40)) << " opting for package B" << endl;
        }
        else
        {
            cout << "You can save " << totalBill - 59.99 << " opting for package B" << endl;
        }
        cout << "You can save " << totalBill - 69.99 << " opting for package C" << endl;
    }
}