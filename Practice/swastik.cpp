#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the number : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // first row
            if (row == 0)
            {
                if (col == 0 || col >= n / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            // row above middle
            else if (row < n / 2)
            {
                if (col == 0 || col == n / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            // middle row
            else if (row == n / 2)
            {
                cout << "*";
            }
            // row below middle
            else if (row < n - 1)
            {
                if (col == n / 2 || col == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            // last row
            else
            {
                if (col <= n / 2 || col == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
