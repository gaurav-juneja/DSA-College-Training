#include <iostream>
using namespace std;

bool isPrime(int n, int i)
{
    // Base cases
    if (n <= 2)
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }

    // Check for next divisor
    return isPrime(n, i + 1);
}

int main()
{
    int n;
    cout << "Enter a Number to check whether it's prime or not: ";
    cin >> n;

    if (isPrime(n, 2))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
