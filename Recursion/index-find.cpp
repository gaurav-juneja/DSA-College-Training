#include <iostream>
using namespace std;

int largest(int arr[], int index, int n)
{

    if (index > n)
        return arr[index];

    int y = largest(arr, index + 1, n - 1);
    if (arr[index] > y)
    {
        return arr[index];
    }
    else
    {
        return y;
    }
}
int smallest(int arr[], int index, int n)
{

    if (index > n)
        return arr[index];

    int y = smallest(arr, index + 1, n - 1);
    if (arr[index] < y)
    {
        return arr[index];
    }
    else
    {
        return y;
    }
}

int main()
{
    int arr[] = {30, 9, 25, 40, 27};
    int index = 0;
    int n = 5;
    int x = largest(arr, index, n);
    cout << x << endl;
    int z = smallest(arr, index, n);
    cout << z;
}