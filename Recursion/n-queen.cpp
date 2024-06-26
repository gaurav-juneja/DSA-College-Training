#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool isSafe1(int row, int col, vector<string> board, int n)
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
            if (isSafe1(row, col, board, n))
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