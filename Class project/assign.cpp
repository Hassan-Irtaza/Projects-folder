#include <iostream>
#include <string>

using namespace std;

struct Animal
{
    string species;
    int age;
    bool health;
};

void displayMenu()
{
    cout << "1. Add Animal\n";
    cout << "2. Feed Animal\n";
    cout << "3. Check Specific Health\n";
    cout << "4. Check All Health\n";
    cout << "5. Exit\n";
}

void addAnimal(Animal animals[], int &numAnimals)
{
    int n;
    cout << "How many animals to add? (Max 10): ";
    cin >> n;
    while (n > 10)
    {
        cout << "How many animals to add? (Max 10): ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for animal " << (i + 1) << ":\n";
        cout << "  Species: ";
        cin >> animals[numAnimals + i].species;
        cout << "  Age: ";
        cin >> animals[numAnimals + i].age;
        cout << "  Health (good: 1, bad: 0): ";
        cin >> animals[numAnimals + i].health;
    }
    numAnimals += n;
}

int feedAnimal(Animal animals[], int numAnimals)
{
    string name;
    cout << "Enter animal species to feed: ";
    cin >> name;

    bool found = false;
    for (int i = 0; i < numAnimals && !found; i++)
    {
        if (animals[i].species == name)
        {
            cout << "You are now feeding " << name << ".\n";
            found = true;
            return 0;
        }
    }
    if (!found)
    {
        cout << "We don't have that animal in this zoo.\n";
    }
    return 0;
}

void checkHealth(Animal animals[], int numAnimals, string message)
{
    cout << message << "\n";
    for (int i = 0; i < numAnimals; i++)
    {
        if (!animals[i].health)
        {
            cout << animals[i].species << " is in bad condition. Urgent care is needed.\n";
        }
    }
    if (numAnimals == 0)
    {
        cout << "There are no animals in the zoo yet.\n";
    }
}

int main()
{
    int ch, numAnimals = 0;
    Animal animals[10];

    do
    {
        displayMenu();
        cin >> ch;

        switch (ch)
        {
        case 1:
            addAnimal(animals, numAnimals);
            break;
        case 2:
            feedAnimal(animals, numAnimals);
            break;
        case 3:
            checkHealth(animals, numAnimals, "Enter animal species to check:");
            break;
        case 4:
            checkHealth(animals, numAnimals, "Health status of all animals:");
            break;
        case 5:
            cout << "Exiting Zoo Management System.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (ch != 5);

    return 0;
}
