#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> strings(n);

    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
    }

    vector<int> result(n);

    for (int k = 0; k < n; k++)
    {
        string s = strings[k];

        int count = 0;
        int maxNo = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                count++;
                maxNo = max(maxNo, count);
            }
            else
            {
                count = 0;
            }
        }
        result[k] = maxNo + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}