#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter No. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bool result = sorted(arr,n);
    if(result)  cout << "Sorted" << endl;
    else cout << "Not sorted" << endl;
}