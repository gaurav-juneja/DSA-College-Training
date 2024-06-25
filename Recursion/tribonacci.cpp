#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2) + fibo(n - 3);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements of Tribonacci Series: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }
}