#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    for(int i = 1;i <= n; i++)
    {
        long long maxOffice = pow(2,i);
        sum+= maxOffice;
    }
    cout<<sum;
}