#include <iostream>
using namespace std;

/*
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int size = n1 + n2;
    int ans[size];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        ans[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
*/

// without using 3rd array
int main()
{
    int arr1[9] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int n1 = 5;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int size = n1 + n2;
    int i = n1-1, j = n2-1, k = (n1+n2)-1;

    while (i >=0 && j >=0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            k--;
            i--;
        }
        else
        {
            arr1[k] = arr2[j];
            k--;
            j--;
        }
    }
    while (i >= 0)
    {
        arr1[k] = arr1[i];
        k--;
        i--;
    }
    while (j >= 0)
    {
        arr1[k] = arr2[j];
        k--;
        j--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
}