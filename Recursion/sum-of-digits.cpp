#include <iostream>
using namespace std;

int digit(int n)
{
    if(n==0)
    {
        return 0;
    }    
    return (n%10) + digit(n/10);
}

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Sum of digits of a number is: "<<digit(n);
}