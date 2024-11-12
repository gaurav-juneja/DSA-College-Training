#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        else
            count = 0;
    }
    int maximum = max(maxCount, count);
    cout<<"The maximum  consecutive 1's are: "<<maximum;
}