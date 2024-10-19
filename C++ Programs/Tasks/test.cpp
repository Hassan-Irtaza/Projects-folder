#include <iostream>
using namespace std;

int main()
{
    char grade;
    int age;
    string name;
    float avg;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter your age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter your grade: ";
        cin >> grade;
        cin.ignore();

        cout << "Enter your average score: ";
        cin >> avg;

        cout << "Your name is: " << name << endl;
        cout << "Your age is: " << age << endl;
        cout << "Your grade is: " << grade << endl;
        cout << "Your average score is: " << avg << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 1;
//     while (n++ < 6)//1//2//3//4//5
//     {
//         cout << n << endl;//2//3//4//5//6
//     }

//     return 0;
// }
