#include <iostream>
using namespace std;

bool rat(int matrix[4][5], int row, int col, int n, int m, int path[4][5])
{
    // Base Case
    if (row == n - 1 && col == m - 1)
    {
        path[row][col] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << path[i][j];
            }
            cout << endl;
        }
        return false;
    }
    path[row][col] = 1;
    bool canReach = false;
    // Recursive Case
    if (matrix[row][col] == 0)
    {
        // right
        if (col + 1 < m && matrix[row][col + 1] == 0)
        {
            canReach = rat(matrix, row, col + 1, n, m, path);
            if (canReach)
                return true;
        }
        //bottom
        if (row + 1 < n && matrix[row + 1][col] == 0)
        {
            canReach = rat(matrix, row + 1, col, n, m, path);
            if (canReach)
                return true;
        }
    }
    path[row][col] = 0;
    return false;
}

int main()
{
    int n = 4, m = 5;
    int row = 0, col = 0;
    int matrix[4][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 1, 1}, {0, 0, 0, 0, 0}};
    int path[4][5] = {};
    rat(matrix, row, col, n, m, path);
}