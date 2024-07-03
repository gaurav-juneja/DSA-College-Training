#include <iostream>
using namespace std;

void sub(int arr[], int n)
{
    int count = 0;
    int global_max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int max = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                max += arr[k];
            }
            cout << "Sum: " << max;
            cout << endl;
            count++;
             if (max > global_max)
            {
                global_max = max;
            }
        }
    }
   
    cout << "Maximum sum of an subarray: " << global_max << endl;
    cout << "Total number of contiguous subarrays: " << count << endl;
}

int main()
{
    int arr[] = {2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sub(arr, n);

    return 0;
}
