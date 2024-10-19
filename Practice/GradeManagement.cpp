#include <iostream>
using namespace std;

float CalcAvg(int subjArray[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += subjArray[i];
    }
    float avg = sum / 3;
    return avg;
}
float CalcAvg(int subjArray[], int optional)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += subjArray[i];
    }
    sum += optional;
    float avg = sum / 4;
    return avg;
}

int main()
{
    int subjArray[3];
    char ans;
    float avg;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter you marks for subject: " << i + 1 << endl;
        cin >> subjArray[i];
    }
    cout << "Do you want to Add the optional Subject marks? y/n? " << endl;
    cin >> ans;
    if (ans == 'y')
    {
        int optional;
        cout << "Enter optional marks: ";
        cin >> optional;
        avg = CalcAvg(subjArray, optional);
    }
    else
    {
        avg = CalcAvg(subjArray);
    }
    if (avg > 90)
    {
        cout << "your total grade avg is: " << "A " << "with " << avg << "%";
    }
    else if (avg > 80)
    {

        cout << "your total grade avg is: " << "B " << "with " << avg << "%";
    }
    else if (avg > 70)
    {
        cout << "your total grade avg is: " << "C " << "with " << avg << "%";
    }
    else
    {
        cout << "your total grade avg is: " << "F " << "with " << avg << "%";
    }
    return 0;
}