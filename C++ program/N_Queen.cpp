#include <bits/stdc++.h>

int n, sol = 1;

int is_this_safe(char board[n][n], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
            return 0;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; j--, i--)
    {
        if (board[i][j] == 'Q')
            return 0;
    }
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 'Q')
            return 0;
    }
    return 1;
}

int keep_solving_forward(char board[n][n], int col)
{
    if (col == n)
    {
        printf("Solution %d\n", sol);
        sol++;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (is_this_safe(board, i, col) == 1)
        {
            board[i][col] = 'Q';
            keep_solving_forward(board, col + 1);
            board[i][col] = '*';
        }
    }
    return 0;
}
int main()
{
    printf("Enter the number of queens: ");
    scanf("%d", &n);
    char board[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = '*';
        }
    }
    keep_solving_forward(board, 0);
    if (!sol)
    {
        printf("No solution exists");
    }
    else
    {
        printf("There are %d solutions for %d X %d chessboard", sol - 1, n, n);
    }
    return 0;
}