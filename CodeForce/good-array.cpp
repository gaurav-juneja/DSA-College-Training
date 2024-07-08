#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    bool good = false;

    for (int i = 0; i < n; i++)
    {
        int remove = sum - arr[i];

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int newSum = 0;
                for (int k = 0; k < n; k++)
                {
                    if (k != i && k != j)
                    {
                        newSum += arr[k];
                    }
                }
                if (newSum == arr[j])
                {
                    good = true;
                    break;
                }
            }
            if(good)
            {
                cout<<j<<" ";
            }
        }
    }
}