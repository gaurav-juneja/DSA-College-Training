#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            arr[i][j] = 2*i + 3*j;
        }
    }
    cout<<*(arr[2]+8);
    
    // int arr[] = {2,3,4,5};
    // cout<<3[arr];
}