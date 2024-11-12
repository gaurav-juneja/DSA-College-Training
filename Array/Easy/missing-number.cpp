#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int summation = (n*(n+1))/2;
    int sum = 0;

    for(int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }
    cout<<"Missing number is: "<<summation-sum;
}