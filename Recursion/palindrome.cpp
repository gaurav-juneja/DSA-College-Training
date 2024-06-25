#include <iostream>
#include <string>
using namespace std;

bool pali(const string &s, int f, int l)
{
    if (f >= l)
    {
        return true;
    }
    // remove space
    if (s[f] == ' ')
    {
        return pali(s, f + 1, l);
    }
    if (s[l] == ' ')
    {
        return pali(s, f, l - 1);
    }

    // to lowercase
    char leftChar = s[f];
    char rightChar = s[l];

    if (leftChar >= 'A' && leftChar <= 'Z')
    {
        leftChar = 'a' + (leftChar - 'A');
    }
    if (rightChar >= 'A' && rightChar <= 'Z')
    {
        rightChar = 'a' + (rightChar - 'A');
    }

    if (leftChar != rightChar)
    {
        return false;
    }

    // if (s[f] != s[l])
    // {
    //     return false;
    // }

    return pali(s, f + 1, l - 1);
}

int main()
{
    string s = "Rac ec a r";
    int n = s.length();
    int f = 0;
    int l = n - 1;

    if (pali(s, f, l))
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}
