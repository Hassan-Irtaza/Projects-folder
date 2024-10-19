#include <iostream>
#include <ctime>

using namespace std;

const int Size = 3;

void displatStyle(int Size)
{
    char playerBoard[Size][Size];
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            playerBoard[i][j] = 'O';
        }
    }
}

void printBoard(char board[Size][Size])
{
    cout << "  ";
    for (int i = 0; i < Size; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < Size; i++)
    {
        cout << i << " ";
        for (int j = 0; j < Size; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int getrow()
{
    int guessRow;
    do
    {
        cout << "Enter row (0-" << Size - 1 << "): ";
        cin >> guessRow;
    } while (guessRow < 0 || guessRow >= Size);
    return guessRow;
}

int getCol()
{
    int guessCol;
    do
    {
        cout << "Enter column (0-" << Size - 1 << "): ";
        cin >> guessCol;
    } while (guessCol < 0 || guessCol >= Size);
    return guessCol;
}

int getRand(int size)
{
    return rand() % size;
}

int main()
{
    char playerBoard[Size][Size];
    displatStyle(Size);

    srand(time(0));
    int shipRow = getRand(Size);
    int shipCol = getRand(Size);

    int turns = 0;
    int playerHits = 0;

    cout << "Your board:\n";
    printBoard(playerBoard);

    while (true)
    {
        turns++;
        int guessRow, guessCol;

        cout << "\nTurn " << turns << ": Fire your cannons!\n";

        guessRow = getrow();
        guessCol = getCol();

        if (guessRow == shipRow && guessCol == shipCol)
        {
            cout << "Hit!\n";

            playerHits++;
            playerBoard[guessRow][guessCol] = 'X';
            break;
        }
        else
        {
            cout << "Miss!\n";
            playerBoard[guessRow][guessCol] = 'O';
        }

        cout << "\nYour board:\n";
        printBoard(playerBoard);
    }

    cout << "Congratulations! You sunk the enemy ship in " << turns << " turns.\n";

    return 0;
}
