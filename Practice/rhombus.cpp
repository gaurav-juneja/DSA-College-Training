#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int row = 1; row <=n; row++)
    {
        //space
        for(col=1; col<=2*(n-row); col++) cout<<" ";
        //number
        for(col=1;col<=row;col++) cout<<col;
        //space
        for(col=1;col<=2*row-3;col++) cout<<" ";
        //number
        if(row!=1)
        for(col=row;col>=1;col--) cout<<col;

        cout<<endl;
    }
    //mirror
    for(int row = n-1; row >=1; row--)
    {
        //space
        for(col=1; col<=2*(n-row); col++) cout<<" ";
        //number
        for(col=1;col<=row;col++) cout<<col;
        //space
        for(col=1;col<=2*row-3;col++) cout<<" ";
        //number
        if(row!=1)
        for(col=row;col>=1;col--) cout<<col;
        cout<<endl;
    }
}