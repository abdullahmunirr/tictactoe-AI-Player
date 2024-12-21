#include <iostream>
#include <climits>
using namespace std;

void displayBoard(char array[])
{
    for(int i = 0; i<9; i++)
    {
        if(i % 3 == 0)
        {
            cout << endl;
            cout << "+-----------+" << endl;
            cout << "| ";
        }
        cout << array[i] << " | ";
    }
    cout << endl << "+-----------+" << endl;
    cout << endl;
}

bool checkWin(char array[], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if ((array[i*3] == player && array[i*3+1] == player && array[i*3+2] == player) ||
            (array[i] == player && array[i+3] == player && array[i+6] == player))
        {
            return true;
        }
    }
    
    if ((array[0] == player && array[4] == player && array[8] == player) ||
        (array[2] == player && array[4] == player && array[6] == player))
    {
        return true;
    }
    return false;
}

bool checkTie(char array[])
{
    for (int i = 0; i < 9; i++)
    {
        if (array[i] != 'X' && array[i] != 'O')
        {
            return false;
        }
    }
    
    return true;
}

int minimax(char array[], int depth, bool isMaximizing, char player, char opponent)
{
    if (checkWin(array, player))
    {
        return 10 - depth;
    }
    
    if (checkWin(array, opponent))
    {
        return depth - 10;
    }
    
    if (checkTie(array))
    {
        return 0;
    }
    
    int best;
    
    if (isMaximizing)
    {
        best = INT_MIN;
    }
    
    else
    {
        best = INT_MAX;
    }
    
    for (int i = 0; i < 9; i++)
    {
        if (array[i] != 'X' && array[i] != 'O')
        {
            if (isMaximizing)
            {
                array[i] = player;
            }
            
            else
            {
                array[i] = opponent;
            }
            
            int score = minimax(array, depth + 1, !isMaximizing, player, opponent);
            
            array[i] = '1' + i;
            
            if (isMaximizing)
            {
                best = max(best, score);
            }
            
            else
            {
                best = min(best, score);
            }
        }
    }
    return best;
}

int findBestMove(char array[], char player, char opponent)
{
    int bestVal = INT_MIN;
    int bestMove = -1;
    
    for (int i = 0; i < 9; i++)
    {
        if (array[i] != 'X' && array[i] != 'O')
        {
            array[i] = player;
            
            int moveVal = minimax(array, 0, false, player, opponent);
            array[i] = '1' + i;
            
            if (moveVal > bestVal)
            {
                bestMove = i;
                bestVal = moveVal;
            }
        }
    }
    return bestMove;
}

void clearScreen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void playGame()
{
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int move;
    char player = 'X', ai = 'O';
    
    while (true)
    {
        clearScreen();
        displayBoard(board);
        
        cout << "Enter your move:";
        cin >> move;
        
        if (board[move - 1] != 'X' && board[move - 1] != 'O')
        {
            board[move - 1] = player;
        }
        
        else
        {
            cout << "Invalid move, Try again:" << endl;
            continue;
        }
        
        if (checkWin(board, player))
        {
            clearScreen();
            displayBoard(board);
            cout << "You win" << endl;
            break;
        }
        
        if (checkTie(board))
        {
            clearScreen();
            displayBoard(board);
            cout << "Game's Tie" << endl;
            break;
        }
        
        cout << "AI is making a move..." << endl;
        
        int bestMove = findBestMove(board, ai, player);
        board[bestMove] = ai;
        
        if (checkWin(board, ai))
        {
            clearScreen();
            displayBoard(board);
            cout << "AI wins" << endl;
            break;
        }
        
        if (checkTie(board))
        {
            clearScreen();
            displayBoard(board);
            cout << "Game's Tie" << endl;
            break;
        }
    }
}

int main()
{
    playGame();
    return 0;
}
