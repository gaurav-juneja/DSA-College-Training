#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    vector<int> result(n);

    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            result[left++] = heights[i];
        }
        else
        {
            result[right--] = heights[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}