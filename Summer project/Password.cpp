#include <iostream>
using namespace std;

class employee
{
private:
    int pin = 1234;
    int balance = 2000;

public:
    void get_balance(int entered_pin)
    {
        if (entered_pin == pin)
        {
            cout << balance << endl;
        }
        else
        {
            cout << "incorrect pin" << endl;
        }
    }
    void change_pin(int entered_pin)
    {
        if (entered_pin == pin)
        {
            cout << "Enter new password";
            cin >> entered_pin;
            pin = entered_pin;
            cout << "password is changed";
        }
        else
        {
            cout << "incorrect pin" << endl;
        }
    }
};

int main()
{
    employee hassan;
    int pin;
    cout << "enter you pin" << endl;
    cin >> pin;
    hassan.get_balance(pin);
    hassan.change_pin(pin);
    return 0;
}