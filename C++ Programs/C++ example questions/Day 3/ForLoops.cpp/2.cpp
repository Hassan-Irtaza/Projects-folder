#include <iostream>
using namespace std;

int main() {
    char a = 'a';
    for (int i = 0; i <= 5; i++) {
        for (int n = 1; n <= i; n++) {
            cout << char(n + a);
        }
        cout << "\n";
    }
    return 0;
}
