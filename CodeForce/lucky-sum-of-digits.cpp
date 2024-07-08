#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_sevens = n / 7; // Maximum possible number of 7s

    while (min_sevens >= 0)
    {
        int remaining_sum = n - min_sevens * 7;
        if (remaining_sum % 4 == 0)
        {
            int num_fours = remaining_sum / 4;
            for (int i = 0; i < num_fours; i++)
            {
                cout << 4;
            }
            for (int i = 0; i < min_sevens; i++)
            {
                cout << 7;
            }
            cout << endl;
            return 0;
        }
        min_sevens--;
    }

    cout << -1 << endl;
    return 0;
}
