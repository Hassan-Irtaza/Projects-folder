#include <iostream>
using namespace std;

/*
Question 2: Advanced Library Fine Calculator
Write a program that calculates the fine for overdue library books with varying fine rates for different categories of books.
The program should ask the user for the number of days the book is overdue and the type of book,
If the book is returned within 7 days of the due date, there is no fine.
If it's returned between 8 and 14 days late, the fine is $0.50 per day.
If it's returned more than 14 days late, the fine is $1.00 per day.
Additionally, for reference books, the fine rates are doubled, and for rare books, the fine rates are tripled.
*/

int daysDued(int daysDue, double fine)
{
    if (daysDue <= 7)
    {
        fine = 0;
    }
    else if (daysDue >= 8 && daysDue <= 14)
    {
        fine = 0.50 * (daysDue - 7);
    }
    else if (daysDue > 14)
    {
        fine = 1 * (daysDue - 7);
    }
    return fine;
}

int main()
{
    int daysDue;
    double fine = 0.0;
    int bookType;

    cout << "How many days is the book overdue: ";
    cin >> daysDue;
    while (daysDue <= 0)
    {
        cout << "Please enter correct date: ";
        cin >> daysDue;
    }

    fine = (daysDue, fine);

    cout << "Which type of book you want to purchase?" << endl;
    cout << "Press 1 for normal books" << endl;
    cout << "Press 2 for reference books" << endl;
    cout << "Press 3 for rare books" << endl;
    cin >> bookType;

    while (bookType <= 0 || bookType > 3)
    {
        cout << "Please enter your book type: ";
        cin >> bookType;
    }
    switch (bookType)
    {
    case 1:
        fine += 0;
        break;
    case 2:
        fine *= 2;
        break;
    case 3:
        fine *= 3;
        break;
    }

    cout << "Your final fine is: " << fine << "$" << endl;
    return 0;
}