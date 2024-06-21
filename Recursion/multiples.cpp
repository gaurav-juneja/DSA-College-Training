#include <iostream>
using namespace std;

void multiple(int num, int upto, int count)
{
    if (count>num)
    {
        return;
    }
    cout << num * count << " ";
    count++;
    multiple(num, upto, count);
}

int main()
{
    int num, upto,ct=1;
    cout << "Enter the Number you want multiple of: ";
    cin >> num;
    cout << "Enter the Number upto which you want multiple: ";
    cin >> upto;
    multiple(num, upto,ct);
}