#include <iostream>
#include <bits/stdc++.h>
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

    vector <int> temp;

    for(int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }

    int temp_size = temp.size();

     for (int i = 0; i < temp_size; i++) {
        arr[i] = temp[i];
    }

    //fill rest of the cells with 0:
    for (int i = temp_size; i < n; i++) {
        arr[i] = 0;
    }
    for(int x:arr)
        cout << x << " ";
    
}