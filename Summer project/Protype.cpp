#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class atm
{
private:
    int balance;

public:
    void withdraw()
    {
    }
    void deposit()
    {
    }
    void chk_balance()
    {
    }
    void change_pin(int new_pin, int old_pin)
    {
    }
    void transfer()
    {
    }
    void print()
    {
    }
};

int main()
{
    string bankName = "Bank of Pakistan";
    string location = "Lahore, Punjab";
    string transaction = "Cash Withdrawal";
    string account = "****1234";         // Last 4 digits only
    string card = "**** **** **** 1234"; // Masked card number
    string transactionID = "12345678";
    int amount = 10000;

    cout << endl;
    cout << setw(30) << left << bankName << endl;
    cout << setw(30) << left << location << endl
         << endl;

    cout << "Date:" << setw(20) << right << ctime(nullptr) << endl;
    cout << setw(30) << left << "Transaction:" << transaction << endl;
    cout << setw(30) << left << "Account:" << account << endl;
    cout << setw(30) << left << "Card:" << card << endl;
    cout << setw(30) << left << "Amount:" << "PKR " << setw(10) << right << amount << endl;
    cout << setw(30) << left << "Transaction ID:" << transactionID << endl
         << endl;

    cout << setw(40) << right << "Thank you for banking with" << endl;
    cout << setw(40) << right << "Bank of Pakistan!" << endl;

    return 0;
}