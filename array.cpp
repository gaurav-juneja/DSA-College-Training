#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 1, -7, -17, 70, 190, 17, 102, -250, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int min = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        else if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    cout << "Max: " << arr[max] << " at index: " << max << endl;
    cout << "Min: " << arr[min] << " at index: " << min << endl;

    cout << "Before: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Swap the minimum value with the first element
    if (min != 0)
    {
        int temp = arr[0];
        arr[0] = arr[min];
        arr[min] = temp;
    }

    // If the maximum value was at the first position, update maxIndex
    if (max == 0)
    {
        max = min;
    }

    // Swap the maximum value with the last element
    if (max != n - 1)
    {
        int temp = arr[n - 1];
        arr[n - 1] = arr[max];
        arr[max] = temp;
    }

    cout << endl;
    cout << "After: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}