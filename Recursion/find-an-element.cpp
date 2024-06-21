#include <iostream>
using namespace std;

int find(int arr[], int x, int n, int index)
{
    if (index > n)
        return -1;
    else if (arr[index] == x)
    {
        cout << index;
        return index;
    }
    else
    {
        return find(arr, x, n, index + 1);
    }
}
int main()
{
    int x, n = 9, i = 0;
    int arr[] = {-9, 19, 8, 7, -2, 5, 6, 3, 9};
    cout << "Enter the element to find: ";
    cin >> x;
    find(arr, x, n, i);
}