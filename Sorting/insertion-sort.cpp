#include <iostream>
using namespace std;

void insert(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int arr[] = {12, 52, 14, 56, 36, 25, 8, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    insert(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}