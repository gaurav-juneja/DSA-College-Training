#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int left = 0;
    int right = n - 1;
    int result = -1; // To store the result index, -1 means not found

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
        {
            result = mid;
            break;
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // If the target is smaller, ignore the right half
        else
        {
            right = mid - 1;
        }
    }

    if (result != -1)
    {
        cout << "Element is present at index " << result << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}
