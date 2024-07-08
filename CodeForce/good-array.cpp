#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    unordered_map<long long, int> freq;
    long long totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        totalsum += a[i];
    }

    vector<int> good_index;

    for (int i = 0; i < n; i++)
    {
        long long current = a[i];
        long long newsum = totalsum - current;

        if (newsum % 2 == 0)
        {
            long long required = newsum / 2;
            if ((required == current && freq[required] > 1) || (required != current && freq[required] > 0))
            {
                good_index.push_back(i + 1);
            }
        }
    }
    cout << good_index.size() << endl;
    for (int index : good_index)
    {
        cout << index << " ";
    }
    return 0;
}
