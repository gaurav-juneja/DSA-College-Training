#include <iostream>
#include <vector>
using namespace std;

struct Laptop
{
    int speed, ram, hdd, cost;
    int index;
};

int main()
{
    int n;
    cout << "Enter the numbers of Laptops: ";
    cin >> n;
    vector<Laptop> laptops(n);

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the detail of Laptop " << i + 1 << ": " << endl;
        cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >> laptops[i].cost;
        laptops[i].index = i + 1;
    }

    vector<bool> outdated(n, false);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                if (laptops[j].speed > laptops[i].speed &&
                    laptops[j].ram > laptops[i].ram &&
                    laptops[j].hdd > laptops[i].hdd)
                {
                    outdated[i] = true;
                    break;
                }
            }
        }
    }

    int minCost = INT_MAX;
    int chosenLaptop = -1;

    for (int i = 0; i < n; ++i)
    {
        if (!outdated[i] && laptops[i].cost < minCost)
        {
            minCost = laptops[i].cost;
            chosenLaptop = laptops[i].index;
        }
    }

    cout << "Choosen Laptop: " << chosenLaptop << endl;

    return 0;
}
