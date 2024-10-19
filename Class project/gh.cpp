#include <iostream>
#include <string>
using namespace std;

struct zoosystem
{
    string species;
    int age;
    string healthstatus;
};

void addanimals(zoosystem animal[], int &n)
{

    int a;

    cout << "How many Animals do you want to enter?: " << endl;
    cin >> a;
    while (a < 0 || a > n)
    {
        cout << "Invalid input, please try again" << endl;
        cin >> a;
    }

    cout << "Enter details of your animal: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter specie of the animal:" << endl;
        cin >> animal[i].species;
        cin.ignore();
        cout << "Enter age of the animal:" << endl;
        cin >> animal[i].age;
        cin.ignore();
        cout << "Enter health status of the animal, good or bad:" << endl;
        cin >> animal[i].healthstatus;
        cin.ignore();

        cout << "New animal Added to the Zoo list!" << endl;
    }
}

void feedanimals(zoosystem animal[], int n)
{

    string specie;

    cout << "Enter the Specie of the animal you want to feed" << endl;
    cout << "press E to exit! " << endl;
    cin >> specie;
    if (specie == "E" || specie == "e")
        return;
    bool temp = true;
    for (int i = 0; i < n; i++)
    {
        if (animal[i].species == specie)
        {
            cout << "You fed: " << specie << endl;
            temp = false;
        }
    }
    if (temp != false)
    {
        cout << "Animal not found, please try again." << endl;
    }
}

void healthstatus(zoosystem animal[], int n)
{

    string specie;

    cout << "Enter the name of the animal: " << endl;
    cout << "press E to go back to main menu " << endl;
    cin >> specie;
    if (specie == "E" || specie == "e")
        return;

    bool temp = true;
    for (int i = 0; i < n; i++)
    {
        if (animal[i].species == specie)
        {
            cout << "Health status of " << specie << " is: " << animal[i].healthstatus << endl;
            temp = false;
        }
    }
    if (temp != false)
    {
        cout << "Animal not found, please try again." << endl;
    }
}

void healthcheck(zoosystem animal[], int n)
{

    bool temp = true;
    for (int i = 0; i < n; i++)
    {

        cout << "Routine health checks for your animal are performed every week" << endl;
        if (animal[i].healthstatus == "bad")
        {
            temp == false;
        }
        cout << "The health status of " << animal[i].species << " is: " << animal[i].healthstatus << endl;
    }
    if (temp != false)
    {
        cout << "Congrats! All animals are healthy." << endl;
    }
}

int main()
{

    int operation;
    int n = 10;
    zoosystem animal[n];

    cout << "WELCOME TO VIRTUAL ZOO MANAGEMENT SYSTEM" << endl;
    do
    {
        cout << "Choose an Operation:" << endl;
        cout << "| 1) Add a new Animal                    |" << endl;
        cout << "| 2) Feed the Animals                    |" << endl;
        cout << "| 3) Check health status of animals      |" << endl;
        cout << "| 4) Perform routine checkups on animals |" << endl;
        cout << "| 5) Exit the Program                    |" << endl;
        cin >> operation;

        while (operation < 0 && operation > 5)
        {
            cout << "Please enter Valid operation option: " << endl;
            cin >> operation;
        }

        switch (operation)
        {

        case 1:
            addanimals(animal, n);
            break;
        case 2:
            feedanimals(animal, n);
            break;
        case 3:
            healthstatus(animal, n);
            break;
        case 4:
            healthcheck(animal, n);
            break;
        case 5:
            cout << "Exiting the program...." << endl;
            break;

        default:
            cout << "Invalid input,please try again" << endl;
        }

    } while (operation != 5);

    return 0;
}