#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter any word you want: ";
    cin >> s;
    int size = s.length();
    for (int i = 0, d = size - 1; i < size / 2; i++, d--)
    {
        if (s.at(i) != s.at(d))
        {
            cout << "FALSE!" << endl;
            return 0;
        }
    }
    cout << "TRUE!" << endl;

    return 0;
}