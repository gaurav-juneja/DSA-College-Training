#include <iostream>
using namespace std;

int multiple3(int arr[], int n, int index, int currentLargest)
{
    if (index > n)
    {
        return currentLargest;
    }
    if (arr[index] % 3 == 0)
    {
        if (currentLargest == -1 || arr[index] > arr[currentLargest])
        {
            currentLargest = index;
        }
    }
    return multiple3(arr, n, index + 1, currentLargest);
}

int main()
{
    int arr[] = {1, 3, 5, 8, 21, 9, 12, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int currentLargest = -1;
    int index = multiple3(arr, n, 0, -1);

    if (index != -1)
    {
        cout << "The index of the largest multiple of 3 is: " << index << endl;
    }
    else
    {
        cout << "No multiple of 3 found in the array." << endl;
    }
}