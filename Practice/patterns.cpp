#include <iostream>
using namespace std;

// 1
// 01
// 101
// 0101
// 10101

/*
int main()
{
    int row,col,n;
    cout << "Enter the number of rows and columns: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1; col<=row;col++)
        {
            if((row+col)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
*/

//    1
//   123
//  12345
// 1234567
//  12345
//   123
//    1

/*
int main()
{
    int row,col,n;
    cout << "Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        int space;
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }

    //decreasing
    for(row=n-1;row>=1;row--)
    {
        int space;
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
}
*/

//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1

/*
int main()
{
    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        int space;
        for (space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (col = row - 1; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
    // decreasing
    for (row = n - 1; row >= 1; row--)
    {
        int space;
        for (space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (col = row - 1; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
}
*/

//  *****
//   ***
//    *
//   ***
//  *****

/*
int main()
{
    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        int space;
        for (space = 2*row-1; space >= row; space--)
        {
            cout << " ";
        }
        for (col = 2 * n - 1; col >= 2 * row - 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }

    //decreasing
    for (row = n-1; row >=1; row--)
    {
        int space;
        for (space = 2*row-1; space >= row; space--)
        {
            cout << " ";
        }
        for (col = 2 * n - 1; col >= 2 * row - 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/

//  *********
//   *     *
//    *   *
//     * *
//      *
//     ***
//    *****
//   *******
//  *********

/*
int main()
{
    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        int space;
        for (space = 2 * row - 1; space >= row; space--)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * (n-row) + 1; col++)
        {
            if(row==1 || col==1 || col== 2*(n-row)+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    //decreasing
    for (row = n-1; row >=1; row--)
    {
        int space;
        for (space = 2*row-1; space >= row; space--)
        {
            cout << " ";
        }
        for (col = 2 * n - 1; col >= 2 * row - 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/

int main()
{
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;
    int p=1;
    // int rp = -1; // row parity
    for (row = 1; row <= 2 * n; row++)
    {
        if (row % 2)
        {
            // rp = rp * (-1);
        }
        // int cp = 1 * rp; // column parity
        for (col = 1; col <= n; col++)
        {
            if (p == 1)
            {
                cout << "# # ";
            }
            else
            {
                cout << ". . ";
            }
            p = p * (-1);
        }
            p = p * (-1);
            if(row%2) p = p*(-1);
            if(n%2) p = p*(-1);
        cout << endl;
    }
}