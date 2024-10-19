#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void compliment(void);
    void display(void);
};
void binary ::read()
{
    cout << "enter a binary number: ";
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary number! ";
            exit(0);
        }
    }
}
void binary ::compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    display();
}
void binary ::display()
{
    cout << s << endl;
}
int main()
{
    binary a;
    a.read();
    a.compliment();

    return 0;
}