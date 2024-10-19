/*
attack
defend
parry
chest box
-potion
-xp
-empty
goblin,knight,dragon
randomiser for critical hit
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int health = 100;
    int attack = 10;
    int defense = 5;

    int enemyHealth = 200;
    int enemyAttack = 8;
    int enemyDefense = 0;

    cout << "Welcome adventurer! You find yourself standing at the edge of a dark forest...\n";

    while (health > 0 && enemyHealth > 0)
    {

        cout << "\nYour health: " << health << endl;
        cout << "Enemy health: " << enemyHealth << endl;
        cout << "What do you do?\n";
        cout << "1. Attack\n";
        cout << "2. Defend\n";
        cout << "3. Check inventory\n";
        int choice;
        cin >> choice;

        if (choice == 1)
        {

            int damage = (attack * (rand() % 3)) - enemyDefense;
            if (damage <= 0)
            {
                damage = 0;
                cout << "Miss!";
            }
            else
            {
                cout << "Hit!!";
            }
            enemyHealth -= damage;
            cout << "You deal " << damage << " points of damage!\n";
        }
        else if (choice == 2)
        {
            cout << "You brace yourself for the enemy attack.\n";
        }
        else
        {
            cout << "Invalid choice. You do nothing.\n";
        }

        if (enemyHealth <= 0)
        {
            cout << "You have defeated the enemy!\n";
            break;
        }

        int enemyDamage = (enemyAttack * (rand() % 3)) - defense;
        if (enemyDamage < 0)
        {
            enemyDamage = 0;
            cout << "Miss!";
        }
        else
        {
            cout << "Hit!!";
        }
        health -= enemyDamage;
        cout << "The enemy attacks you for " << enemyDamage << " points of damage!\n";

        if (health <= 0)
        {
            cout << "You have been defeated!\n";
            break;
        }
    }

    cout << "Thanks for playing!\n";

    return 0;
}
