#include <iostream>
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

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            cout<< target << " found at index "<< i;
        }
    }
}