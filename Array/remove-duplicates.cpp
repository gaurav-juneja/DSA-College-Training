// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in sorted order: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    int j = s.size();
    int k = 0;
    for (int x : s)
        arr[k++] = x;

    cout << "After deleting duplicate array: ";

    for (int i = 0; i < j; i++)
        cout << arr[i] << " ";
}