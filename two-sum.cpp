#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {2, 7, 11, 15};
    int arr[] = {3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int sum=0;
    int left = 0, right = n - 1;
    bool found = false;

    // for (int i = left; i < right; i++)
    while(left<right)
    {
        sum = arr[left] + arr[right];
        if (sum > target)
            right--;
        else if (sum < target)
            left++;
        else
        {
            cout << "Indices are " << left << " and " << right << endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"No such pair found.";
    }
}