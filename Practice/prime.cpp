#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (x <= 1)
    {
        cout << "Not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}
