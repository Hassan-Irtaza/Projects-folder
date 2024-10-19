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
    while (a < 0 || a > 100)
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
        cout << "Enter health status of the animal(good or bad):" << endl;
        cin >> animal[i].healthstatus;
        cin.ignore();
    }

    n += a;
}

void feedanimals(zoosystem animal[])
{

    string specie;

    cout << "Enter the Specie of the animal you want to feed" << endl;

    cin >> specie;

    bool temp = true;
    for (int i = 0; i < 100; i++)
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

void healthstatus(zoosystem animal[])
{

    string specie;

    cout << "Enter the name of the animal: " << endl;
    cin >> specie;

    bool temp = true;
    for (int i = 0; i < 100; i++)
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

void healthcheck(zoosystem animal[], int &n)
{

    cout << "Routine health checks for your animal are performed every week" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "The health status of " << animal[i].species << " is: " << animal[i].healthstatus << endl;
    }
}

int main()
{

    int operation;
    int n = 0;
    zoosystem animal[100];

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
            feedanimals(animal);
            break;
        case 3:
            healthstatus(animal);
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