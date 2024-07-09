#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 6, x = 15;
    int ind = upperBound(arr, n, x);
    cout << "The upper bound is the index: " << ind << endl;
    return 0;
}
