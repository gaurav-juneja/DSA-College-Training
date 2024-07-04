#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the number : ";
    cin >> n;

    /* Method - 1

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
    */
    
    //Method-2
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if(
            (row==(n/2) || col==(n/2))
            || (col==0 && row<n/2)
            || (row==0 && col>n/2)
            || (row==n-1 && col<n/2)
            || (col==n-1 && row>n/2)
            )
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}


