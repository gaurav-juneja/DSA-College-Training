#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of int: ";
    cin >> n;
    int arr[n];
    cout << "Enter max. no. of lucky digits: ";
    cin >> k;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int luckyCount = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        while (num > 0)
        {
            if (num % 4 == 0 || num % 7 == 0)
            {
                count++;
            }
            num = num / 10;
        }

        if (count <= k)
        {
            luckyCount++;
        }
    }
    cout << "Lucky Digits: " << luckyCount;
}