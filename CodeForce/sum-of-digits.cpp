#include <iostream>
using namespace std;

int digit(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 0;
    }
    int sum = 0;
    while(n>0)
    {
    sum += n%10;
    n=n/10;
    }
    if(sum<10)
    {
        return sum;
    }
    else
    {
        return digit(sum);
    }
    
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int sum = digit(n);
    cout << "Sum of digits of a number is: " << sum;
    
}