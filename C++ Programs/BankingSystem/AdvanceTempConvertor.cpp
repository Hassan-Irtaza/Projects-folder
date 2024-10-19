#include <iostream>
using namespace std;
// using functions
// Fahrenheit, Celsius, and Kelvin.
double CelsiusToFahrenheit(double celsius)
{
  return (celsius * 9.0 / 5.0) + 32.0;
}

double FahrenheitToCelsius(double fahrenheit)
{
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double CelsiusToKelvin(double celsius)
{
  return celsius + 273.15;
}

double KelvinToCelsius(double kelvin)
{
  return kelvin - 273.15;
}

int main() {
    int choice;
    double temperature,FinalTemp;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" <<endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout<<"Enter the temperature in Celcius: ";
        cin>>temperature;
        FinalTemp = CelsiusToFahrenheit(temperature);
        break;
    case 2:
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>temperature;
        FinalTemp = FahrenheitToCelsius(temperature);
        break;
    case 3:
        cout<<"Enter the temperature in Celcius: ";
        cin>>temperature;
        FinalTemp = CelsiusToKelvin(temperature);
        break;
    case 4:
        cout<<"Enter the temperature in kelvin: ";
        cin>>temperature;
        FinalTemp = KelvinToCelsius(temperature);
        break;
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }
    
    cout << "Converted Temperature: " << FinalTemp<< endl;
    return 0;
}