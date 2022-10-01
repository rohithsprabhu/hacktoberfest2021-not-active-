#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int  choice;
int  row, column;
char turn = 'X';
bool draw = false;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
void mainBoard()
{
    system("clear");
    cout << "\t\t████████╗██╗░█████╗░  ████████╗░█████╗░░█████╗░  ████████╗░█████╗░███████╗  " << endl;
    cout << "\t\t╚══██╔══╝██║██╔══██╗  ╚══██╔══╝██╔══██╗██╔══██╗  ╚══██╔══╝██╔══██╗██╔════╝  " << endl;
    cout << "\t\t░░░██║░░░██║██║░░╚═╝  ░░░██║░░░███████║██║░░╚═╝  ░░░██║░░░██║░░██║█████╗░░  " << endl;
    cout << "\t\t░░░██║░░░██║██║░░██╗  ░░░██║░░░██╔══██║██║░░██╗  ░░░██║░░░██║░░██║██╔══╝░░  " << endl;
    cout << "\t\t░░░██║░░░██║╚█████╔╝  ░░░██║░░░██║░░██║╚█████╔╝  ░░░██║░░░╚█████╔╝███████╗  " << endl;
    cout << "\t\t░░░╚═╝░░░╚═╝░╚════╝░  ░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░  ░░░╚═╝░░░░╚════╝░╚══════╝  " << endl;
    cout << "                                                                 "
         << "By Atul Kevat (@anonatul) " << endl;
    cout << "                "
         << "Player 1 = [ x ]" << endl;
    cout << "                "
         << "Player 2 = [ O ]" << endl;
    cout << endl;
    cout << endl;

    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t-----------------" << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t-----------------" << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << endl;
}
void player_turn()
{

    if (turn == 'X')
    {
        cout << "\tPlayer 1 [X] turn : ";
    }
    else if (turn == 'O')
    {
        cout << "\tPlayer 2 [O] turn : ";
    }

    cin >> choice;

    switch (choice)
    {
    case 1:  row = 0;  column = 0;  break;
    case 2:  row = 0;  column = 1;  break;
    case 3:  row = 0;  column = 2;  break;
    case 4:  row = 1;  column = 0;  break;
    case 5:  row = 1;  column = 1;  break;
    case 6:  row = 1;  column = 2;  break;
    case 7:  row = 2;  column = 0;  break;
    case 8:  row = 2;  column = 1;  break;
    case 9:  row = 2;  column = 2;  break;

    default:
        cout << "\t\t\t\tInvalid Move!!"<<endl;
        break;
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {

        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {

        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "\t\t\t\tBox is aleardy filled !!" << endl;
        player_turn();
    }
    mainBoard();
}
bool gameover()
{

    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}
int main()
{

    while (gameover())
    {

        mainBoard();
        player_turn();
        gameover();
    }
    if (turn == 'X' && draw == false)
    {

        cout << "\t\t\t█▀▀ █▀█ █▄░█ █▀▀ █▀█ ▄▀█ ▀█▀ █░█ █░░ ▄▀█ ▀█▀ █ █▀█ █▄░█ █▀" << endl;
        cout << "\t\t\t█▄▄ █▄█ █░▀█ █▄█ █▀▄ █▀█ ░█░ █▄█ █▄▄ █▀█ ░█░ █ █▄█ █░▀█ ▄█" << endl;
        cout << endl;
        cout << "                                       "
             << "Pʟᴀʏᴇʀ 2 [O] ɪs Wɪɴɴᴇʀ" << endl;
    }
    else if (turn == 'O' && draw == false)
    {
        cout << "\t\t\t█▀▀ █▀█ █▄░█ █▀▀ █▀█ ▄▀█ ▀█▀ █░█ █░░ ▄▀█ ▀█▀ █ █▀█ █▄░█ █▀" << endl;
        cout << "\t\t\t█▄▄ █▄█ █░▀█ █▄█ █▀▄ █▀█ ░█░ █▄█ █▄▄ █▀█ ░█░ █ █▄█ █░▀█ ▄█" << endl;
        cout << endl;
        cout << "                                       "
             << "Pʟᴀʏᴇʀ 1 [X] ɪs Wɪɴɴᴇʀ" << endl;
    }
    else
    {
        cout << "\t\t\t\t█▀▀ ▄▀█ █▀▄▀█ █▀▀   █▀█ █░█ █▀▀ █▀█   █ █" << endl;
        cout << "\t\t\t\t█▄█ █▀█ █░▀░█ ██▄   █▄█ ▀▄▀ ██▄ █▀▄   ▄ ▄" << endl;
    }
    return 0;
}
