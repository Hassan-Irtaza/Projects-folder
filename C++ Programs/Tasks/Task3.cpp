#include <iostream>
using namespace std;

// 3.	Develop a C++ program that calculates the Body Mass Index (BMI) of a person based on their height and weight. BMI is calculated as weight (in kilograms) divided by the square of height (in meters).

int main()
{
    double h, w, bmi = 0;
    cout << "Enter your height(in meters): ";
    cin >> h;
    cout << "Enter your weight(in kgs): ";
    cin >> w;
    bmi = w / pow(h, 2);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5)
    {
        cout << "You are underweight";
    }
    else if (bmi > 18 && bmi < 22)
    {
        cout << "You are normal weight";
    }
    else
    {
        cout << "You are overweight";
    }

    return 0;
}