#include <iostream>
using namespace std;

void multiple(int num, int upto, int count)
{
    if (count > upto)
    {
        return;
    }
    cout << num * count << " ";
    count++;
    multiple(num, upto, count);
}

int main()
{
    int num, upto, count = 1;
    cout << "Enter the Number you want multiple of: ";
    cin >> num;
    cout << "Enter the Number of multiples you want of " << num << ": ";
    cin >> upto;
    multiple(num, upto, count);
}