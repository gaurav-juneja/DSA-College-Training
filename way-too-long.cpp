#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Localization";
    int n = s.length();
    int count = 0;
    if (n > 10)
    {
        count = n - 2;
        cout << s[0] << count << s[n - 1];
    }
    else
    {
        cout << s;
    }
}