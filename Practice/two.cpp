#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an odd number: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i == n / 2)
                cout << "*";
            else if ((i < n / 2 && j == n - 1) || i > n / 2 && j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}