#include <iostream>
using namespace std;

int sum(int arr[], int n, int index)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(arr, n - 1, index + 1) + arr[index];
    }
}

int main()
{
    int arr[] = {5, 3, 7, 9};
    int index = 0;
    int n = 4;

    int result = sum(arr, n, index);
    cout << result;
}