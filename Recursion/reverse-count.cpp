#include <iostream>
using namespace std;

void f(int b, int a)
{
    if (b < a)
    {
        return;
    }
    else
    {
        cout << b << " ";
        f(b - 1, a);
    }
}
int main()
{
    int a, b;
    cout << "Enter b and a: " << endl;
    cin >> b >> a;
    f(b, a);
}