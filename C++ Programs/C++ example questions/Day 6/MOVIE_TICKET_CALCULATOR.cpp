#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /*Question2: Movie Ticket Price Calculator with Seat Selection
    Create a program that determines the price of movie tickets
    based on age, time of the movie, and seat selection.
    The program should ask the user for their age, the time of the movie
    (in 24-hour format), and the type of seat (standard, VIP, or premium).
    For ages 0-5 and 65+, tickets are free. For ages 6-12, tickets are
    500 pkr. For ages 13-64, tickets are 1000 pkr. Additionally,
    if the movie is scheduled before 5:00 PM, there's a 200 pkr discount
    on each ticket. For VIP seats, there's a 500 pkr surcharge,
    and for premium seats, there's a 1000 surcharge.*/

    int age, time, option, seat;
    int standard1 = 500, standard2 = 1000, vip = 500, premium = 1000;

    cout << "_________________________________________________" << endl;
    cout << "___________Welcome to the Movie Theater__________" << endl;
    do
    {

        cout << "Please enter your Age: ";
        cin >> age;

        if (age >= 0 && age <= 5 || age >= 65)
        {
            cout << "Congratulations! you recieved a free ticket" << endl;
            cout << "Press any Number to purchase again";
            cin >> option;
        }
        else if (age >= 6 && age <= 12)
        {

            cout << "Which type of seat do you want to purchase?" << endl;
            cout << "1:" << setw(10) << "Standard" << endl;
            cout << "2:" << setw(5) << "VIP" << endl;
            cout << "3:" << setw(9) << "Premium" << endl;
            cin >> seat;

            while (seat > 3 || seat <= 0)
            {
                cout << "Please enter the correct seat type: ";
                cin >> seat;
            }

            switch (seat)
            {

            case 1:

                cout << "You have purchased Standard ticket" << endl;
                cout << "Your total bill is: " << standard1 << endl;
                break;

            case 2:

                cout << "You have purchased VIP ticket" << endl;
                cout << "Your total bill is: " << standard1 + vip << endl;
                break;

            case 3:

                cout << "You have purchased Premium ticket" << endl;
                cout << "Your total bill is: " << standard1 + premium << endl;
                break;

            default:

                cout << "Please enter Valid Seat Type" << endl;
                continue;
            }

            cout << "Press any Number to purchase again: ";
            cin >> option;
        }
        else if (age >= 13 && age <= 64)
        {

            cout << "Which type of seat do you want to purchase?" << endl;
            cout << "1:" << setw(10) << "Standard" << endl;
            cout << "2:" << setw(5) << "VIP" << endl;
            cout << "3:" << setw(9) << "Premium" << endl;
            cin >> seat;

            while (seat > 3 || seat <= 0)
            {
                cout << "Please enter the correct seat type: ";
                cin >> seat;
            }

            do
            {
                switch (seat)
                {

                case 1:

                    cout << "You have purchased Standard ticket" << endl;
                    cout << "Your total bill is: " << standard2 << endl;
                    break;

                case 2:

                    cout << "You have purchased VIP ticket" << endl;
                    cout << "Your total bill is: " << standard2 + vip << endl;
                    break;

                case 3:

                    cout << "You have purchased Premium ticket" << endl;
                    cout << "Your total bill is: " << standard2 + premium << endl;
                    break;

                default:
                    cout << "Please enter Valid Seat Type" << endl;
                }

            } while (seat <= 0 && seat >= 4);

            cout << "Press any Number to purchase again";
            cin >> option;
        }
        else
        {
            cout << "Please enter Valid Age" << endl;
        }

    } while (option != 0);

    return 0;
}
