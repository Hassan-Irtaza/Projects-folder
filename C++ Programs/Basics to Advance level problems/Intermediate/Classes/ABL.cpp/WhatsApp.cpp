#include <iostream>
using namespace std;

void display(void)
{
    cout << "Welcome to myABL WhatsApp Banking. How can I help you today?\n\n"
         << "1️. Account Balance Inquiry\n"
         << "2️. Mini Statement\n"
         << "3️. Mobile Top Up\n"
         << "4️. Account Statement\n"
         << "5️. Account Certificates\n"
         << "6️. Cheque Status Inquiry\n"
         << "7️. Offers & Discounts\n"
         << "8️. More Services\n"
         << "9️. Chat with ABL\n\n"
         << "Please type the highlighted keyword or option number." << endl;
}
void display2(void)
{
    cout << "To register with myABL WhatsApp Banking Service, Please type last 4 digits of your CNIC number (XXXXX-XXXX123-4)\nType Ⓜ for Main Menu" << endl;
}
class bankaccount
{
private:
    int cnic[10] = {4049, 1234, 7999};

public:
    void checkcnic(int input_cnic);
};

void bankaccount ::checkcnic(int input_cnic)
{
    bool registered = false;
    for (int i = 0; i < 10; i++)
    {
        if (input_cnic == cnic[i])
        {
            cout << "Dear SYED HASSAN IRTAZA,Congratulations! You have successfully registered on myABL WhatsApp Banking" << endl;
            registered = true;
        }
    }
    if (!registered)
    {
        cout << "CNIC not registered with myABL WhatsApp Banking" << endl;
    }
}
int main()
{
    int any, input_cnic;
    display();
    cin >> any;
    while (any > 9 || any < 1)
    {
        cout << "enter the correct code: ";
        cin >> any;
    }
    bankaccount A;
    display2();
    cin >> input_cnic;
    A.checkcnic(input_cnic);

    return 0;
}
