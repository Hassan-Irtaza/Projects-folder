#include <iostream>
#include <ctime>

using namespace std;

const int SIZE = 3;

void displayStyle(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = 'O';
        }
    }
}

void printBoard(char board[SIZE][SIZE])
{
    cout << "  ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " ";
        for (int j = 0; j < SIZE; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int getRow()
{
    int guessRow;
    do
    {
        cout << "Enter row (0-" << SIZE - 1 << "): ";
        cin >> guessRow;
    } while (guessRow < 0 || guessRow >= SIZE);
    return guessRow;
}

int getCol()
{
    int guessCol;
    do
    {
        cout << "Enter column (0-" << SIZE - 1 << "): ";
        cin >> guessCol;
    } while (guessCol < 0 || guessCol >= SIZE);
    return guessCol;
}

int getRand(int size)
{
    return rand() % size;
}

int main()
{
    char playerBoard[SIZE][SIZE];
    displayStyle(playerBoard);

    srand(time(0));
    int shipRow = getRand(SIZE);
    int shipCol = getRand(SIZE);

    int turns = 0;
    int playerHits = 0;

    cout << "Your board:\n";
    printBoard(playerBoard);

    while (playerHits == 0)
    {
        turns++;
        int guessRow = getRow();
        int guessCol = getCol();

        if (guessRow == shipRow && guessCol == shipCol)
        {
            cout << "Hit!\n";
            playerHits++;
            playerBoard[guessRow][guessCol] = 'X';
        }
        else
        {
            cout << "Miss!\n";
            playerBoard[guessRow][guessCol] = '#';
        }

        cout << "\nYour board:\n";
        printBoard(playerBoard);
    }

    cout << "Congratulations! You sunk the enemy ship in " << turns << " turns.\n";

    return 0;
}
