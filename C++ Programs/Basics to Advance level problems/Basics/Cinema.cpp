#include <iostream>
using namespace std;

/*
Question2: Movie Ticket Price Calculator with Seat Selection
Create a program that determines the price of movie tickets based on age, time of the movie, and seat selection. The program should ask the user for their age, the time of the movie (in 24-hour format), and the type of seat (standard, VIP, or premium). For ages 0-5 and 65+, tickets are free. For ages 6-12, tickets are 500 pkr. For ages 13-64, tickets are 1000 pkr. Additionally, if the movie is scheduled before 5:00 PM, there's a 200 pkr discount on each ticket. For VIP seats, there's a 500 pkr surcharge, and for premium seats, there's a 1000 surcharge.
*/
int validateAge(int age)
{
    int bill;
    if (age <= 5 || age >= 65)
    {
        bill = 0;
    }
    else if (age >= 6 && age <= 12)
    {
        bill = 500;
    }
    else if (age >= 13 && age <= 64)
    {
        bill = 1000;
    }
    else
    {
        cout << "Please enter valid number!" << endl;
    }
    return bill;
}

int selectSeat(int bill, int seat_type)
{
    switch (seat_type)
    {
    case 1:
        cout << "No extra charges charged on standard seat" << endl;
        break;
    case 2:
        cout << "500rs is charged for purchasing vip seat" << endl;
        bill += 500;
        break;
    case 3:
        cout << "1000rs is charged for purchasing premium seat" << endl;
        bill += 1000;
        break;
    }
    return bill;
}

int main()
{
    int age, time, seat_type, bill;
    cout << "enter your age: ";
    cin >> age;
    while (age <= 0)
    {
        cout << "please enter your correct age: ";
        cin >> age;
    }
    bill = validateAge(age);

    cout << "Which type of seat you want to purchase?" << endl;
    cout << "Press 1 for Standard" << endl;
    cout << "Press 2 for VIP" << endl;
    cout << "Press 3 for Premium" << endl;
    cin >> seat_type;

    while (seat_type <= 0 || seat_type >= 3)
    {
        cout << "Please enter your seat type: ";
        cin >> seat_type;
    }
    bill = selectSeat(bill, seat_type);

    cout << "Enter your movie timming in 24 hour format: ";
    cin >> time;
    while (time <= 0)
    {
        cout << "Enter your movie timming in 24 hour format: ";
        cin >> time;
    }

    if (time < 17)
    {
        bill -= 200;
    }

    cout << "Your total bill is: " << bill << endl;

    return 0;
}