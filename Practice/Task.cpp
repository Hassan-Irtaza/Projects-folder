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

void assignGrade(float average, char &grade)
{
    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 75)
    {
        grade = 'B';
    }
    else if (average >= 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }
}

int main()
{
    int subjArray[3];
    char ans, grade;
    float avg;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter you marks for subject: ";
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
    assignGrade(avg, grade);
    cout << "your total grade average is: " << grade << " with " << avg << "%";
    return 0;
}