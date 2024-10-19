#include <iostream>

using namespace std;

int calc(double townAPopulation, double townAGrowthRate, double townBPopulation, double townBGrowthRate, int year = 0)
{
    if (townAPopulation >= townBPopulation)
    {
        return year;
    }
    townAPopulation += townAPopulation * (townAGrowthRate / 100.0);
    townBPopulation += townBPopulation * (townBGrowthRate / 100.0);
    return calc(townAPopulation, townAGrowthRate, townBPopulation, townBGrowthRate, year + 1);
}

int main()
{
    double initialTownAPopulation, townAGrowthRate, initialTownBPopulation, townBGrowthRate;

    cout << "Enter the initial population of town A: ";
    cin >> initialTownAPopulation;
    cout << "Enter the growth rate of town A (as a percentage): ";
    cin >> townAGrowthRate;
    cout << "Enter the initial population of town B: ";
    cin >> initialTownBPopulation;
    cout << "Enter the growth rate of town B (as a percentage): ";
    cin >> townBGrowthRate;

    int years = calc(initialTownAPopulation, townAGrowthRate, initialTownBPopulation, townBGrowthRate);

    cout << "After " << years << " years, the population of town A will reach or surpass the population of town B." << endl;

    return 0;
}
