#include <iostream>
using namespace std;

int main()
{
    int m = 5;
    int n = 5;
    int matrix[m][n];
    int num = 1;
    int row, col;

    cout << "Enter the elements of 5 X 5 Matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element " << num << " is: ";
            cin >> matrix[i][j];
            num++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int rowDist = abs(2 - row);
    int colDist = abs(2 - col);
    int totalDist = rowDist + colDist;

    cout << "1 will swap " << totalDist << " times to reach center.";
}