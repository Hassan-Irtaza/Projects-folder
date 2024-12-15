#include <iostream>
using namespace std;

int main()
{
    char arr[6][5] = {{'A', 'B', 'C', 'D', 'E'}, {'F', 'G', 'H', 'I', 'J'}, {'K', 'L', 'M', 'N', 'O'}, {'P', 'Q', 'R', 'S', 'T'}, {'U', 'V', 'W', 'X', 'Y'}, {'Z'}};
    char arr2[100];
    string input;
    int i = 0, row = 0, col = 0;
    cout << "Enter your command to traverse the selection" << endl;
    cin >> input;
    int size = input.length();
    for (int c = 0; c <= size - 1; c++)
    {
        if (input.at(c) == ' ')
        {
            row = 0;
            col = 0;
        }
        if (input.at(c) == 'd')
        {
            row = row + 1;
        }
        if (input.at(c) == 'u')
        {
            row = row - 1;
        }
        if (input.at(c) == 'l')
        {
            col = col - 1;
        }
        if (input.at(c) == 'r')
        {
            col = col + 1;
        }
        if (row == 5)
        {
            row = 0;
        }
        if (col == 4)
        {
            col = 0;
        }
        if (input.at(c) == '#')
        {
            arr2[i] = arr[row][col];
            i++;
        }
    }

    for (int b = 0; b <= size; b++)
    {
        cout << arr2[b];
    }

    return 0;
}