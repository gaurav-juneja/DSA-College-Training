#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the sum: ";
    int k;
    cin>>k;

    int len = 0;
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
                sum = sum + arr[j];
                if(sum == k)
                {
                    len = max(len,j-i+1);
                }
        }
    }
    cout<<len;
}