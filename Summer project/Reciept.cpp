#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string bankName = "Bank of Pakistan";
    string location = "Lahore, Punjab";
    string transaction = "Cash Withdrawal";
    string account = "****1234";
    string card = "**** **** **** 1234";
    string transactionID = "12345678";
    int amount = 10000;

    cout << endl;
    cout << setw(40) << bankName << endl;
    cout << setw(40) << location << endl;

    cout << "Date:" << setw(20) << right << ctime(nullptr) << endl;
    cout << setw(40) << left << "Transaction:" << transaction << endl;
    cout << setw(40) << left << "Account:" << account << endl;
    cout << setw(40) << left << "Card:" << card << endl;
    cout << setw(40) << left << "Amount:" << "PKR " << setw(10) << right << amount << endl;
    cout << setw(40) << left << "Transaction ID:" << transactionID << endl;

    cout << setw(40) << "Thank you for banking with" << endl;
    cout << setw(40) << "Bank of Pakistan!" << endl;

    return 0;
}
