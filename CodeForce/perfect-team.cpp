#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int queries;
    int coder, math, nothing;
    cin >> queries;
    int result[queries];

    for (int i = 0; i < queries; i++)
    {
        cin >> coder >> math >> nothing;
        int team_coder = coder;
        int team_math = math;
        int team_total = (coder + math + nothing) / 3;

        int max_teams = min({team_coder, team_math, team_total});

        result[i] = max_teams;
    }
    cout << "Output: " << endl;
    for (int i = 0; i < queries; ++i)
    {
        cout << result[i] << endl;
    }
}