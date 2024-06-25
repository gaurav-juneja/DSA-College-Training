#include <iostream>
#include <algorithm>
using namespace std;

void bubble(int arr[], int n, int i, int j)
{
    if (i == n - 1)
        return;
    if (j == n - i - 1)
    {
        bubble(arr, n, i+1, 0);
        return;
    }
    if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    bubble(arr, n, i, j + 1);
}

int main()
{
    int arr[] = {-23, 42, 49, 73, 29, 14, 78, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}