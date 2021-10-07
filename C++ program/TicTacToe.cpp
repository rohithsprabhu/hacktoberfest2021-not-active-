/*
  Tic Tac Toe game
 */
#include <iostream>       // std::cout
#include <string>         // std::string
#include <fstream>
#include <stdlib.h>

using namespace std;

int main ()
{
    //Initlalizes all Variables
    //string s = "2 3";
    //cout << s.find(",") << endl;
    string PieceChecker="1";
    string hDivLine = "+---+---+---+\n";
    string emptyLine = "|   |   |   |\n";
    
    string pieceLabel1 = "X",
    pieceLabel2 = "O";
    string userCommand,
    prompt2play="Please enter row,column (such as 2,2) to place your piece:\nPlease enter q to quit at any time. \n",
    greeting="Welcome to play Colin's Tic-Tac-Toe!\n",
    unknown="Command not understood. Please try again.\n";
    string row, col;
    
    string prompt = greeting + prompt2play;
    string pieceInUse = pieceLabel1;
    int moveCount = 0;
    
    string row1 = emptyLine;
    string row2 = emptyLine;
    string row3 = emptyLine;
    
    //Loops until 9 rounds have been played
    while (1 && PieceChecker=="1") {
        //display board
        cout << hDivLine;
        cout << row1;
        cout << hDivLine;
        cout << row2;
        cout << hDivLine;
        cout << row3;
        cout << hDivLine;
        
        cout << prompt;
        //Takes in users input
        getline(cin, userCommand);
        //Allows Quit
        if (userCommand == "q" || userCommand == "quit" || userCommand == "Q" )
        {
            cout << "Bye!\n";
            return 0;
        }
        //Extracts User input
        else if (userCommand.find(",") < 10) {
            row = userCommand.substr(0,userCommand.find(","));
            col = userCommand.substr(userCommand.find(",")+1);
            cout << row << ":" << col << "\n";
            
            // add if-else structure to choose the right row to change
            // row1, row2 or row3
          //player 1
            if (row == "2") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                //Replaces Characters in string
                row2.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row2.replace(colInt + 3 * (colInt-1) + 1, 1, "X");
                moveCount++;
                //Runs move counter
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    //Checks if piece is in use
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else if (row == "1") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                row1.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row1.replace(colInt + 3 * (colInt-1) + 1, 1, "X");
                moveCount++;
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else if (row == "3") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                row3.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row3.replace(colInt + 3 * (colInt-1) + 1, 1, "X");
                moveCount++;
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else {
                prompt = unknown + prompt2play;
            }
            
            system("cls");
        }
        //Player 2
        //display board
        cout << hDivLine;
        cout << row1;
        cout << hDivLine;
        cout << row2;
        cout << hDivLine;
        cout << row3;
        cout << hDivLine;
        
        cout << prompt;
        
        getline(cin, userCommand);
        if (userCommand == "q" || userCommand == "quit" || userCommand == "Q")
        {
            cout << "Bye!\n";
            return 0;
        }
        else if (userCommand.find(",") < 10) {
            row = userCommand.substr(0,userCommand.find(","));
            col = userCommand.substr(userCommand.find(",")+1);
            cout << row << ":" << col << "\n";
            
            // add if-else structure to choose the right row to change
            // row1, row2 or row3
            //player 1
            if (row == "2") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                row2.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row2.replace(colInt + 3 * (colInt-1) + 1, 1, "O");
                moveCount++;
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else if (row == "1") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                row1.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row1.replace(colInt + 3 * (colInt-1) + 1, 1, "O");
                moveCount++;
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else if (row == "3") {
                int colInt = col[0] - 48;
                //cout <<  colChar << "\n";
                row3.replace(colInt + 3 * (colInt-1) + 1, 1, pieceInUse);
                row3.replace(colInt + 3 * (colInt-1) + 1, 1, "O");
                moveCount++;
                if (moveCount == 9) {
                    cout << "Game over!" << endl;
                    return 0;
                }
                else {
                    if (moveCount%2 == 0)
                        pieceInUse = pieceLabel1;
                    else
                        pieceInUse = pieceLabel2;
                }
                prompt = prompt2play;
                //row2.replace(6, 1, "X");
                //}
            }
            else {
                prompt = unknown + prompt2play;
            }
            
            system("cls");
        }
    }
 
    return 0;
}
