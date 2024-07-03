#include <iostream>
using namespace std;

int digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int ans = (n % 10) + digit(n / 10);
    return ans;
}
bool isPrime(int num)
{
    if (num==0 || num == 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int sum = digit(n);
    cout << "Sum of digits of a number is: " << sum << endl;
    if (isPrime(sum))
        cout << "Prime Number" << endl;
    else
        cout << "Not a prime number" << endl;
}