#include <iostream>
using namespace std;

int main() {
// decleration:
  int n, reversed_number = 0, remainder;
// User input:
  cout << "Enter an integer: ";
  cin >> n;
// while loop:
// When n is not Zero:
  while(n != 0) {
// 0*10+(input % 10):
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
// input / 10:
    n /= 10;
  }
// Output:
  cout << "Reversed Number = " << reversed_number;
  return 0;
}