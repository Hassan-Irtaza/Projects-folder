#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i = 0;
    int n, count = 1;
    string line, line2;
    ifstream inputfile("file.txt");

    if (!inputfile)
    {
        cerr << "file failed to open!" << endl;
    }
    while (getline(inputfile, line))
    {
        count++;
    }
    inputfile.close();

    ofstream outputFile("File.txt", ios ::app);
    if (!outputFile)
    {
        cerr << "file failed to open!" << endl;
    }
    cout << "Enter the number of students you want to enter: ";
    cin >> n;

    while (i < n)
    {

        getline(cin, line);
        outputFile << count << ". " << line << endl;

        cin.clear();
        count++;
        i++;
    }
    outputFile.close();

    ifstream inputfile2("file.txt");
    if (!inputfile2)
    {
        cerr << "file failed to open!" << endl;
    }
    while (!inputfile2.eof())
    {
        getline(inputfile2, line2);
        cout << line2 << endl;
    }
    inputfile2.close();
    return 0;
}