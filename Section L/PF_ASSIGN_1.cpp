#include <iostream>
#include <iomanip>
using namespace std;

void showMenu()
{
    cout << "|---------------------HI!Welcome to my resturnat--------------------------|" << endl;
    cout << setw(13) << "Meal_ID" << setw(20) << "Meal_Name" << setw(20) << "Meal_PKR_Price" << endl;
    cout << setw(10) << "1" << setw(25) << "Chicken Karahi" << setw(10) << "1800" << endl;
    cout << setw(10) << "2" << setw(25) << "Chicken Tikka" << setw(10) << "2000" << endl;
    cout << setw(10) << "3" << setw(25) << "Chicken Haleem" << setw(10) << "2200" << endl;
    cout << setw(10) << "4" << setw(25) << "Creamy Chicken" << setw(10) << "2500" << endl;
    cout << setw(10) << "5" << setw(25) << "Chicken Handi" << setw(10) << "800" << endl;
    cout << setw(10) << "0" << setw(25) << "To close menu" << setw(10) << "----" << endl;
    cout << "|-------------------------------------------------------------------------|" << endl;
}

int getCurrency()
{
    int currency;
    cout << "|========================================================================|" << endl;
    cout << "|How would you like to pay?==============================================|" << endl;
    cout << "|Enter 1: Dollars========================================================|" << endl;
    cout << "|Enter 2: Euros==========================================================|" << endl;
    cout << "|Enter 3: Rupees=========================================================|" << endl;
    cout << "|========================================================================|" << endl;
    cin >> currency;
    return currency;
}

bool checkCurrency(int currency)
{
    return (currency >= 1 && currency <= 3);
}

int getQuantity()
{
    int quantity;
    cout << "|how many kg do you want?================================================|" << endl;
    cin >> quantity;
    return quantity;
}

bool quantityCheck(int quantity)
{
    return (quantity > 0);
}

bool checkChoice(int choice)
{
    return (choice >= 0 && choice <= 5);
}

int repeatedChoice()
{
    int choice;
    cout << "do you want to order anything else?(1/0)" << endl;
    cin >> choice;
    while (!checkChoice(choice))
    {
        cout << "Pleaase input correct item number: ";
        cin >> choice;
    }

    return choice;
}

int exit()
{
    int choice;
    cout << "|========================================================================|" << endl;
    cout << "|Do you want to order again? Press 0 to Quit and 1 to try again==========|" << endl;
    cout << "|========================================================================|" << endl;
    cin >> choice;
    return choice;
}

double getOrder(int choice)
{
    int quantity, temp = 0;
    double Total_bill;
    int Chicken_Karahi = 1800,
        Chicken_Tikka = 2000,
        Chicken_Haleem = 2200,
        Creamy_Chicken = 2500,
        Chicken_Handi = 800;
    while (choice != 0)
    {
        cout << "Enter the Meal Id you want to choose" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            quantity = getQuantity();
            while (!quantityCheck(quantity))
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Karahi * quantity;
            Total_bill += temp;
            temp = Total_bill;
            choice = repeatedChoice();
            break;
        case 2:
            quantity = getQuantity();
            while (!quantityCheck(quantity))
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Tikka * quantity;
            Total_bill += temp;
            temp = Total_bill;
            choice = repeatedChoice();
            break;
        case 3:
            quantity = getQuantity();
            while (!quantityCheck(quantity))
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Haleem * quantity;
            Total_bill += temp;
            temp = Total_bill;
            choice = repeatedChoice();
            break;
        case 4:
            quantity = getQuantity();
            while (!quantityCheck(quantity))
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Creamy_Chicken * quantity;
            Total_bill += temp;
            temp = Total_bill;
            choice = repeatedChoice();
            break;
        case 5:
            quantity = getQuantity();
            while (!quantityCheck(quantity))
            {
                cout << "|==============The input was invalid please try again====================|" << endl;
                cin >> quantity;
            }
            Total_bill = Chicken_Handi * quantity;
            Total_bill += temp;
            temp = Total_bill;
            choice = repeatedChoice();
            break;
        }
    }
    return Total_bill;
}

double calculateTaxedBill(double Total_bill)
{
    double tax, taxed_bill;

    if (Total_bill > 3000)
    {
        tax = Total_bill * 5 / 100;
        taxed_bill = Total_bill + tax;
    }
    else if (Total_bill <= 3000 && Total_bill > 1000)
    {
        tax = Total_bill * 2 / 100;
        taxed_bill = Total_bill + tax;
    }
    else
    {
        taxed_bill = Total_bill;
    }

    return taxed_bill;
}

void printBill(int currency, int Total_bill, int taxed_bill, int tax)
{
    switch (currency)
    {
    case 1:
        Total_bill /= 165;
        taxed_bill /= 165;
        tax /= 165;
        cout << "|=====================Thank you for the purchase=========================|" << endl;
        cout << "|Your total bill without taxes is: " << Total_bill << "$"
             << "==============================|" << endl;
        cout << "|Your total bill with taxes is: " << taxed_bill << "$"
             << "=================================|" << endl;
        cout << "|Your total taxes are: " << tax << "$"
             << "==========================================|" << endl;
        cout << "|==========================================================================|" << endl;
        break;
    case 2:
        Total_bill /= 193;
        taxed_bill /= 193;
        tax /= 193;
        cout << "|=====================Thank you for the purchase=========================|" << endl;
        cout << "|Your total bill without taxes is: " << Total_bill << "Eu"
             << "=============================|" << endl;
        cout << "|Your total bill with taxes is: " << taxed_bill << "Eu"
             << "=================================|" << endl;
        cout << "|Your total taxes are: " << tax << "Eu"
             << "=============================================|" << endl;
        cout << "|========================================================================|" << endl;
        break;
    case 3:
        cout << "|=====================Thank you for the purchase=========================|" << endl;
        cout << "|Your total bill without taxes is: " << Total_bill << "Rs"
             << "================================|" << endl;
        cout << "|Your total bill with taxes is: " << taxed_bill << "Rs"
             << "===================================|" << endl;
        cout << "|Your total taxes are: " << tax << "Rs"
             << "=============================================|" << endl;
        cout << "|========================================================================|" << endl;
        break;
    }
}

int main()
{
    double tax, Total_bill, taxed_bill;
    int choice, currency;
    int quantity;

    showMenu();
    while (choice != 0)
    {

        while (!checkChoice(choice))
        {
            cout << "Pleaase input correct item number: ";
            cin >> choice;
        }

        double Total_bill = getOrder(choice);

        currency = getCurrency();

        while (!checkCurrency(currency))
        {
            cout << "Pleaase input correct item number: ";
            cin >> choice;
        }

        double taxed_bill = calculateTaxedBill(Total_bill);

        printBill(currency, Total_bill, taxed_bill, tax);

        choice = exit();
    }

    cout << "The program has ended!!" << endl;

    return 0;
}
