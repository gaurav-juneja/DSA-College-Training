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

    int max = arr[0];
    int second_max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if(second_max < arr[i] && max != arr[i])
        {
            second_max = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Max: " << second_max << endl;
}