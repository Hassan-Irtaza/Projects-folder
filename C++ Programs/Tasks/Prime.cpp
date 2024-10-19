#include <iostream>
using namespace std;

// Question # 2: (2+2+1+1+2 Marks)
// For the following function:
// 𝑭(𝒌, 𝒍, 𝒎, 𝒏) = ∏(𝟎, 𝟐, 𝟔, 𝟏𝟎)
// 𝑭(𝒌, 𝒍, 𝒎, 𝒏) = 𝒅(𝟑, 𝟕, 𝟖, 𝟏𝟒)
// a. Tabulate the Truth Table and draw k-map.
// b. Write the expression in Minterms and Maxterms.
// c. Write the equation in SOP and POS form.
// d. Which expression (SOP/POS) is yielding minimum literals?
// e. Draw a circuit Diagram with minimum gates using AND, OR & NOT.

int main()
{
    int a, prime = 0;
    cout << "Enter your number: ";
    cin >> a;
    while (a < 0)
    {
        cout << "Enter the first number: ";
        cin >> a;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            prime++;
            break;
        }
    }
    if (prime == 0)
    {
        cout << a << " is a prime number!";
    }
    else
    {
        cout << a << " is not a prime number!";
    }
    return 0;
}