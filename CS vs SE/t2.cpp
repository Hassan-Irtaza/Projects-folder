#include <iostream>
using namespace std;

int main()
{
    char arr[6][5] = {{'A', 'B', 'C', 'D', 'E'}, {'F', 'G', 'H', 'I', 'J'}, {'K', 'L', 'M', 'N', 'O'}, {'P', 'Q', 'R', 'S', 'T'}, {'U', 'V', 'W', 'X', 'Y'}, {'Z'}};
    char arr2[100];
    int cursor = arr[0][0];
    char input;
    int i = 0, row = 0, col = 0;

    cout << "Enter your command to traverse the selection" << endl;
    do
    {

        cin >> input;
        if (input == ' ')
        {
            arr2[i] = ' ';
            i++;
        }
        if (input == 'd')
        {
            row = row + 1;
        }
        if (input == 'u')
        {
            row = row - 1;
        }
        if (input == 'l')
        {
            col = col + 1;
        }
        if (input == 'r')
        {
            col = col - 1;
        }
        if (input == '#')
        {
            arr2[i] = arr[row][col];
            i++;
        }
        if (input == 'q')
        {
            break;
        }
    } while (input == 'd' || input == 'u' || input == 'l' || input == 'r' || input == '#');
    cout << "not in the loop" << endl;

    for (int b = 0; b <= i; b++)
    {
        cout << arr2[b];
    }

    return 0;
}