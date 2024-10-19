#include <iostream>
using namespace std;

void display()
{
    cout << "************Zoo keeping system*****************" << endl;
    cout << "press 1: To add new animals" << endl;
    cout << "press 2: To feed the animals" << endl;
    cout << "press 3: To check the health status of the animals" << endl;
    cout << "press 4: To do health check of the animals" << endl;
    cout << "************Zoo keeping system*****************" << endl;
}
void addAnimal(animal a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter you animal species: ";
        cin >> a[i].species;
        cout << "enter you animal age: ";
        cin >> a[i].age;
        cout << "enter you animal health status(good(1) or bad(0)): ";
        cin >> a[i].health;
    }
}
void feedAnimal(animal a[])
{
    cout << "which animal do you wish to feed?";
    string m;
    bool o = true;
    cin >> m;
    for (int i = 0; i < 10; i++)
    {
        if (m == a[i].species)
        {
            cout << "You are now feeding this animal." << endl;
            o = false;
            break;
        }
    }
    if (o == true)
    {
        cout << "We dont have that animal in this zoo" << endl;
    }
}
struct animal
{
    string species;
    int age;
    bool health;
};

int main()
{
    int n, ch;
    string p;
    animal a[10];
    display();
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "how many animals do you wish to add?(less then 11)";
        cin >> n;
        addAnimal(a, n);
        break;
    case 2:
        feedAnimal(a);
        break;
    case 3:
        cout << "which animal do you want to check the health status of?";

        cin >> p;
        for (int i = 0; i < 10; i++)
        {
            if (a[i].species == p)
            {
                if (a[i].health == false)
                {
                    cout << a[i].species << " is in bad condition urgent care is needed";
                }
                else
                {
                    cout << a[i].species << " is in good condition";
                }
            }
        }
        break;
    case 4:
        for (int i = 0; i < 10; i++)
        {
            if (a[i].health == false)
            {
                cout << a[i].species << " is in bad condition urgent care is needed";
            }
        }
        break;
    default:
        cout << "invalid input";
        break;
    }

    return 0;
}
