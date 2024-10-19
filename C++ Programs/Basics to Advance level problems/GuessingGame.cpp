#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool again = true;
    char choice;

    srand(time(0));

    do
    {
        int num = rand() % 100 + 1;
        int guess;

        cout << "I have a number between 1 and 100\nCan you guess my number?\nYou have a maximum of five chances.\nEnter your guess here: ";

        for (int i = 1; i <= 5; i++)
        {
            cin >> guess;
            cout << "This is try no: " << i << endl;
            if (guess == num)
            {
                cout << guess << " is the correct Number!" << endl;
                break;
            }
            else if (guess > num)
            {
                cout << "Your guess is greater than the number" << endl;
                cout << "TRY AGAIN" << endl;
            }
            else if (guess < num)
            {
                cout << "Your guess is lower than the number" << endl;
                cout << "TRY AGAIN" << endl;
            }
        }

        cout << "Do you want to try again? (y/n)" << endl;
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            again = false;
        }

    } while (again);

    cout << "The program has ended" << endl;
    return 0;
}
