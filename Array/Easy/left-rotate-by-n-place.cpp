#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of elements: ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    reverse(arr.begin(), arr.end());
    reverse(arr.end()-k, arr.end());
    reverse(arr.begin(), arr.end()-k);

    for(int x: arr)
        cout << x << " ";
    
}