#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str2)
{
    string filteredStr;
    // Remove spaces and create a filtered string
    for (char c : str2)
    {
        if (c != ' ')
        {
            filteredStr += tolower(c);
        }
    }

    int n = filteredStr.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (filteredStr[i] != filteredStr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1, str2;
    str1 = "Hello_World";
    str2 = "Race car";
    // Reverse str1
    int n1 = str1.length();
    for (int i = 0; i < n1 / 2; i++)
    {
        swap(str1[i], str1[n1 - i - 1]);
    }

    // Check if str2 is a palindrome
    if (isPalindrome(str2))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
