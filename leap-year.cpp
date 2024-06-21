#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Year: ";
    cin>>n;
    if((n%4==0 && n%100!=0) || (n%400==0 && n%2000!=0))
    {
        cout<<"Leap Year";
    }
    else{
        cout<<"Non Leap-Year";
    }
}