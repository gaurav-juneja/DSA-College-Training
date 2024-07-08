#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int floor, letter;
    cin >> floor >> letter;
    vector<int> f(floor);
    vector<int> l(letter);

    for (int i = 0; i < floor; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < letter; i++)
    {
        cin >> l[i];
    }

    int total_rooms = 0;
    int current_floor = 0;

    for (int i = 0; i < letter; i++)
    {
        while (l[i] > total_rooms + f[current_floor])
        {
            total_rooms += f[current_floor];
            current_floor++;
        }
        cout << current_floor + 1 << " " << l[i] - total_rooms << endl;
    }
}