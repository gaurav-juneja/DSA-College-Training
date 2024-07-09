/*
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSafe(int row, int col, vector<string> board, int n)
    {
        // Check upper diagonal on the left side
        int duprow = row;
        int dupcol = col;

        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        // Reset row and col to the original values
        row = duprow;
        col = dupcol;

        // Check left side in the same row
        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        // Reset row and col to the original values
        row = duprow;
        col = dupcol;

        // Check lower diagonal on the left side
        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        // If it is safe then return true.
        return true;
    }

public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        solve(0, board, ans, n);
        return ans;
    }
};
int main()
{
    int n = 4; // we are taking 4*4 grid and 4 queens
    Solution obj;
    vector<vector<string>> ans = obj.solveNQueens(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Arrangement " << i + 1 << "\n";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, char board[10][10], int n)
{
    // Check upper diagonal on the left side
    int duprow = row;
    int dupcol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }

    // Reset row and col to the original values
    row = duprow;
    col = dupcol;

    // Check left side in the same row
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    // Reset row and col to the original values
    row = duprow;
    col = dupcol;

    // Check lower diagonal on the left side
    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }

    // If it is safe then return true.
    return true;
}

void solve(int col, char board[10][10], int &count, int n)
{
    if (col == n)
    {
        cout << "Arrangement " << ++count << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, count, n);
            board[row][col] = '.';
        }
    }
}

void solveNQueens(int n)
{
    char board[10][10];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = '.';
        }
    }
    solve(0, board, count, n);
}

int main()
{
    int n = 4; // we are taking 4*4 grid and 4 queens
    solveNQueens(n);
    return 0;
}
