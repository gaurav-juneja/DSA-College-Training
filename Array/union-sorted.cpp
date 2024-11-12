#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, m = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int arr2[m] = {2, 3, 4, 4, 5};

    map<int, int> freq;
    vector<int> Union;
    // set <int> s; // by using set

    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
        //s.insert(arr1[i]);

    for (int i = 0; i < m; i++)
        freq[arr2[i]]++;
        //s.insert(arr2[i]);

    for (auto &x : freq)
        Union.push_back(x.first); // first represent the elements of map and second represent the frequencies

    for (int x : Union) // for (auto & x: Union)
        cout << x << " ";
}