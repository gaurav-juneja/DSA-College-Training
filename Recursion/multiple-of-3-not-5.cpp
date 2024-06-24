#include <iostream>
using namespace std;

int multiple35(int arr[], int n, int index, int currentLargest)
{
    if (index > n)
    {
        return currentLargest;
    }
    if (arr[index] % 3 == 0 && arr[index] % 5 != 0)
    {
        if (currentLargest == -1 || arr[index] > arr[currentLargest])
        {
            currentLargest = index;
        }
    }
    return multiple35(arr, n, index + 1, currentLargest);
}

int main()
{
    int arr[] = {2, 5, 50, 25, 89, 51, 32, 60, 63, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int currentLargest = -1;
    int index = multiple35(arr, n, 0, -1);

    if (index != -1)
    {
        cout << "The index of the largest multiple of 3 but not 5 is: " << index << endl;
    }
    else
    {
        cout << "No multiple of 3 but not 5 found in the array." << endl;
    }
}